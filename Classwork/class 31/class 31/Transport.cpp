#include "Transport.h"

Transport::Transport()
{
	name = _strdup("Unknown");
	speed = 0;
}

Transport::Transport(const char* transName, int transSpeed)
{
	name = _strdup(transName);
	speed = transSpeed;
}

Transport::~Transport()
{
	delete[] name;
}

const char* Transport::getName() const
{
	return name;
}

int Transport::getSpeed(const char* transName)
{
	return speed;
}

void Transport::setName(const char* transName)
{
	delete[] name;
	name = _strdup(transName);
}

void Transport::setSpeed(int transSpeed)
{
	speed = transSpeed;
}

ostream& operator<<(ostream& os, const Transport& obj)
{
	os << "Vehicle: " << obj.name << ", Speed: " << obj.speed << "km/h";
	return os;
}
