#include <iostream>

using namespace std;

int main()
{
 
	// task 1


	//int number;

	//cout << "Enter the number -> ";
	//cin >> number;

	//if (number < 100000 or number > 999999)
	//	cout << "Error: This is not a six-digit number" << endl;
	//else
	//{
	//	int d6 = number % 10;
	//	int d5 = (number / 10) % 10;
	//	int d4 = (number / 100) % 10;
	//	int d3 = (number / 1000) % 10;
	//	int d2 = (number / 10000) % 10;
	//	int d1 = number / 100000;

	//	int sumfirst = d1 + d2 + d3;
	//	int sumlast = d4 + d5 + d6;

	//	if (sumfirst == sumlast)
	//		cout << "this is a six-digit number" << endl;
	//	else
	//		cout << "this is not a six-digit number" << endl;
	//}


	// task 2


	//int number;

	//cout << "Enter the number -> ";
	//cin >> number;

	//if (number < 1000 or number > 9999)
	//	cout << "Error: This is not a four-digit number." << endl;
	//else
	//{
	//	int a = number / 1000;
	//	int b = (number / 100) % 10;
	//	int c = (number / 10) % 10;
	//	int d = number % 10;

	//	int result = (b * 1000) + (a * 100) + (d * 10) + c;

	//	cout << "Result -> " << result << endl;
	//}


	// task 3


	//int num1, num2, num3, num4, num5, num6, num7;

	//cout << "Enter 7 integers -> ";
	//cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

	//int maxNum = num1;

	//if (num2 > maxNum)
	//	maxNum = num2;
	//if (num3 > maxNum)
	//	maxNum = num3;
	//if (num4 > maxNum)
	//	maxNum = num4;
	//if (num5 > maxNum)
	//	maxNum = num5;
	//if (num6 > maxNum)
	//	maxNum = num6;
	//if (num7 > maxNum)
	//	maxNum = num7;


	//cout << "Max number -> " << maxNum << endl;


	// task 4


	//double distAB, distBC, weight;

	//cout << "Enter the distance between points A and B (km) -> ";
	//cin >> distAB;
	//cout << "Enter the distance between points B and C (km) -> ";
	//cin >> distBC;
	//cout << "Enter the weight of the cargo (kg) -> ";
	//cin >> weight;

	//if (weight > 2000 or weight < 0)
	//	cout << "Error: the plane cannot lift more than 2000 kg or the weight is incorrect!" << endl;

	//double consumption = 0;

	//if (weight <= 500)
	//	consumption = 1;
	//else if (weight <= 1000)
	//	consumption = 4;
	//else if (weight <= 1500)
	//	consumption = 7;
	//else
	//	consumption = 9;

	//double fuelAB = distAB * consumption;
	//double fuelBC = distBC * consumption;

	//if (fuelAB > 300 or fuelBC > 300)
	//	cout << "It is impossible to cover the entered distances with this flow rate (exceeds the tank capacity of 300 liters)." << endl;


	//double fuelInB = 300 - fuelAB;

	//double refuel = fuelBC - fuelInB;

	//if (refuel < 0)
	//	refuel = 0;


	//cout << "Minimum amount of fuel for refueling at point B: " << refuel << " Liters." << endl;
}