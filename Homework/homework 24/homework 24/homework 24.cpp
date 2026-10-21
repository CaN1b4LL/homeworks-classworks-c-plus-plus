#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
	MyString s1("hello");
	MyString s2("world");

	cout << "s1: ";
	s1.print();
	cout << "s2: ";
	s2.print();

	MyString s3 = s1 + s2;
	cout << "s1 + s2 = ";
	s3.print();

	MyString s4 = s1 + '!';
	cout << "s1 + '!' = ";
	s4.print();

	MyString s5 = s1 + " world!";
	cout << "s1 + \" world!\" = ";
	s5.print();

	MyString a("apple");
	MyString b("banana");
	MyString c("apple");

	cout << "\nComparison tests: " << endl;
	if (a == c)
		cout << " a == c: True (apple aquals apple)" << endl;

	if (a < b)
		cout << "a < b: True (apple comes before banana)" << endl;

	if (b > a)
		cout << "b > a: True (banana comes after apple)" << endl;




}