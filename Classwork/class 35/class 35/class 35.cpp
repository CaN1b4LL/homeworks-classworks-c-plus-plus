#include <iostream>
#include <string>
#include "Contact.h"
#include "Directory.h"
using namespace std;

void showMenu()
{
	cout << "\n~~~ Compamy Directory ~~~" << endl;
	cout << "1. Show all records" << endl;
	cout << "2. Add new contact" << endl;
	cout << "3. Search by company name" << endl;
	cout << "4. Search by owner" << endl;
	cout << "5. Search by phone" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter your choice: ";
}


int main()
{
	Directory dir("diractiry.txt");
	int choice;

	do {
		showMenu();
		cin >> choice;
		cin.ignore();

		if (choice == 1)
		{
			cout << "\n~~~ All Records ~~~" << endl;
			dir.showAll();
		}
		else if (choice == 2)
		{
			string name, owner, phone, address, activity;
			cout << "Enter company name: ";
			getline(cin, name);
			cout << "Enter owner: ";
			getline(cin, owner);
			cout << "Enter phone: ";
			getline(cin, phone);
			cout << "Enter address: ";
			getline(cin, address);
			cout << "Enter activity: ";
			getline(cin, activity);

			Contact newContact(name, owner, phone, address, activity);
			dir.addContact(newContact);
		}
		else if (choice == 3)
		{
			string name;
			cout << "Enter company name to search: ";
			getline(cin, name);
			dir.searchByCompanyName(name);
		}
		else if (choice == 4)
		{
			string owner;
			cout << "Enter owner to search: ";
			getline(cin, owner);
			dir.searchByOwner(owner);
		}
		else if (choice == 5)
		{
			string phone;
			cout << "Enter phone to search: ";
			getline(cin, phone);
			dir.searchByPhone(phone);
		}
		else if (choice == 6)
		{
			string activity;
			cout << "Enter activity to search: ";
			getline(cin, activity);
			dir.searchByActivity(activity);
		}
		else if (choice == 0)
		{
			cout << "Exiting program. Goodbye!" << endl;
		}
		else
		{
			cout << "Invalid choice! Pleace try again." << endl;
		}
	} while (choice != 0);

}