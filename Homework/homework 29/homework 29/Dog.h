#pragma once
#include "Pet.h"

class Dog;
ostream& operator<<(ostream& os, const Dog& obj);

class Dog : public Pet
{
	string breed;
public:
	Dog();
	Dog(const string& name, const string& breed);
	string getBreed() const;
	void setBreed(const string& val);
	friend ostream& operator<<(ostream& os, const Dog& obj);
};

