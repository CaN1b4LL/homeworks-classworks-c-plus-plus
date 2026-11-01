#include "Dog.h"

Dog::Dog() : Pet("Noname")
{
	breed = "Unknown";
}

Dog::Dog(const string& name, const string& breed) : Pet(name)
{
	this->breed = breed;
}

string Dog::getBreed() const
{
	return breed;
}

void Dog::setBreed(const string& val)
{
	breed = val;
}

ostream& operator<<(ostream& os, const Dog& obj)
{
	os << "Dog -> Name: " << obj.name << ", Breed: " << obj.breed;
	return os;
}
