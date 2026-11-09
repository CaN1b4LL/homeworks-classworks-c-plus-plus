#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Transport
{
protected:
	char* name;
	int speed;
public:
	Transport();
	Transport(const char* trasName, int transSpeed);
	~Transport();
	const char* getName() const;
	int getSpeed(const char* transName);
	void setName(const char* transName);
	void setSpeed(int speed);
	friend ostream& operator<<(ostream& os, const Transport& obj);
};