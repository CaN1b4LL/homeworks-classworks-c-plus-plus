#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
	Cat();
	Cat(const char* name, const char* character);
	void Sound() const override;
	void Show() const override;
	void Type() const override;
};

