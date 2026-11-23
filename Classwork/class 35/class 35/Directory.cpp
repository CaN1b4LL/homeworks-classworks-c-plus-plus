#include "Directory.h"

Directory::Directory(string filename) : filename(filename), count(0)
{
	loadFromFile();
}

void Directory::addContact(const Contact& newContact)
{
	if (count < 400)
	{
		contacts[count] = newContact;
		count++;
		saveToFile();
		cout << "Contact successfully added!" << endl;
	}
	else
	{
		cout << "Directiry is full!" << endl;
	}
}

void Directory::showAll() const
{
	if (count == 0)
	{
		cout << "The directory is empty." << endl;
		return;
	}

	for (int i = 0; i < count; i++)
	{
		contacts[i].print();
	}
}

void Directory::searchByCompanyName(const string& targetName) const
{
	for (int i = 0; i < count; i++)
	{
		if (contacts[i].getCompanyName() == targetName)
		{
			cout << "\nFound record:\n";
			contacts[i].print();
		}
	}
}

void Directory::searchByOwner(const string& targetOwner) const
{
	for (int i = 0; i < count; i++)
	{
		if (contacts[i].getOwner() == targetOwner)
		{
			cout << "\nFound record:\n";
			contacts[i].print();
		}
	}
}

void Directory::searchByPhone(const string& targetPhone) const
{
	for (int i = 0; i < count; i++)
	{
		if (contacts[i].getPhone() == targetPhone)
		{
			cout << "\nFound record:\n";
			contacts[i].print();
		}
	}
}

void Directory::searchByActivity(const string& targetActivity) const
{
	for (int i = 0; i < count; i++)
	{
		if (contacts[i].getActivity() == targetActivity)
		{
			cout << "\nFound record:\n";
			contacts[i].print();
		}
	}
}

void Directory::loadFromFile()
{
	count = 0;
	fstream file(filename, ios::in | ios::binary);
	if (!file.is_open())
		return;
	while (file.peek() != EOF && count < 400)
	{
		contacts[count].readFromFile(file);
		if (file)
			count++;
	}
	file.close();
}

void Directory::saveToFile() const
{
	fstream file(filename, ios::out | ios::binary | ios::trunc);
	if (!file.is_open()) return;
	for (int i = 0; i < count; i++)
	{
		contacts[i].writeToFile(file);
	}
	file.close();
}
