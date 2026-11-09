#pragma once
#include <iostream>
using namespace std;


class Square
{
	float side;
public:
	Square();
	Square(const Square& obj);
	Square(float s);
	float getSide()const;
	void setSide(float s);
	void print()const;
};

