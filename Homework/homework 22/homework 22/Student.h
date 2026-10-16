#pragma once

class Student
{
private:
	char* name;
	int age;
	int* grades;
	int gradeCount;

public:
	Student();
	Student(const char* studentName, int studentAge, const int* studentGrades, int count);
	Student(const Student& other);
	~Student();
	void setName(const char* studentName);
	void setAge(int studentAge);
	void setGrades(const int* newGrades, int count);
	const char* getName() const;
	int getAge() const;
	void printInfo() const;



};