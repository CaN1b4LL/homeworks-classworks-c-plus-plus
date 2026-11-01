#pragma once
#include "test.h"
#include <iostream>
using namespace std;

template<class T>
class Test<T*>
{
	T* data = nullptr;
	int size = 0;
public:
	Test();
	Test(T* arr, int size);
	Test(const Test& obj);
	Test(Test&& obj);
	~Test();
	Test<T*>operator=(const Test& obj);
	Test<T*>operator=(Test&& obj);
	int getSize()const;
	const T* getData()const;
	void setData(const T* arr, int size);
	void print()const;
	Test<T*> operator+(const Test& obj)const;
	template<class N>
	friend ostream& operator<<(ostream& os, const Test<N>& obj);
};

template<class T>
Test<T*>::Test()
{
	data = nullptr;
	size = 0;
}

template<class T>
Test<T*>::Test(T* arr, int s)
{
	size = s;
	if (size > 0 && arr != nullptr)
	{
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = arr[i];
		}
	}
	else
	{
		data = nullptr;
		size = 0;
	}
}

template<class T>
Test<T*>::Test(const Test& obj)
{
	size = obj.size;
	if (size > 0 && obj.data != nullptr)
	{
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = obj.data[i];
		}
	}
	else
	{
		data = nullptr;
		size = 0;
	}
}

template<class T>
Test<T*>::Test(Test&& obj)
{
	data = obj.data;
	size = obj.size;
	obj.data = nullptr;
	obj.size = 0;
}

template<class T>
Test<T*>::~Test()
{
	delete[] data;
}

template<class T>
Test<T*> Test<T*>::operator=(const Test& obj)
{
	if (this == &obj)
		return *this;

	delete[] data;
	size = obj.size;
	if (size > 0 && obj.data != nullptr)
	{
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = obj.data[i];
		}
	}
	else
	{
		data = nullptr;
		size = 0;
	}
	return *this;
}

template<class T>
Test<T*> Test<T*>::operator=(Test&& obj)
{
	if (this == &obj)
		return *this;

	delete[] data;
	data = obj.data;
	size = obj.size;
	obj.data = nullptr;
	obj.size = 0;
	return *this;
}

template<class T>
int Test<T*>::getSize()const
{
	return size;
}

template<class T>
const T* Test<T*>::getData()const
{
	return data;
}

template<class T>
void Test<T*>::setData(const T* arr, int s)
{
	delete[] data;
	size = s;
	if (size > 0 && arr != nullptr)
	{
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = arr[i];
		}
	}
	else
	{
		data = nullptr;
		size = 0;
	}
}

template<class T>
void Test<T*>::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

template<class T>
Test<T*> Test<T*>::operator+(const Test& obj)const
{
	Test<T*> res;
	res.size = size + obj.size;
	res.data = new T[res.size];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		res.data[index++] = data[i];
	}
	for (int i = 0; i < obj.size; i++)
	{
		res.data[index++] = obj.data[i];
	}
	return res;
}

template<class T>
ostream& operator<<(ostream& os, const Test<T*>& obj)
{
	for (int i = 0; i < obj.getSize(); i++)
	{
		os << obj.getData()[i] << " ";
	}
	return os;
}