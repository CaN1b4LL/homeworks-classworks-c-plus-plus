#pragma once
#include <iostream>
#include "Circle.h"
#include "Square.h"
using namespace std;

class CircleInSquare : public Circle, public Square 
{
public:
	CircleInSquare();
	CircleInSquare(float r);
	void print()const;
};

