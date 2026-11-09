#pragma once
#include "Pet.h"

class Parrot : public Pet
{
public:
	Parrot();
	Parrot(const char* name, const char* character);
	void Sound()const override;
	void Show()const override;
	void Type()const override;
};

