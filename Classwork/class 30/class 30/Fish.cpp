#include "Fish.h"

Fish::Fish()
{
    freshWater = true;
}

Fish::Fish(const char *n, int a, bool fW)
:Animal(n, a)
{
    freshWater = fW;
}

bool Fish::isFreshWater() const
{
    return freshWater;
}

void Fish::setFreshWater(bool val)
{
    freshWater = val;
}
ostream & operator<<(ostream &os, const Fish&obj)
{
    os<<"Fish: "<<obj.getName()<<", "<<obj.getAge()<<", "<<(obj.freshWater?"Fresh water":"Salt water");
    return os;
}