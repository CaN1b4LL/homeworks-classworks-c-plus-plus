#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car myCar("BMW", "M5", 600, 4.4, "Gasoline", 20, "Winter", 4, "Sport");
	myCar.print();
}