#include "Animal.h"

Animal::Animal()
{
    age = 0;
//    name = new char[strlen("Noname")+1]{};
//    strcpy(name, "Noname");
    name = _strdup("Noname");
}

Animal::Animal(const char *n, int a)
{
    age = a;
    name = _strdup(n);
}

Animal::Animal(const Animal &obj)
{
    age = obj.age;
    name = _strdup(obj.name);
}

Animal::Animal(Animal &&obj)
{
    age = obj.age;
    name = obj.name;
    obj.name = nullptr;
}

Animal::~Animal()
{
    delete[] name;
}

Animal &Animal::operator=(const Animal &obj)
{
    if (this == &obj)
        return *this;
    delete[] name;
    age = obj.age;
    name = _strdup(obj.name);
    return *this;
}

Animal &Animal::operator=(Animal &&obj)
{
    if (this == &obj)
        return *this;
    delete[] name;

    age = obj.age;
    name = obj.name;
    obj.name = nullptr;

    return *this;
}

const char *Animal::getName() const
{
    return name;
}

void Animal::setName(const char *val)
{
    delete[] name;
    name = _strdup(val);
}

int Animal::getAge() const
{
    return age;
}

void Animal::setAge(int val)
{
    age = val;
}

ostream &operator<<(ostream &os, const Animal &obj)
{
    os<<"Animal: "<<obj.name<<", "<<obj.age;
    return os;
}