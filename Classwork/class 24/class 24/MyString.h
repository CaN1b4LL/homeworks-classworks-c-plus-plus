#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyString
{
    char* str = nullptr;
    int capacity = 0;
public:
    MyString();
    MyString(int cap);
    MyString(const char* s);
    MyString(const MyString& obj);
    MyString(MyString&& obj);
    ~MyString();
    void print() const;
    void input();
    const char* getStr() const;
    int getSize() const;
    int getCapacity() const;
    MyString& operator=(const MyString& obj);
    MyString& operator=(MyString&& obj);
    MyString operator+(const MyString& obj)const;
};