#include "Inventory.h"

Inventory::Inventory(const string& fname)
{
	file_name = fname;
}

void Inventory::addProduct(const Product& product)
{
	fstream file(file_name, ios::app);
	if (file.is_open())
	{
		file << product.getName() << endl;
		file << product.getId() << endl;
		file << product.getPrice() << endl;
		file << product.getQuantity() << endl;
	}
}

void Inventory::showAll() const
{
	fstream file(file_name, ios::in);
	if (file.is_open())
	{
		string name, id, price, quantity;
		while (getline(file, name) && getline(file, id) && getline(file, price) && getline(file, quantity))
		{
			cout << "Name: " << name << endl;
			cout << "ID: " << id << endl;
			cout << "Price: " << price << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}
}

void Inventory::searchByName(const string& targetName) const
{
	fstream file(file_name, ios::in);
	if (file.is_open())
	{
		string name, id, price, quantity;
		while (getline(file, name) && getline(file, id) && getline(file, price) && getline(file, quantity))
		{
			if (name == targetName)
			{
				cout << "Found!" << endl;
				cout << "Name: " << name << endl;
				cout << "ID: " << id << endl;
				cout << "Price: " << price << endl;
				cout << "Quantity: " << quantity << endl;
			}
		}
	}
}

void Inventory::searchById(int targetId) const
{
	fstream file(file_name, ios::in);
	if (file.is_open())
	{
		string name, id, price, quantity;
		while (getline(file, name) && getline(file, id) && getline(file, price) && getline(file, quantity))
		{
			if (stoi(id) == targetId)
			{
				cout << "Found!" << endl;
				cout << "Name: " << name << endl;
				cout << "ID: " << id << endl;
				cout << "Price: " << price << endl;
				cout << "Quantity: " << quantity << endl;
			}
		}
	}
}

void Inventory::removeById(int targetId)
{
	fstream file(file_name, ios::in);
	if (file.is_open())
	{
		fstream tmp("tmp.txt", ios::out);
		if (tmp.is_open())
		{
			string name, id, price, quantity;
			while (getline(file, name) && getline(file, id) && getline(file, price) && getline(file, quantity))
			{
				if (stoi(id) != targetId)
				{
					tmp << name << endl;
					tmp << id << endl;
					tmp << price << endl;
					tmp << quantity << endl;
				}
			}
			tmp.close();
		}
		file.close();
	}
	remove(file_name.data());
	rename("tmp.txt", file_name.data());
}
