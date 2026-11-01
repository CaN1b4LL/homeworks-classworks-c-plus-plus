#pragma once
#include "test.h"

template<class T>
class TestPtr
{
	T* data = nullptr;
	int size = 0;
public:
	Test();
	Test(t* arr, int size);
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
	friend ostream& operator<<(ostream& os, const Test<N> obj);
};

template<class T>
Test<T*>::Test()
{

}