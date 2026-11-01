#include "Cat.h"

Cat::Cat() : Pet("Noname")
{
	color = "Unknown";
}

Cat::Cat(const string& name, const string& color) : Pet(name)
{
	this->color = color;
}

string Cat::getColor() const
{
	return color;
}

void Cat::setColor(const string& val)
{
	color = val;
}

ostream& operator<<(ostream& os, const Cat& obj)
{
	os << "Cat -> Name: " << obj.name << ", Color: " << obj.color;
	return os;
}
