#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

Student::Student()
{
	name = new char[8];
	strcpy(name, "NoName");
	age = 0;
	gradeCount = 0;
	grades = nullptr;
}

Student::Student(const char* studentName, int studentAge, const int* studentGrades, int count)
{
	if (studentName != nullptr)
	{
		name = new char[strlen(studentName) + 1];
		strcpy(name, studentName);
	}
	else
	{
		name = new char[1] {'\0'};
	}
	age = studentAge;
	gradeCount = count;

	if (count > 0 && studentGrades != nullptr)
	{
		grades = new int[count];
		for (int i = 0; i < count; i++)
		{
			grades[i] = studentGrades[i];
		}
	}
	else
	{
		grades = nullptr;
	}
}

Student::Student(const Student& other)
{
	age = other.age;
	gradeCount = other.gradeCount;

	if (other.name != nullptr)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	else
	{
		name = nullptr;
	}

	if (other.gradeCount > 0 && other.grades != nullptr)
	{
		grades = new int[other.gradeCount];
		for (int i = 0; i < other.gradeCount; i++)
		{
			grades[i] = other.grades[i];
		}
	}
	else
	{
		grades = nullptr;
	}
}

Student::~Student()
{
	delete[] name;
	delete[] grades;
}

void Student::setName(const char* studentName)
{
	if (studentName == nullptr) return;

	delete[] name;
	name = new char[strlen(studentName) + 1];
	strcpy(name, studentName);
}

void Student::setAge(int studentAge)
{
	age = studentAge;
}

void Student::setGrades(const int* newGrades, int count)
{
	delete[] grades;
	gradeCount = count;

	if (count > 0 && newGrades != nullptr)
	{
		grades = new int[count];
		for (int i = 0; i < count; i++)
		{
			grades[i] = newGrades[i];
		}
	}
	else
	{
		grades = nullptr;
	}
}

const char* Student::getName() const
{
	return name;
}

int Student::getAge() const
{
	return age;
}

void Student::printInfo() const
{
	cout << "Name: " << (name ? name : "Unknown") << ", Age: " << age << "\nGrades: ";
	if (gradeCount == 0 || grades == nullptr)
	{
		cout << "Unknown";
	}
	else
	{
		for (int i = 0; i < gradeCount; i++)
		{
			cout << grades[i] << " ";
		}
	}
	cout << endl;
}

