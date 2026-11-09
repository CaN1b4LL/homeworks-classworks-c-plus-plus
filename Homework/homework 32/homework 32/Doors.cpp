#include "Doors.h"

Doors::Doors()
{
	count = 0;
	type = "Unknown";
}

Doors::Doors(int c, const string& t)
{
	this->count = c;
	this->type = t;
}

int Doors::getCount() const
{
	return count;
}

string Doors::getType() const
{
	return type;
}

void Doors::setCount(int c)
{
	count = c;
}

void Doors::setType(const string& t)
{
	type = t;
}

void Doors::print() const
{
	cout << "Doors Count: " << count << endl;
	cout << "Doors Type: " << type << endl;
}
