#pragma once
#include "Pet.h"

class Hamster : public Pet
{
public:
	Hamster();
	Hamster(const char* name, const char* character);
	void Sound()const override;
	void Show()const override;
	void Type()const override;
};

