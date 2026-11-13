#pragma once
#include <iostream>
using namespace std;

template<class T>
class Node
{
	T data;
	Node<T>* next = nullptr;
	Node<T>* prev = nullptr;
public:
	Node(const T& val);
	T getData()const;
	void setData(const T& val);
	Node<T>* getNext()const;
	Node<T>* getPrev()const;
	void setNext(Node<T>* val);
	void setPrev(Node<T>* val);
};

template<class T>
inline Node<T>::Node(const T& val)
{
	data = val;
}

template<class T>
inline T Node<T>::getData() const
{
	return data;
}

template<class T>
inline void Node<T>::setData(const T& val)
{
	data = val;
}

template<class T>
inline Node<T>* Node<T>::getNext() const
{
	return next;
}

template<class T>
inline Node<T>* Node<T>::getPrev() const
{
	return prev;
}

template<class T>
inline void Node<T>::setNext(Node<T>* val)
{
	next = val;
}

template<class T>
inline void Node<T>::setPrev(Node<T>* val)
{
	prev = val;
}
