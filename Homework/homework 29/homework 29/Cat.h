#pragma once
#include "Pet.h"

class Cat;
ostream& operator<<(ostream& os, const Cat& obj);

class Cat : public Pet
{
	string color;
public:
	Cat();
	Cat(const string& name, const string& color);
	string getColor() const;
	void setColor(const string& val);
	friend ostream& operator<<(ostream& os, const Cat& obj);
};

