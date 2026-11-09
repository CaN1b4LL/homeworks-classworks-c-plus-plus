#include "Circle.h"

Circle::Circle()
{
	radius = 1.0;
}

Circle::Circle(const Circle& obj)
{
	radius = obj.radius;
}

Circle::Circle(float r)
{
	radius = r;
}

float Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(float r)
{
	radius = r;
}

void Circle::print() const
{
	cout << "Radius circle: " << radius << endl;
}
