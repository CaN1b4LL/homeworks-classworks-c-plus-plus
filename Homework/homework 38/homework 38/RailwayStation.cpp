#include "RailwayStation.h"

RailwayStation::RailwayStation(const RailwayStation& obj)
	: trains(obj.trains)
{
}

RailwayStation& RailwayStation::operator=(const RailwayStation& obj)
{
	if (this != &obj)
	{
		trains = obj.trains;
	}
	return *this;
}

RailwayStation::RailwayStation(RailwayStation&& obj)
	: trains(std::move(obj.trains))
{
}

RailwayStation& RailwayStation::operator=(RailwayStation&& obj)
{
	if (this != &obj)
	{
		trains = std::move(obj.trains);
	}
	return *this;
}

void RailwayStation::addTrain(const Train& train)
{
	trains.push_back(train);
}

void RailwayStation::addTrain(Train&& train)
{
	trains.push_back(std::move(train));
}

void RailwayStation::printAllTrains() const
{
	if (trains.empty())
	{
		cout << "train list is empty.\n";
		return;
	}

	cout << "\n~~~ All Trains ~~~\n";
	for (size_t i = 0; i < trains.size(); i++)
	{
		cout << i + 1 << ") ";
		trains[i].print();
	}
}

void RailwayStation::findTrainByNumber(const string& num) const
{
	if (trains.empty())
	{
		cout << "train list is empty.\n";
		return;
	}

	bool found = false;
	for (size_t i = 0; i < trains.size(); i++)
	{
		if (trains[i].getNumber() == num)
		{
			cout << "Found-> ";
			trains[i].print();
			found = true;
			break;
		}
	}

	if (!found)
	{
		cout << "A train with this number was not found.\n";
	}
}

void RailwayStation::run()
{
	int choice = 0;

	do
	{
		cout << "\n~~~ Railway Station system ~~~\n";
		cout << "1. Add trains\n";
		cout << "2. Show all trains\n";
		cout << "3. Find a train by number\n";
		cout << "0. Exit\n";
		cout << "Enter a choice: ";
		cin >> choice;

		if (choice == 0)
		{
			break;
		}
		else if (choice == 1)
		{
			string num, time, dest;
			cout << "Enter train number: ";
			cin >> num;
			cout << "Enter departure time: ";
			cin >> time;
			cout << "Enter your destination station: ";
			cin.ignore();
			getline(cin, dest);

			addTrain(Train(num, time, dest));
			cout << "Train added!\n";
		}
		else if (choice == 2)
		{
			printAllTrains();
		}
		else if (choice == 3)
		{
			string search_num;
			cout << "Enter the train number to search: ";
			cin >> search_num;
			findTrainByNumber(search_num);
		}
		else
		{
			cout << "Invalid menu item.\n";
		}
	} while (choice != 0);
}
