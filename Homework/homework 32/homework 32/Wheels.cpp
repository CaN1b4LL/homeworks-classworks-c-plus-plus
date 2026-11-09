#include "Wheels.h"

Wheels::Wheels()
{
	size = 0;
	tireType = "Unknown";
}

Wheels::Wheels(int s, const string& tp)
{
	this->size = s;
	this->tireType = tp;
}

int Wheels::getSize() const
{
	return size;
}

string Wheels::getTireType() const
{
	return tireType;
}

void Wheels::setSize(int s)
{
	size = s;
}

void Wheels::setTireType(const string& tp)
{
	tireType = tp;
}

void Wheels::print() const
{
	cout << "Wheels Size: " << size << "\"" << endl;
	cout << "Tire Type: " << tireType << endl;
}
