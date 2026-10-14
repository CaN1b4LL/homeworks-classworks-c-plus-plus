#include <iostream>
using namespace std;


class Point
{
private:
	double x;
	double y;
	double z;

public:
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Point(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double getX() const 
	{ 
		return x;
	}
	double getY() const 
	{ 
		return y; 
	}
	double getZ() const 
	{
		return z; 
	}

	void setX(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}
	void setZ(double z)
	{
		this->z = z;
	}

	void print() const
	{
		cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
	}
};




int main()
{
	Point p1;
	Point p2(3.5, -2.0, 5.1);

	cout << "Point 1 (default): " << endl;
	p1.print();
	cout << "\nPoint 2 (with parameters): " << endl;
	p2.print();

	p2.setX(10.0);
	p2.setY(20.0);
	p2.setZ(30.0);

	cout << "\nPoint 2 (after using setters): " << endl;
	p2.print();



}
