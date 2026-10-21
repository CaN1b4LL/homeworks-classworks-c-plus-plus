#pragma once
#include <iostream>

class Point
{
	static int quantity;
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	~Point();
	void setX(int val);
	void setY(int val);
	int getX()const;
	int getY()const;
	static int getQuantity();
	void print()const;
	Point operator+(const Point& obj)const;
	Point operator-(const Point& obj)const;
	bool operator==(const Point& obj)const;
	bool operator!=(const Point& obj)const;
	Point operator-()const;
	Point& operator++();
	Point operator++(int);
	explicit operator int() const;
	explicit operator const char *() const;
};