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

void Contact::writeToFile(fstream& fs) const
{
	int size = companyName.length();
	fs.write((char*)&size, sizeof(int));
	fs.write(companyName.c_str(), size);

	size = owner.length();
	fs.write((char*)&size, sizeof(int));
	fs.write(owner.c_str(), size);

	size = phone.length();
	fs.write((char*)&size, sizeof(int));
	fs.write(phone.c_str(), size);

	size = address.length();
	fs.write((char*)&size, sizeof(int));
	fs.write(address.c_str(), size);

	size = activity.length();
	fs.write((char*)&size, sizeof(int));
	fs.write(activity.c_str(), size);
}

void Contact::readFromFile(fstream& fs)
{
	int size = 0;
	fs.read((char*)&size, sizeof(int));
	char* tmp1 = new char[size + 1] {};
	fs.read(tmp1, size);
	companyName = tmp1;
	delete[] tmp1;

	fs.read((char*)&size, sizeof(int));
	char* tmp2 = new char[size + 1] {};
	fs.read(tmp2, size);
	owner = tmp2;
	delete[] tmp2;

	fs.read((char*)&size, sizeof(int));
	char* tmp3 = new char[size + 1] {};
	fs.read(tmp3, size);
	phone = tmp3;
	delete[] tmp3;

	fs.read((char*)&size, sizeof(int));
	char* tmp4 = new char[size + 1] {};
	fs.read(tmp4, size);
	address = tmp4;
	delete[] tmp4;

	fs.read((char*)&size, sizeof(int));
	char* tmp5 = new char[size + 1] {};
	fs.read(tmp5, size);
	activity = tmp5;
	delete[] tmp5;

}
