#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MySharedPtr
{
private:
	T* ptr;
	int* count;
public:
	MySharedPtr(T* p = nullptr) : ptr(p) {
		if (ptr)
			count = new int(1);
		else
			count = nullptr;
	}
	MySharedPtr(const MySharedPtr& obj) : ptr(obj.ptr), count(obj.count) {
		if (count)
			(*count)++;
	}
	MySharedPtr& operator=(const MySharedPtr& obj) {
		if (this != &obj)
		{
			release();
			ptr = obj.ptr;
			count = obj.count;
			if (count)
			{
				(*count)++;
			}
		}
		return *this;
	}
	~MySharedPtr() {
		release();
	}
	T& operator*()const { return *ptr; }
	T* operator->()const { return ptr; }
	T* get()const { return ptr; }
	int useCount()const {
		return count ? *count : 0;
	}
	void release() {
		if (count)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
			ptr = nullptr;
			count = nullptr;
		}
	}
};