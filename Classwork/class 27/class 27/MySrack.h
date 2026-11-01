#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyStack
{
	T* arr = nullptr;
	int capacity = 0;
	int top = -1;
public:
	MyStack();
	MyStack(int cap);
	MyStack(const MyStack& obj);
	MyStack(MyStack&& obj);
	~MyStack();
	MyStack<T> &operator=(const MyStack& obj);
	MyStack<T> &operator=(MyStack&& obj);
	void push(const T& val);
	T pop();
	T peek()const;
	int getCapacity()const;
	int getSize()const;
	bool isEmpty() const;
	bool isFull()const;
};

template<class T>
inline MyStack<T>::MyStack()
{
}

template<class T>
inline MyStack<T>::MyStack(int cap)
{
	capacity = cap;
	arr = new T[capacity]{};
}

template<class T>
inline MyStack<T>::MyStack(const MyStack& obj)
{
	capacity = obj.capacity;
	top = obj.top;
	arr = new T[capacity]{};
	for (int i = 0; i <= top; i++)
	{
		arr[i] = obj.arr[i];
	}
}

template<class T>
inline MyStack<T>::MyStack(MyStack&& obj)
{
	capacity = obj.capacity;
	top = obj.top;
	arr = obj.arr;
	obj.capacity = 0;
	obj.top = -1;
	obj.arr = nullptr;
}

template<class T>
inline MyStack<T>::~MyStack()
{
	delete[] arr;
}

template<class T>
inline MyStack<T>& MyStack<T>::operator=(const MyStack& obj)
{
	if (this == &obj)
		return *this;
	delete[] arr;
	capacity = obj.capacity;
	top = obj.top;
	for (int i = 0; i <= top; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

template<class T>
inline MyStack<T>& MyStack<T>::operator=(MyStack&& obj)
{
	if (this == &obj)
		return *this;

	delete[] arr;
	capacity = obj.capacity;
	top = obj.top;
	arr = obj.arr;
	obj.capacity = 0;
	obj.top = -1;
	obj.arr = nullptr;
	
	return *this;
}

template<class T>
inline void MyStack<T>::push(const T& val)
{
	arr[++top] == val;
}

template<class T>
inline T MyStack<T>::pop()
{
	return arr[top--];
}

template<class T>
inline T MyStack<T>::peek() const
{
	return arr[top];
}

template<class T>
inline int MyStack<T>::getCapacity() const
{
	return capacity;
}

template<class T>
inline int MyStack<T>::getSize() const
{
	return top+1;
}

template<class T>
inline bool MyStack<T>::isEmpty() const
{
	return top == -1;
}

template<class T>
inline bool MyStack<T>::isFull() const
{
	return top == capacity-1;
}
