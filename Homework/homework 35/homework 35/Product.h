#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Product
{
private:
	string name_product;
	int id;
	double price;
	int quantity;
public:
	Product();
	Product(const string& name, int i, double p, int q);
	string getName()const;
	int getId()const;
	double getPrice()const;
	int getQuantity()const;
	void setName(const string& name);
	void setId(int i);
	void setPrice(double p);
	void setQuantity(int q);
	void print()const;
};

