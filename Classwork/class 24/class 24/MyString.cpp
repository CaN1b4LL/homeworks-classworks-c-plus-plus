#include "MyString.h"

MyString::MyString()
{
    cout << "MyString()" << endl;
    capacity = 80;
    str = new char[capacity] {};
}

MyString::MyString(int cap)
{
    cout << "MyString(int)" << endl;
    capacity = cap;
    str = new char[capacity] {};
}

MyString::MyString(const char* s)
{
    cout << "MyString(const char *)" << endl;
    capacity = strlen(s) + 1;
    str = new char[capacity] {};
    strcpy(str, s);
}

MyString::MyString(const MyString& obj)
{
    cout << "MyString(const MyString&)" << endl;
    capacity = obj.capacity;
    str = new char[capacity] {};
    strcpy(str, obj.str);
}
MyString::MyString(MyString&& obj)
{
    cout << "MyString(MyString&&)" << endl;
    capacity = obj.capacity;
    str = obj.str;
    obj.str = nullptr;
}

MyString::~MyString()
{
    cout << "~MyString()" << endl;
    delete[] str;
    capacity = 0;
}

void MyString::print() const
{
    cout << str << endl;
}

void MyString::input()
{
    char buf[500];
    cin.getline(buf, 500);
    int len = strlen(buf);
    if (len < capacity)
    {
        strcpy(str, buf);
        return;
    }
    delete[]str;
    capacity = len + 1;
    str = new char[capacity] {};
    strcpy(str, buf);
}

const char* MyString::getStr() const
{
    return str;
}

int MyString::getSize() const
{
    return strlen(str);
}

int MyString::getCapacity() const
{
    return capacity;
}

MyString& MyString::operator=(const MyString& obj)
{
    cout << "MyString &operator=(const MyString&)" << endl;
    if (this == &obj)
        return *this;

    delete[] str;

    capacity = obj.capacity;
    str = new char[capacity] {};
    strcpy(str, obj.str);
    return *this;
}

MyString& MyString::operator=(MyString&& obj)
{
    cout << "MyString &operator=(MyString&&)" << endl;

    if (this == &obj)
        return *this;

    delete[] str;

    capacity = obj.capacity;
    str = obj.str;
    obj.str = nullptr;
    return *this;

}

MyString MyString::operator+(const MyString& obj) const
{
    MyString tmp(getSize() + obj.getSize() + 1);
    strcpy(tmp.str, str);
    strcat(tmp.str, obj.str);
    return tmp;
}

