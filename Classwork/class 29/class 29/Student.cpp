#include "Student.h"

Student::Student(): Person("Noname", 0)
{
    setAge(123);
    getName();
}

Student::Student(const string &name, int age, int id)
:Person(name, age)
{
    this->id = id;
}

int Student::getId() const
{
    return id;
}

void Student::setId(int val)
{
    id = val;
}


ostream &operator<<(ostream &os, const Student &obj)
{
    os<<obj.name<<", "<<obj.age<<", "<<obj.id;
    return os;
}