#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
using namespace std;


int counter()
{
	static int n = 1;
	return n++;
}


int main()
{

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << counter() << " ";
	//}


	//Point a(12, 23), b;
	//a.print();
	//cout << Point::getQuantity() << endl;
	//{
	//	Point b;
	//	b.print();
	//	cout << Point::getQuantity() << endl;
	//}
	//cout << Point::getQuantity() << endl;

	/*
		?:, sizeof, #, ##, ., .*
	*/

	Point a(1,2), b(1,2);
	
	int num = (int)a;
	cout << num << endl;
	cout << (const char*)a << endl;



	//a = -a;
	
	//(a++).print();
	//a.print();

	//if (a != b)
	//{
	//	cout << "True" << endl;
	//}
	//else
	//{
	//	cout << "False" << endl;
	//}

	//Point с = a.operator+(b);
	//Point c = a - b;
	//c.print();

}