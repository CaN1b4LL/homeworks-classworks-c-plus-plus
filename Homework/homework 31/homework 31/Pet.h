#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
protected:
	char* name;
	char* character;
public:
	Pet();
	Pet(const char* petName, const char* petCharacter);
	virtual ~Pet();
	const char* getName()const;
	const char* getCharacter()const;
	const char* setName(const char* petName);
	void setCharacter(const char* petCharacter);
	virtual void Sound() const;
	virtual void Show() const;
	virtual void Type() const;
};

