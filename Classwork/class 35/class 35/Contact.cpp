#include "Contact.h"

Contact::Contact() = default;

Contact::Contact(string companyName, string owner, string phone, string address, string activity)
	: companyName(companyName), owner(owner), phone(phone), address(address), activity(activity)
{
}

string Contact::getCompanyName() const
{
	return companyName;
}

string Contact::getOwner() const
{
	return owner;
}

string Contact::getPhone() const
{
	return phone;
}

string Contact::getAddress() const
{
	return address;
}

string Contact::getActivity() const
{
	return activity;
}

void Contact::setCompanyName(const string& newName)
{
	companyName = newName;
}

void Contact::setOwner(const string& newOwner)
{
	owner = newOwner;
}

void Contact::setPhone(const string& newPhone)
{
	phone = newPhone;
}

void Contact::setAddress(const string& newAddress)
{
	address = newAddress;
}

void Contact::setActivity(const string& newActivity)
{
	activity = newActivity;
}

void Contact::print() const
{
	cout << "Company: " << companyName << endl;
	cout << "Owner: " << owner << endl;
	cout << "Phone: " << phone << endl;
	cout << "Address: " << activity << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
