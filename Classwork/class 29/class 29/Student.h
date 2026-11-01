#pragma once

#include "Person.h"

class Student : public Person
{
    int id = 0;
public:
    Student();
    Student(const string &name, int age, int id);
    int getId()const;
    void setId(int val);
    friend ostream &operator<<(ostream &os, const Student &obj);
};
