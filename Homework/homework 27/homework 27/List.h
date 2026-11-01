#pragma once
#include <iostream>
using namespace std;

template <class T>
class Node
{
	T data;
	Node<T>* next = nullptr;
public:
	Node(const T& val);
	T getData()const;
	void setData(const T& val);
	Node<T>* getNext() const;
	void setNext(Node<T>* val);
};

template<class T>
class List
{
	Node<T>* first = nullptr;
	Node<T>* last = nullptr;
	int size = 0;
public:
	List();
	List(const List& obj);
	List(List&& obj);
	~List();
	void pushBack(const T& val);
	void pushFront(const T& val);
	void insert(int index, const T& val);
	void popBack();
	void popFront();
	void removeAt(int index);
	void print() const;
	List<T>& operator=(const List& obj);
	List<T>& operator=(List&& obj);
};

template<class T>
inline Node<T>::Node(const T& val)
{
	data = val;
	next = nullptr;
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
inline void Node<T>::setNext(Node<T>* val)
{
	next = val;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

template<class T>
inline List<T>::List()
{
	first = nullptr;
	last = nullptr;
	size = 0;
}

template<class T>
inline List<T>::List(const List& obj)
{
	Node<T>* cur = obj.first;
	while (cur != nullptr)
	{
		pushBack(cur->getData());
		cur = cur->getNext();
	}
}

template<class T>
inline List<T>::List(List&& obj)
{
	first = obj.first;
	last = obj.last;
	size = obj.size;
	obj.first = obj.last = nullptr;
	obj.size = 0;
}

template<class T>
inline List<T>::~List()
{
	while (first != nullptr)
	{
		Node<T>* tmp = first;
		first = first->getNext();
		delete tmp;
	}
}

template<class T>
inline void List<T>::pushBack(const T& val)
{
	Node<T>* tmp = new Node<T>(val);
	if (size == 0)
		first = last = tmp;
	else
	{
		last->setNext(tmp);
		last = tmp;
	}
	size++;
}

template<class T>
inline void List<T>::pushFront(const T& val)
{
	Node<T>* tmp = new Node<T>(val);
	if (size == 0)
		first = last = tmp;
	else
	{
		tmp->setNext(first);
		first = tmp;
	}
	size++;
}

template<class T>
inline void List<T>::insert(int index, const T& val)
{
	if (index <= 0) { pushFront(val); return; }
	if (index >= size) { pushBack(val); return; }

	Node<T>* cur = first;
	for (int i = 0; i < index - 1; i++)
	{
		cur = cur->getNext();
	}
	Node<T>* tmp = new Node<T>(val);
	tmp->setNext(cur->getNext());
	cur->setNext(tmp);
	size++;
}

template<class T>
inline void List<T>::popBack()
{
	if (size == 0) return;
	if (size == 1) { popFront(); return; }
	Node<T>* cur = first;
	while (cur->getNext() != last)
	{
		cur = cur->getNext();
	}
	delete last;
	last = cur;
	last->setNext(nullptr);
	size--;
}

template<class T>
inline void List<T>::popFront()
{
	if (size == 0) return;
	Node<T>* tmp = first;
	first = first->getNext();
	delete tmp;
	size--;
	if (size == 0) last = nullptr;
}

template<class T>
inline void List<T>::removeAt(int index)
{
	if (index < 0 || index >= size) return;
	if (index == 0) { popFront(); return; }
	if (index == size - 1) { popBack(); return; }

	Node<T>* cur = first;
	for (int i = 0; i < index - 1; i++)
	{
		cur = cur->getNext();
	}
	Node<T>* toDelete = cur->getNext();
	cur->setNext(toDelete->getNext());
	delete toDelete;
	size--;
}

template<class T>
inline void List<T>::print() const
{
	Node<T>* cur = first;
	while (cur != nullptr)
	{
		cout << cur->getData() << " ";
		cur = cur->getNext();
	}
	cout << endl;
}

template<class T>
inline List<T>& List<T>::operator=(const List& obj)
{
	if (this == &obj) return *this;

	while (first != nullptr)
	{
		Node<T>* tmp = first;
		first = first->getNext();
		delete tmp;
	}
	first = last = nullptr;
	size = 0;

	Node<T>* cur = obj.first;
	while (cur != nullptr)
	{
		pushBack(cur->getData());
		cur = cur->getNext();
	}
	return *this;
}

template<class T>
inline List<T>& List<T>::operator=(List&& obj)
{
	if (this == &obj) return *this;

	while (first != nullptr)
	{
		Node<T>* tmp = first;
		first = first->getNext();
		delete tmp;
	}

	first = obj.first;
	last = obj.last;
	size = obj.size;
	obj.first = obj.last = nullptr;
	obj, size = 0;
	return *this;
}
