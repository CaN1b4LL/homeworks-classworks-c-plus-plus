#pragma once
#include "Pet.h"

class Parrot;
ostream& operator<<(ostream& os, const Parrot& obj);

class Parrot : public Pet
{
	bool canSpeak;
public:
	Parrot();
	Parrot(const string& name, bool canSpeak);
	bool getCanSpeak() const;
	void setCanSpeak(bool val);
	friend ostream& operator<<(ostream& os, const Parrot& obj);
};

