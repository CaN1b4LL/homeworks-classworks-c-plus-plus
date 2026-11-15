#include <iostream>
#include "Inventory.h"
using namespace std;

int main()
{
	Inventory shop("products.txt");
	
	int choice = 0;

	do {
		cout << "\n~~~ Inventory Menu ~~~" << endl;
		cout << "1. Show all products" << endl;
		cout << "2. Add product" << endl;
		cout << "3. Search by ID" << endl;
		cout << "4. Search by Name" << endl;
		cout << "5. Remove by ID" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1:
				shop.showAll();
				break;
			case 2: {
				Product p;
				string name;
				int id;
				double price;
				int quantity;

				cout << "Enter name: ";
				cin >> name;
				p.setName(name);

				cout << "Enter ID: ";
				cin >> id;
				p.setId(id);

				cout << "Enter price: ";
				cin >> price;
				p.setPrice(price);

				cout << "Enter quantity: ";
				cin >> quantity;
				p.setQuantity(quantity);

				shop.addProduct(p);
				break;
			}
			case 3: {
				int targetId;
				cout << "Enter ID to search: ";
				cin >> targetId;
				shop.searchById(targetId);
				break;
			}
			case 4: {
				string targetName;
				cout << "Enter name to search: ";
				cin >> targetName;
				shop.searchByName(targetName);
				break;
			}
			case 5: {
				int targetId;
				cout << "Enter ID to remove: ";
				cin >> targetId;
				shop.removeById(targetId);
				break;
			}
			case 0:
				cout << "Exiting program..." << endl;
				break;
			default:
				cout << "Invalid choice!" << endl;
		}
	} while (choice != 0);
}