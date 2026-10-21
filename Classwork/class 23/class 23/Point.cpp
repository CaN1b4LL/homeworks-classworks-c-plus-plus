#include "Point.h"
#include <iostream>
using namespace  std;

int Point::quantity = 0;

Point::Point(): Point(0,0)
{
}

Point::Point(int x, int y): x(x), y(y)
{
	//this->x = x;
	//Point::y = y;
	quantity++;
}

Point::~Point()
{
	//cout << "~Point() for X = " << x << ", Y = " << y << endl;
	quantity--;
}

void Point::setX(int val)
{
	x = val;
}

void Point::setY(int val)
{
	y = val;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

int Point::getQuantity()
{
	return quantity;
}

void Point::print() const
{
	cout << " X = " << x << ", Y = " << y << endl;
}

Point Point::operator +(const Point& obj) const
{
	return Point(x + obj.x, y + obj.y);
}

Point Point::operator-(const Point& obj) const
{
	return Point(x - obj.x, y + obj.y);
}

bool Point::operator==(const Point& obj) const
{
	return x == obj.x && y == obj.y;
}

bool Point::operator!=(const Point& obj) const
{
	return !(*this == obj);
}

Point Point::operator-() const
{
	return Point(-this->x, -this->y);
}

Point& Point::operator++()
{
	x++;
	y++;
	return *this;
}

Point Point::operator++(int)
{
	Point tmp = *this;
	x++;
	y++;
	return tmp;
}

Point::operator int() const
{
	return x + y;
}

Point::operator const char* () const
{
	return "Some Point";
}

