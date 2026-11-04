#pragma once
#include "Animal.h"

class Fish:public Animal
{
    bool freshWater;
public:
    Fish();
    Fish(const char *n, int a, bool fW);
    bool isFreshWater()const;
    void setFreshWater(bool val);
    friend ostream & operator<<(ostream &os, const Fish&obj);
};
