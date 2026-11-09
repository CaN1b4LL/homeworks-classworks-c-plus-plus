#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Doors
{
private:
	int count;
	string type;
public:
	Doors();
	Doors(int c, const string& t);
	int getCount()const;
	string getType()const;
	void setCount(int c);
	void setType(const string& t);
	void print()const;
};

