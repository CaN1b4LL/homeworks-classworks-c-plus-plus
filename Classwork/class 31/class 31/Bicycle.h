#pragma once
#include "Transport.h"

class Bicycle : public Transport 
{
private:
	bool Gears;
public:
	Bicycle();
	Bicycle(const char* transName, int transSpeed, bool gears);
	bool getGears() const;
	void setGears(bool gears);
	friend ostream& operator<<(ostream& os, const Bicycle& obj);
};

