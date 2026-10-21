#include "MyString.h"
#include <iostream>

void print_my_string(const MyString obj)
{
	obj.print();
}

MyString create_my_string(const char* s)
{
	MyString tmp(s);
	return tmp;
}

int main()
{
	//MyString s = create_my_string("Hello");

	MyString s1("Hello");
	MyString s2("world");
	MyString result = s1 + s2;
	result.print();

	
	//int num = 12;
	//int& ref = num;
	//cout << ref << endl;
	//int&& r_ref = num;
}