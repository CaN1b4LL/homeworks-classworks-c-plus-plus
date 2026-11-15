#include "Directory.h"

Directory::Directory(string filename) : filename(filename)
{
}

void Directory::addContact(const Contact& newContact)
{
	fstream file(filename, ios::out | ios::app);
	if (file.is_open())
	{
		file << newContact.getCompanyName() << endl;
		file << newContact.getOwner() << endl;
		file << newContact.getPhone() << endl;
		file << newContact.getAddress() << endl;
		file << newContact.getActivity() << endl;
		file << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		file.close();
		cout << "Contact successfully added to file." << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}
}

void Directory::showAll() const
{
	fstream file(filename, ios::in);
	if (file.is_open())
	{
		string line;
		bool isEmpty = true;
		while (getline(file, line))
		{
			cout << line << endl;
			isEmpty = false;
		}
		file.close();
		if (isEmpty)
			cout << "The directori is empty." << endl;
		else
			cout << "Error!" << endl;
	}
}

void Directory::searchByCompanyName(const string& targetName) const
{
	fstream file(filename, ios::in);
	if (!file.is_open())
	{
		cout << "Error opening file." << endl;
	}

	string comp, owner, phone, addr, act, sep;
	bool found = false;
	while (getline(file, comp) && getline(file, owner) && getline(file, phone) && getline(file, addr) &&
		getline(file, act) && getline(file, sep))
	{
		if (comp == targetName)
		{
			cout << "\nFound record:\n";
			cout << "Company: " << comp << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << addr << endl;
			cout << "Actibity: " << act << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			found = true;
		}
	}
	file.close();

	if (!found)
	{
		cout << "Company with name\"" << targetName << "\" not found." << endl;
	}
}

void Directory::searchByOwner(const string& targetOwner) const
{
	fstream file(filename, ios::in);
	if (!file.is_open())
	{
		cout << "Error opening file." << endl;
	}

	string comp, owner, phone, addr, act, sep;
	bool found = false;
	while (getline(file, comp) && getline(file, owner) && getline(file, phone) && getline(file, addr) &&
		getline(file, act) && getline(file, sep))
	{
		if (owner == targetOwner)
		{
			cout << "\nFound record:\n";
			cout << "Company: " << comp << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << addr << endl;
			cout << "Actibity: " << act << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			found = true;
		}
	}
	file.close();

	if (!found)
	{
		cout << "Owner \"" << targetOwner << "\" not found." << endl;
	}
}

void Directory::searchByPhone(const string& targetPhone) const
{
	fstream file(filename, ios::in);
	if (!file.is_open())
	{
		cout << "Error opening file." << endl;
	}

	string comp, owner, phone, addr, act, sep;
	bool found = false;
	while (getline(file, comp) && getline(file, owner) && getline(file, phone) && getline(file, addr) &&
		getline(file, act) && getline(file, sep))
	{
		if (phone == targetPhone)
		{
			cout << "\nFound record:\n";
			cout << "Company: " << comp << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << addr << endl;
			cout << "Actibity: " << act << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			found = true;
		}
	}
	file.close();

	if (!found)
	{
		cout << "Phone number \"" << targetPhone << "\" not found." << endl;
	}
}

void Directory::searchByActivity(const string& targetActivity) const
{
	fstream file(filename, ios::in);
	if (!file.is_open())
	{
		cout << "Error opening file." << endl;
	}

	string comp, owner, phone, addr, act, sep;
	bool found = false;
	while (getline(file, comp) && getline(file, owner) && getline(file, phone) && getline(file, addr) &&
		getline(file, act) && getline(file, sep))
	{
		if (act == targetActivity)
		{
			cout << "\nFound record:\n";
			cout << "Company: " << comp << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << addr << endl;
			cout << "Actibity: " << act << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			found = true;
		}
	}
	file.close();

	if (!found)
	{
		cout << "Activity \"" << targetActivity << "\" not found." << endl;
	}
}