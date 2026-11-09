#pragma once
#include "Transport.h"

class Car : public Transport
{
private:
	int doorsCount;
public:
	Car();
	Car(const char* transName, int transSpeed, int doors);
	int getDoorsCount() const;
	void setDoorsCount(int doors);
	friend ostream& operator<<(ostream& os, const Car& obj);
};

