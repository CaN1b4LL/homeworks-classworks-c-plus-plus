#include "Bird.h"

Bird::Bird()
{
    color = _strdup("Unknown");
}

Bird::Bird(const char *n, int a, const char *c)
:Animal(n,a)
{
    color = _strdup(c);
}

Bird::Bird(const Bird &obj):Animal(obj)
{
    color = _strdup(obj.color);
}

Bird::Bird(Bird &&obj):Animal(std::move(obj))
{
    color = obj.color;
    obj.color = nullptr;
}

Bird::~Bird()
{
    delete [] color;
}

Bird &Bird::operator=(const Bird &obj)
{
    if(this == &obj)
        return *this;
    Animal::operator=(obj);
    delete[]color;
    color = _strdup(obj.color);
    return *this;
}

Bird &Bird::operator=(Bird &&obj)
{
    if(this == &obj)
        return *this;
    delete[]color;
    color = obj.color;
    obj.color = nullptr;
    Animal::operator=(std::move(obj));
    return *this;
}

const char *Bird::getColor() const
{
    return color;
}

void Bird::setColor(const char *val)
{
    delete[] color;
    color = _strdup(val);
}

ostream & operator<<(ostream & os, const Bird&obj)
{
    os<<"Bird: "<<obj.getName()<<", "<<obj.getAge()<<", "<<obj.color;
    return os;
}