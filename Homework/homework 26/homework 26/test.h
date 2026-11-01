#pragma once
#include <iostream>
using namespace std;

template<class T>
class Test
{
	T data;
public:
	Test();
	Test(const T& obj);
	T getData()const;
	void setData(const T& val);
	void print()const;
	Test<T> operator+(const Test& obj)const;
	template<class N>
	friend ostream& operator<<(ostream& os, const Test<N>& obj);
};

template<class T>
ostream& operator<<(ostream& os, const Test<T>& obj)
{
	os << obj.getData();
	return os;
}


template<class T>
inline Test<T>::Test()
{
	
}

template<class T>
inline Test<T>::Test(const T& obj)
{
	data = obj;
}

template<class T>
inline T Test<T>::getData() const
{
	return T();
}

template<class T>
inline void Test<T>::setData(const T& val)
{
	data = val;
}

template<class T>
inline void Test<T>::print() const
{
	cout << data << endl;
}

template<class T>
Test<T> Test<T>::operator+(const Test& obj) const
{
	return Test<T>(data+obj.data);
}

