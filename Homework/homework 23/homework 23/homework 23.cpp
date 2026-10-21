#include "Fraction.h"
#include <iostream>
using namespace std;



int main()
{
	Fraction f1(1, 2);
	Fraction f2(1, 3);

	cout << "First fraction: ";
	f1.print();
	cout << "Second fraction: ";
	f2.print();

	Fraction sum = f1 + f2;
	cout << "Sum (1/2 + 1/3): ";
	sum.print();

	double decimal = f1;
	cout << "First fraction as double: " << decimal << endl;

	if (f1 > f2)
		cout << "First fraction is greater than second." << endl;
	else
		cout << "First fraction is not greater than second." << endl;

}