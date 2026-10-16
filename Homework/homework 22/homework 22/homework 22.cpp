#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	int initialGrades[] = { 10, 12, 9, 11, 10 };
	int count = 5;

	Student s1("Oleksandr", 19, initialGrades, count);
	cout << "~~~~~~~~~ Student 1 ~~~~~~~~~" << endl;
	s1.printInfo();

	s1.setName("Max");
	s1.setAge(20);

	int newGrades[] = { 8, 9, 10 };
	s1.setGrades(newGrades, 3);

	cout << "\n~~~~~~~~~ Student 1 (new)~~~~~~~~~" << endl;
	s1.printInfo();

	Student s2;
	cout << "\n~~~~~~~~~ Student 2 ~~~~~~~~~" << endl;
	s2.printInfo();

}