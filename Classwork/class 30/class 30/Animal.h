#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Animal
{
    char * name = nullptr;
    int age = 0;
public:
    Animal();
    Animal(const char * n, int a);
    Animal(const Animal &obj);
    Animal(Animal && obj);
    ~Animal();
    Animal& operator =(const Animal &obj);
    Animal& operator =(Animal && obj);
    const char * getName()const;
    void setName(const char * val);
    int getAge()const;
    void setAge(int val);
    friend ostream & operator<<(ostream & os, const Animal &obj);
};
