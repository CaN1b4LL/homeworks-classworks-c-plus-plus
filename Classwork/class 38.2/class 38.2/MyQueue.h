#pragma once

template<typename T>
class MyQueue
{
    T*arr = nullptr;
    int capacity = 0;
    int size = 0;
public:
    MyQueue();
    MyQueue(int c);
    MyQueue(const MyQueue &val);
    MyQueue(MyQueue &&val);
    ~MyQueue();
    MyQueue& operator=(const MyQueue &val);
    MyQueue& operator=(MyQueue &&val);
    int getCapacity()const;
    int getSize()const;
    void push(const T & val);
    T pop();
    T peek()const;
    void clear();
};

template<typename T>
MyQueue<T>::MyQueue()
{
    capacity = 100;
    arr = new T[capacity]{};
    size = 0;
}

template<typename T>
MyQueue<T>::MyQueue(int c)
{
    capacity = c;
    arr = new T[capacity]{};
    size = 0;
}

template<typename T>
MyQueue<T>::MyQueue(const MyQueue &obj)
{
    capacity = obj.capacity;
    arr = new T[capacity]{};
    size = obj.size;
    for (int i = 0; i < size; ++i)
    {
        arr[i] = obj.arr[i];
    }
}

template<typename T>
MyQueue<T>::MyQueue(MyQueue &&obj)
{
    arr = obj.arr;
    capacity = obj.capacity;
    size = obj.size;
    obj.capacity = 0;
    obj.arr = nullptr;
}

template<typename T>
MyQueue<T>::~MyQueue()
{
    delete[] arr;
}

template<typename T>
MyQueue<T> &MyQueue<T>::operator=(const MyQueue &obj)
{
    if(this == &obj)
        return  *this;
    delete[] arr;

    capacity = obj.capacity;
    arr = new T[capacity]{};
    size = obj.size;
    for (int i = 0; i < size; ++i)
    {
        arr[i] = obj.arr[i];
    }
    return *this;
}

template<typename T>
MyQueue<T> &MyQueue<T>::operator=(MyQueue &&obj)
{
    if(this == &obj)
        return  *this;
    delete[] arr;

    arr = obj.arr;
    capacity = obj.capacity;
    size = obj.size;
    obj.capacity = 0;
    obj.arr = nullptr;

    return *this;
}

template<typename T>
int MyQueue<T>::getCapacity() const
{

    return capacity;
}

template<typename T>
int MyQueue<T>::getSize() const
{
    return size;
}

template<typename T>
void MyQueue<T>::push(const T &val)
{
    arr[size++] = val;
}

template<typename T>
T MyQueue<T>::pop()
{
    T tmp = arr[0];
    for (int i = 0; i < size-1; ++i)
    {
        arr[i] = arr[i+1];
    }
    size--;
    return tmp;
}

template<typename T>
T MyQueue<T>::peek() const
{
    return arr[0];
}

template<typename T>
void MyQueue<T>::clear()
{
    size = 0;
}
