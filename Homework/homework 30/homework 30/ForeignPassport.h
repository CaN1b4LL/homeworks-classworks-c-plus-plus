#pragma once
#include "Passport.h"

class ForeignPassport : public Passport
{
protected:
	string foreingPssportNumber;
	string visas;
public:
	ForeignPassport();
	ForeignPassport(const string& fullName, const string& passportNumber, const string& issueDate,
		const string& foreingPassportNumber, const string& visas);
	string getForeingPassportNumber() const;
	void setForeingPassportNuber(const string& val);
	string getVisas();
	void setVisas(const string& val);
	friend ostream& operator<<(ostream& os, const ForeignPassport& obj);
};

