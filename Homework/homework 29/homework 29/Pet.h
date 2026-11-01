#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Pet;
ostream& operator<<(ostream& os, const Pet& obj);

class Pet
{
protected:
	string name;
public:
	Pet(const string& name);
	const string& getName() const;
	void setName(const string& val);
	friend ostream& operator<<(ostream& os, const Pet& obj);
};