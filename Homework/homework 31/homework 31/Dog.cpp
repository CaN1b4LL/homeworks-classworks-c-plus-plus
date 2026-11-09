#include "Dog.h"

Dog::Dog() : Pet("Bobic", "secure")
{

}

Dog::Dog(const char* name, const char* character) : Pet(name, character)
{

}

void Dog::Sound() const
{
	cout << "Gav-gav!" << endl;
}

void Dog::Show() const
{
	cout << "Name dog: " << name << " | Character: " << character << endl;
}

void Dog::Type() const
{
	cout << "Type: Dog" << endl;
}
