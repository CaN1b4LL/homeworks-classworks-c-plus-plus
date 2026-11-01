#include "Parrot.h"

Parrot::Parrot() : Pet("Noname")
{
	canSpeak = false;
}

Parrot::Parrot(const string& name, bool canSpeak) : Pet(name)
{
	this->canSpeak = canSpeak;
}

bool Parrot::getCanSpeak() const
{
	return canSpeak;
}

void Parrot::setCanSpeak(bool val)
{
	canSpeak = val;
}

ostream& operator<<(ostream& os, const Parrot& obj)
{
	os << "Parrot -> Name: " << obj.name << ", Can speak: " << (obj.canSpeak ? "Yes" : "No");
	return os;
}
