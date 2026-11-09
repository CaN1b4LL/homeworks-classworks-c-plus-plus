#include "Car.h"

Car::Car() : Engine(), Wheels(), Doors()
{
	brand = "Unknown";
	model = "Unknown";
}

Car::Car(const string& b, const string& m, int hp, double vol, const string& fuel, int wSize, const string& tire, int dCount, const string& dType)
	: Engine(hp, vol, fuel), Wheels(wSize, tire), Doors(dCount, dType)
{
	this->brand = b;
	this->model = m;
}

string Car::getBrand() const
{
	return brand;
}

string Car::getModel() const
{
	return model;
}

void Car::setBrand(const string& b)
{
	brand = b;
}

void Car::setModel(const string& m)
{
	model = m;
}

void Car::print() const
{
	cout << "~~~ Car Info ~~~" << endl;
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "~~~ Engine ~~~" << endl;
	Engine::print();
	cout << "~~~ Wheels ~~~" << endl;
	Wheels::print();
	cout << "~~~ Doors ~~~" << endl;
	Doors::print();
}
