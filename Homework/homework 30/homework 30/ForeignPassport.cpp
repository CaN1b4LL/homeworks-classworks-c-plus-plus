#include "ForeignPassport.h"

ForeignPassport::ForeignPassport() : Passport()
{
	foreingPssportNumber = "FA000000";
	visas = "No visas";
}

ForeignPassport::ForeignPassport(const string& fullName, const string& passportNumber, const string& issueDate, const string& foreingPassportNumber, const string& visas)
	: Passport(fullName, passportNumber, issueDate)
{
	this->foreingPssportNumber = foreingPassportNumber;
	this->visas = visas;
}

string ForeignPassport::getForeingPassportNumber() const
{
	return foreingPssportNumber;
}

void ForeignPassport::setForeingPassportNuber(const string& val)
{
	foreingPssportNumber = val;
}

string ForeignPassport::getVisas()
{
	return visas;
}

void ForeignPassport::setVisas(const string& val)
{
	visas = val;
}

ostream& operator<<(ostream& os, const ForeignPassport& obj)
{
	os << "Foreign passport:\n"
		<< " PIB: " << obj.fullName << "\n"
		<< " Foreign passport No. : " << obj.issueDate << "\n"
		<< " Internal issue date: " << obj.issueDate << "\n"
		<< " Number Foreing passport: " << obj.foreingPssportNumber << "\n"
		<< " Visas: " << obj.visas;
	return os;
}
