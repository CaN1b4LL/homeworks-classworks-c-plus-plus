#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyUniquePtr
{
private:
	T* ptr;
public:
	MyUniquePtr(T* p = nullptr) : ptr(p) {};
	~MyUniquePtr() {
		delete ptr;
	};
	MyUniquePtr(const MyUniquePtr&) = delete;
	MyUniquePtr& operator=(const MyUniquePtr&) = delete;
	MyUniquePtr(MyUniquePtr&& obj) : ptr(obj.ptr) {
		obj.ptr = nullptr;
	};
	MyUniquePtr& operator=(MyUniquePtr&& obj) {
		if (this != &obj)
		{
			delete ptr;
			ptr = obj.ptr;
			obj.ptr = nullptr;
		}
		return *this;
	};
	T& operator*()const { return *ptr; }
	T* operator->()const { return ptr; }
	T* get()const { return ptr; }
	void reset(T* p = nullptr) {
		if (ptr != p)
		{
			delete ptr;
			ptr = p;
		}
	}
	T* release() {
		T* temp = ptr;
		ptr = nullptr;
		return temp;
	}
};