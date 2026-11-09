#include "Parrot.h"

Parrot::Parrot() : Pet("Kesha", "Can speak phrases")
{
}

Parrot::Parrot(const char* name, const char* character) : Pet(name, character)
{
}

void Parrot::Sound() const
{
	cout << "Chic-chiric!" << endl;
}

void Parrot::Show() const
{
	cout << "Name Parrot: " << name << " | Character: " << character << endl;
}

void Parrot::Type() const
{
	cout << "Type: Parrot" << endl;
}
