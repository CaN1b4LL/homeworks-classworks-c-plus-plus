#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Product.h"
using namespace std;

class Inventory
{
private:
	string file_name;
public:
	Inventory(const string& fname);
	void addProduct(const Product& product);
	void showAll()const;
	void searchByName(const string& targetName)const;
	void searchById(int targetId)const;
	void removeById(int targetId);
};

