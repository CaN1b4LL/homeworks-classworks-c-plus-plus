#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Passport
{
protected:
	string fullName;
	string passportNumber;
	string issueDate;
public:
	Passport();
	Passport(const string& fullName, const string& passportNumber, const string& issueDate);
	string getFullName() const;
	void setFullName(const string& val);
	string getPassportNumber() const;
	void setPassportNumber(const string& val);
	string getIssueDate();
	void setIssueDate(const string& val);
	friend ostream& operator<<(ostream& os, const Passport& obj);
};

