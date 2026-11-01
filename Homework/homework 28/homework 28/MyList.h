#pragma once
#include "Node.h"

template<class T>
class MyList
{
	int size = 0;
	Node<T>* first = nullptr;
	Node<T>* last = nullptr;
public:
	MyList();
	MyList(const MyList<T>& obj);
	~MyList();
	MyList(MyList<T>&& obj);
	void insert(int index, const T& val);
	void pushFront(const T& val);
	void printForward()const;
	void pushBack(const T& val);
	void popFront();
	void popBack();
	void remove(int index);
	void sort();
	MyList<T>& operator=(const MyList<T>& obj);
	MyList<T>& operator=(MyList<T>&& obj);
};

template<class T>
inline MyList<T>::MyList() = default;

template<class T>
inline MyList<T>::MyList(const MyList<T>& obj)
{
	Node<T>* cur = obj.first;
	while (cur != nullptr)
	{
		pushBack(cur->getData());
		cur = cur->getNext();
	}
}

template<class T>
inline MyList<T>::~MyList()
{
	while (first != nullptr)
	{
		popFront();
	}
}

template<class T>
inline MyList<T>::MyList(MyList<T>&& obj)
{
	first = obj.first;
	last = obj.last;
	size = obj.size;
	obj.first = nullptr;
	obj.last = nullptr;
	obj.size = 0;
}

template<class T>
inline void MyList<T>::insert(int index, const T& val)
{
	if (index < 0 || index > size)
		return;
	if (index == 0)
	{
		pushFront(val);
		return;
	}
	if (index == size)
	{
		pushBack(val);
		return;
	}
	Node<T>* cur = first;
	for (int i = 0; i < index; i++)
	{
		cur = cur->getNext();
	}
	Node<T>* node = new Node<T>(val);
	node->setNext(cur);
	node->setPrev(cur->getPrev());
	cur->getPrev()->setNext(node);
	cur->setPrev(node);
	size++;
}

template<class T>
inline void MyList<T>::pushFront(const T& val)
{
	auto tmp = new Node<T>(val);
	if (size == 0)
		first = last = tmp;
	else
	{
		tmp->setNext(first);
		first->setPrev(tmp);
		first = tmp;
	}
	size++;
}

template<class T>
inline void MyList<T>::printForward() const
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
inline void MyList<T>::pushBack(const T& val)
{
	auto tmp = new Node<T>(val);
	if (size == 0)
		first = last = tmp;
	else
	{
		last->setNext(tmp);
		tmp->setPrev(last);
		last = tmp;
	}
	size++;
}

template<class T>
inline void MyList<T>::popFront()
{
	if (size == 0)
		return;
	if (size == 1 || first == last)
	{
		delete first;
		first = last = nullptr;
		size--;
		return;
	}
	Node<T>* tmp = first;
	first = first->getNext();
	first->setPrev(nullptr);
	delete tmp;
	size--;
}

template<class T>
inline void MyList<T>::popBack()
{
	if (size == 0)
		return;
	if (size == 1 || first == last)
	{
		delete first;
		first = last = nullptr;
		size--;
		return;
	}
	Node<T>* tmp = last;
	last = last->getPrev();
	last->setNext(nullptr);
	delete tmp;
	size--;
	return;
}

template<class T>
inline void MyList<T>::remove(int index)
{
	if (index < 0 || index >= size)
		return;
	if (index == 0)
	{
		popFront();
		return;
	}
	if (index == size - 1)
	{
		popBack();
		return;
	}
	Node<T>* cur = first;
	for (int i = 0; i < index; i++)
	{
		cur = cur->getNext();
	}
	cur->getPrev()->setNext(cur->getNext());
	cur->getNext()->setPrev(cur->getPrev());
	delete cur;
	size--;
}

template<class T>
inline void MyList<T>::sort()
{
	if (size < 2)
		return;
	bool swap;
	for (int i = 0; i < size - 1; i++)
	{
		swap = false;
		Node<T>* cur = first;
		for (int j = 0; j < size - i - 1; j++)
		{
			Node<T>* node = cur->getNext();
			if (cur->getData() > node->getData())
			{
				T tmp = cur->getData();
				cur->setData(node->getData());
				node->setData(tmp);
				swap = true;
			}
			cur = node;
		}
		if (!swap)
			break;
	}
}

template<class T>
inline MyList<T>& MyList<T>::operator=(const MyList<T>& obj)
{
	if (this == &obj)
		return *this;
	while (first != nullptr)
	{
		popFront();
	}
	Node<T>* cur = obj.first;
	while (cur != nullptr)
	{
		pushBack(cur->getData());
		cur = cur->getNext();
	}
	return *this;
}

template<class T>
inline MyList<T>& MyList<T>::operator=(MyList<T>&& obj)
{
	if (this == &obj)
		return *this;
	while (first != nullptr)
	{
		popFront();
	}
	first = obj.first;
	last = obj.last;
	size = obj.size;
	obj.first = nullptr;
	obj.last = nullptr;
	obj.size = 0;
	return *this;
}
