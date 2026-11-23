#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Contact
{
private:
	string companyName;
	string owner;
	string phone;
	string address;
	string activity;
public:
	Contact();
	Contact(string companyName, string owner, string phone, string address, string activity);
	string getCompanyName()const;
	string getOwner()const;
	string getPhone()const;
	string getAddress()const;
	string getActivity()const;
	void setCompanyName(const string& newName);
	void setOwner(const string& newOwner);
	void setPhone(const string& newPhone);
	void setAddress(const string& newAddress);
	void setActivity(const string& newActivity);
	void print()const;
	void writeToFile(fstream& fs) const;
	void readFromFile(fstream& fs);
};

