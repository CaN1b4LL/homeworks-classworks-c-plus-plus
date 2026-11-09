#include "Car.h"

Car::Car() : Transport("Car", 120)
{
	doorsCount = 4;
}

Car::Car(const char* transName, int transSpeed, int doors) : Transport(transName, transSpeed)
{
	doorsCount = doors;
}

int Car::getDoorsCount() const
{
	return doorsCount;
}

void Car::setDoorsCount(int doors)
{
	doorsCount = doors;
}

ostream& operator<<(ostream& os, const Car& obj)
{
	os << "Car: " << obj.name << ", Speed: " << obj.speed << " km/h, Doors: " << obj.doorsCount;
	return os;
}
