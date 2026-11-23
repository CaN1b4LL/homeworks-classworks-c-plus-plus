#include "Train.h"

Train::Train()
	: number(""), departure_time(""), destination("")
{
}

Train::Train(const string num, const string time, const string dest)
	: number(num), departure_time(time), destination(dest)
{
}

Train::Train(const Train& obj)
	: number(obj.number), departure_time(obj.departure_time), destination(obj.destination)
{
}

Train& Train::operator=(const Train& obj)
{
	if (this != &obj)
	{
		number = obj.number;
		departure_time = obj.departure_time;
		destination = obj.destination;
	}
	return *this;
}

Train::Train(Train&& obj)
	: number(std::move(obj.number)), departure_time(std::move(obj.departure_time)), destination(std::move(obj.destination))
{
}

Train& Train::operator=(Train&& obj)
{
	if (this != &obj)
	{
		number = std::move(obj.number);
		departure_time = std::move(obj.departure_time);
		destination = std::move(obj.destination);
	}
	return *this;
}

const string& Train::getNumber() const
{
	return number;
}

const string& Train::getDepartureTime() const
{
	return departure_time;
}

const string& Train::getDestination() const
{
	return destination;
}

void Train::print() const
{
	cout << "Number: " << number
		<< " | Time: " << departure_time
		<< " | Destination: " << destination << endl;
}
