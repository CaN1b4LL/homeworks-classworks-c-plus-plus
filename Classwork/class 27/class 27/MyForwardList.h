#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
template<class T>
class MyForwardList
{
    Node<T> *first = nullptr;
    Node<T> *last = nullptr;
    int size = 0;
public:
    void pushBack(const T & val);
    void print()const;
};

template<class T>
void MyForwardList<T>::print() const
{
    auto cur = first;
    while (cur!= nullptr)
    {
        cout<<cur->getData()<<" ";
        cur = cur->getNext();
    }
    cout<<endl;
}

template<class T>
void MyForwardList<T>::pushBack(const T &val)
{
    Node<T>*tmp = new Node<T>(val);
    if(size == 0)
        first = last = tmp;
    else
    {
        last->setNext(tmp);
        last = tmp;
    }
    size++;
}
