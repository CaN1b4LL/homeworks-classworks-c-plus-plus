#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
	char name[50];
	int age;

public:
	Student()
	{
		strcpy(Student::name, "Unknown");
		Student::age = 0;
	}

	Student(char* name, int age)
	{
		strcpy(Student::name, name);
		Student::age = age;
	}

	char* getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}

	void setName(char* name)
	{
		strcpy(Student::name, name);
	}

	void setAge(int age)
	{
		Student::age = age;
	}

	void print()
	{
		cout << "Student Name: " << name << ", Age: " << age << endl;
	}
};

int main()
{

	char studentName[] = "Nikita";
	Student s1(studentName, 21);
	s1.print();

	Student s2;
	char newName[] = "Vasya";
	s2.setName(newName);
	s2.setAge(19);
	s2.print();


}