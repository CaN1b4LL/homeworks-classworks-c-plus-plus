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
    MyForwardList();
    MyForwardList(const MyForwardList<T>& obj);
    MyForwardList(MyForwardList<T>&& obj);
    ~MyForwardList();
    void pushBack(const T & val);
    void print()const;
    void popFront();
    void popBack();
    void removeAt(int pos);
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
inline void MyForwardList<T>::popFront()
{
    if (size == 0)
        return;
    if (size == 1)
    {
        delete first;
        first = last = nullptr;
    }
    else
    {
        auto tmp = first;
        first = first->getNext();
        delete tmp;
    }
    size--;
}

template<class T>
inline void MyForwardList<T>::popBack()
{
    if (size == 0)
        return;
    if (size == 1)
    {
        delete first;
        first = last = nullptr;
        size = 0;
        return;
    }
    
    auto cur = first;
    //for (int i = 1; i < size - 1; i++)
    //{
    //    cur = cur->getNext();
    //}
    while (cur->getNext()->getNext())
    {
        cur = cur->getNext();
    }
    delete last;
    last = cur;
    last->setNext(nullptr);
    size--;
}

template<class T>
inline void MyForwardList<T>::removeAt(int pos)
{
    if (pos < 0 || pos >= size)
        return;
    if (pos == 0)
    {
        popFront();
        return;
    }
    if (pos == size - 1)
    {
        popBack();
        return;
    }

    // дописать этот кусок как домашнюю работу.
}

template<class T>
inline MyForwardList<T>::MyForwardList() = default;

template<class T>
inline MyForwardList<T>::MyForwardList(const MyForwardList<T>& obj)
{
    auto cur = first;
    while (cur != nullptr)
    {
        pushBack(cur->getData());
        cur = cur->getNext();
    }
}

template<class T>
inline MyForwardList<T>::MyForwardList(MyForwardList<T>&& obj)
{
    size = obj.size;
    first = obj.first;
    last = obj.last;
    obj.size = 0;
    obj.last = nullptr;
    obj.first = nullptr;
}

template<class T>
inline MyForwardList<T>::~MyForwardList()
{
    //Node<T>* tmp = nullptr;
    //while (first != nullptr)
    //{
    //    tmp = first;
    //    first = first->getNext();
    //    delete tmp;
    //}

    while (size != 0)
    {
        popFront();
    }
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
