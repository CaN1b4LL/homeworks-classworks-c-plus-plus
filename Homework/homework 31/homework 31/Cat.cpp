#include "Cat.h"

Cat::Cat() : Pet("Murka", "Likes to sleep in the sun")
{
}

Cat::Cat(const char* name, const char* character) : Pet(name, character)
{
}

void Cat::Sound() const
{
	cout << "Mau-mau!" << endl;
}

void Cat::Show() const
{
	cout << "Name cat: " << name << " | Character: " << character << endl;
}

void Cat::Type() const
{
	cout << "Type: Cat" << endl;
}
