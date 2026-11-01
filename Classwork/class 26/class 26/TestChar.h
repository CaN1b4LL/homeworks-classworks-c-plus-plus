#pragma once
#include "test.h"

template<>
class Test<char*>
{
	char* data = nullptr;
public:
	Test();
	Test(const char* val);
	Test(const Test& obj);
	Test(Test&& obj);
	~Test();
	Test& operator=(const Test& obj);
	Test& operator=(Test&& obj);
	const char* getData()const;
	void setData(const char* val);
	void print()const;
	Test<char*> operator+(const Test& obj);
	friend ostream& operator<<(ostream& os, const Test& obj);
};


Test<char*>::Test()
{
	data = nullptr;
}

Test<char*>::Test(const char* val)
{
	data = new char[strlen(val) + 1];
	strcpy(data, val);
}

Test<char*>::Test(const Test& obj)
{
	if (obj.data)
	{
		data = new char[strlen(obj.data) + 1];
		strcpy(data, obj.data);
	}
}

Test<char*>::Test(Test&& obj)
{
	swap(data, obj.data);
}

Test<char*>::~Test()
{
	delete[] data;
}

Test<char*>& Test<char*>::operator=(const Test& obj)
{
	if (this == &obj)
		return *this;
	delete[] data;
	data = nullptr;
	if (obj.data)
	{
		data = new char[strlen(obj.data) + 1];
		strcpy(data, obj.data);
	}
	return *this;
}

Test<char*>& Test<char*>::operator=(Test&& obj)
{
	if (this == &obj)
		return *this;
	delete[] data;
	data = nullptr;
	swap(data, obj.data);
	return *this;
}

const char* Test<char*>::getData()const
{
	return data;
}

void Test<char*>::setData(const char* val)
{
	delete[] data;
	data = new char[strlen(val) + 1];
	strcpy(data, val);
}

void Test<char*>::print()const
{
	cout << (data?data:"NoData") << endl;
}

Test<char*> Test<char*>::operator+(const Test& obj)
{
	Test<char*> tmp;
	tmp.data = new char[strlen(data) + strlen(obj.data) + 1] {};
	strcpy(tmp.data, data);
	strcat(tmp.data, obj.data);
	return tmp;
}

ostream& operator<<(ostream& os, const Test<char*>& obj)
{
	os << (obj.data?obj.data:"NoData");
	return os;
}