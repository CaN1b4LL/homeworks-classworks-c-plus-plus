#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
	Dog();
	Dog(const char* name, const char* character);
	void Sound() const override;
	void Show() const override;
	void Type() const override;
};

