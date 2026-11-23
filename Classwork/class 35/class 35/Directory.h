#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Contact.h"
using namespace std;

class Directory
{
private:
	string filename;
	Contact contacts[400];
	int count;
public:
	Directory(string filename);
	void addContact(const Contact& newContact);
	void showAll()const;
	void searchByCompanyName(const string& targetName)const;
	void searchByOwner(const string& targetOwner)const;
	void searchByPhone(const string& targetPhone)const;
	void searchByActivity(const string& targetActivity)const;
	void loadFromFile();
	void saveToFile()const;

};

