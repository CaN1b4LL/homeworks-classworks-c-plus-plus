#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	Circle c{ 3, {1,1} };
	cout << "Radius = " << c.r << "X = " << c.a.x << "Y = " << c.a.y << endl;

	Rectangle r{ 3, 4, {1,1} };
	cout << "Width = " << r.w << "Height = " << r.h << "X = " << c.a.x << "Y = " << c.a.y << endl;

}
