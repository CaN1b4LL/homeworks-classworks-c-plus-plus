#include "Person.h"


Person::Person(const string &name, int age)
{
    this->name = name;
    this->age = age;
}

const string &Person::getName() const
{
    return name;
}

void Person::setName(const string &val)
{
    name = val;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int val)
{
    age = val;
}

ostream & operator<<(ostream &os, const Person &obj)
{
    os<<obj.name<<", "<<obj.age;
    return os;
}