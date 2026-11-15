#include "Product.h"

Product::Product()
{
	name_product = "Unknown";
	id = 0;
	price = 0;
	quantity = 0;
}

Product::Product(const string& name, int i, double p, int q)
{
	name_product = name;
	id = i;
	price = p;
	quantity = q;
}

string Product::getName() const
{
	return name_product;
}

int Product::getId() const
{
	return id;
}

double Product::getPrice() const
{
	return price;
}

int Product::getQuantity() const
{
	return quantity;
}

void Product::setName(const string& name)
{
	name_product = name;
}

void Product::setId(int i)
{
	id = i;
}

void Product::setPrice(double p)
{
	price = p;
}

void Product::setQuantity(int q)
{
	quantity = q;
}

void Product::print() const
{
	cout << "Product: " << name_product << endl;
	cout << "ID: " << id << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
}