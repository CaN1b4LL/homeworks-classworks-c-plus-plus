#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Engine
{
private:
	int horsePower;
	double volume;
	string fuelType;
public:
	Engine();
	Engine(int horsePower, double volume, const string& fuelType);
	int getHorsePower()const;
	double getVolume()const;
	string getFuelType()const;
	void setHorsePower(int hp);
	void setVolume(double v);
	void setFuelType(const string& val);
	void print()const;
};

