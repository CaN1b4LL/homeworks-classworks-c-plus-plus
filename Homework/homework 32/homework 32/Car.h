#pragma once
#include "Engine.h"
#include "Wheels.h"
#include "Doors.h"

class Car : public Engine, public Wheels, public Doors
{
private:
	string brand;
	string model;
public:
	Car();
	Car(const string& b, const string& m, int hp, double vol, const string& fuel, int wSize,
		const string& tire, int dCount, const string& dType);
	string getBrand()const;
	string getModel()const;
	void setBrand(const string& b);
	void setModel(const string& m);
	void print()const;
};

