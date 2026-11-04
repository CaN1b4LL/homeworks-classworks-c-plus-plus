#pragma once
#include "Animal.h"

class Bird:public Animal
{
    char * color = nullptr;
public:
    Bird();
    Bird(const char * n, int a, const char * c);
    Bird(const Bird &obj);
    Bird(Bird &&obj);
    ~Bird();
    Bird& operator=(const Bird &obj);
    Bird& operator=(Bird &&obj);
    const char * getColor()const;
    void setColor(const char * val);
    friend ostream & operator<<(ostream &os, const Bird&obj);
};
