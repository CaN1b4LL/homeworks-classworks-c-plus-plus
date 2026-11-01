#include "Pet.h"

Pet::Pet(const string& name)
{
	this->name = name;
}

const string& Pet::getName() const
{
	return name;
}

void Pet::setName(const string& val)
{
	name = val;
}

ostream& operator<<(ostream& os, const Pet& obj)
{
	os << "Name: " << obj.name;
	return os;
}
