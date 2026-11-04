#include "Passport.h"

Passport::Passport()
{
	fullName = "Unknown";
	passportNumber = "000000000";
	issueDate = "04.06.2000";
}

Passport::Passport(const string& fullName, const string& passportNumber, const string& issueDate)
{
	this->fullName = fullName;
	this->passportNumber = passportNumber;
	this->issueDate = issueDate;
}

string Passport::getFullName() const
{
	return fullName;
}

void Passport::setFullName(const string& val)
{
	fullName = val;
}

string Passport::getPassportNumber() const
{
	return passportNumber;
}

void Passport::setPassportNumber(const string& val)
{
	passportNumber = val;
}

string Passport::getIssueDate()
{
	return issueDate;
}

void Passport::setIssueDate(const string& val)
{
	issueDate = val;
}

ostream& operator<<(ostream& os, const Passport& obj)
{
	os << "Passport of a citizen of Ukraine:\n"
		<< " PIB: " << obj.fullName << "\n"
		<< " Passport number: " << obj.passportNumber << "\n"
		<< " Issue date: " << obj.issueDate;
	return os;
}
