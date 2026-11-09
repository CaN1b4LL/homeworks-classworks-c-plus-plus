#include "Hamster.h"

Hamster::Hamster() : Pet("Pushistik", "Hides grains behind cheeks")
{
}

Hamster::Hamster(const char* name, const char* character) : Pet(name, character)
{
}

void Hamster::Sound() const
{
	cout << "Pisk-pisk!" << endl;
}

void Hamster::Show() const
{
	cout << "Name Hamster: " << name << " | Character: " << character << endl;
}

void Hamster::Type() const
{
	cout << "Type: Hamster" << endl;
}
