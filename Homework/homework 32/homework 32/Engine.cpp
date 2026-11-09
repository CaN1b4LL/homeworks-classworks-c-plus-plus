#include "Engine.h"

Engine::Engine()
{
	horsePower = 0;
	volume = 0.0;
	fuelType = "Unknown";
}

Engine::Engine(int horsePower, double volume, const string& fuelType)
{
	this->horsePower = horsePower;
	this->volume = volume;
	this->fuelType = fuelType;
}

int Engine::getHorsePower() const
{
	return horsePower;
}

double Engine::getVolume() const
{
	return volume;
}

string Engine::getFuelType() const
{
	return fuelType;
}

void Engine::setHorsePower(int hp)
{
	horsePower = hp;
}

void Engine::setVolume(double v)
{
	volume = v;
}

void Engine::setFuelType(const string& val)
{
	fuelType = val;
}

void Engine::print() const
{
	cout << "Engine Power: " << horsePower << " HP" << endl;
	cout << "Engine Volume: " << volume << " L" << endl;
	cout << "Fuel Type: " << fuelType << endl;
}
