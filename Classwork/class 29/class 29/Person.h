#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(const string & name, int age);
    const string & getName()const;
    void setName(const string &val);
    int getAge()const;
    void setAge(int val);
    friend ostream & operator<<(ostream &os, const Person &obj);
};
