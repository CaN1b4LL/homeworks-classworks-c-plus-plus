#pragma once
#include <iostream>
using namespace std;

class Circle
{
	float radius;
public:
	Circle();
	Circle(const Circle& obj);
	Circle(float r);
	float getRadius()const;
	void setRadius(float r);
	void print()const;
};

