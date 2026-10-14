#include <iostream>
#include "calc.h"
#include "operations.h"

using namespace std;

void runCalculator()
{
	double num1, num2;
	int choice;

	cout << "~~~ CALCULATOR ~~~" << endl;
	cout << "1. Addition (+)" << endl;
	cout << "2. Subtraction (-)" << endl;
	cout << "3. Multiplication (*)" << endl;
	cout << "4. Division (/)" << endl;
	cout << "Enter your choice (1-4): " << endl;
	cin >> choice;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	switch (choice)
	{
	case 1:
		cout << "Result: " << add(num1, num2) << endl;
		break;
	case 2:
		cout << "Result: " << subtract(num1, num2) << endl;
		break;
	case 3:
		cout << "Result: " << multiply(num1, num2) << endl;
		break;
	case 4:
		if (num2 != 0)
		{
			cout << "Result: " << divide(num1, num2) << endl;
		}
		else
		{
			cout << "Error: Division by zero!" << endl;
		}
		break;
	default:
		cout << "Invalid choice!" << endl;
	}
}