#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Wheels
{
private:
	int size;
	string tireType;
public:
	Wheels();
	Wheels(int s, const string& tp);
	int getSize()const;
	string getTireType()const;
	void setSize(int s);
	void setTireType(const string& tp);
	void print()const;
};

