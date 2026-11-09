#include "Pet.h"

Pet::Pet()
{
	name = _strdup("Unknown");
	character = _strdup("Missing");
}

Pet::Pet(const char* petName, const char* petCharacter)
{
	name = _strdup(petName);
	character = _strdup(petCharacter);
}

Pet::~Pet()
{
	delete[] name;
	delete[] character;
}

const char* Pet::getName() const
{
	return name;
}

const char* Pet::getCharacter() const
{
	return character;
}

const char* Pet::setName(const char* petName)
{
	delete[] name;
	name = _strdup(petName);
	return name;
}

void Pet::setCharacter(const char* petCharacter)
{
	delete[] character;
	character = _strdup(petCharacter);
}

void Pet::Sound() const
{
	cout << "The animal makes a sound." << endl;
}

void Pet::Show() const
{
	cout << "Name: " << name << " | Character: " << character << endl;
}

void Pet::Type() const
{
	cout << "Type: pet" << endl;
}
