#pragma once

template<typename T>
class MyStack
{
    T *arr = nullptr;
    int capacity = 0;
    int top = -1;
public:
    MyStack();
    MyStack(int c);
    MyStack(const MyStack &obj);
    MyStack(MyStack &&obj);
    ~MyStack();
    MyStack &operator=(const MyStack &obj);
    MyStack &operator=(MyStack &&obj);
    int getCapacity()const;
    int getSize()const;
    void push(const T&val);
    T pop();
    T peek()const;
    void clear();
};

template<typename T>
MyStack<T>::MyStack()
{
    capacity = 100;
    arr = new T[capacity]{};
    top = -1;
}

template<typename T>
MyStack<T>::MyStack(int c)
{
    capacity = c;
    arr = new T[capacity]{};
    top = -1;
}

template<typename T>
MyStack<T>::MyStack(const MyStack &obj)
{
    capacity = obj.capacity;
    arr = new T[capacity]{};
    top = obj.top;
    for (int i = 0; i <= top; ++i)
    {
        arr[i] = obj.arr[i];
    }
}

template<typename T>
MyStack<T>::MyStack(MyStack &&obj)
{
    capacity = obj.capacity;
    top = obj.top;
    arr = obj.arr;
    obj.capacity = 0;
    obj.arr = nullptr;
}

template<typename T>
MyStack<T>::~MyStack()
{
    delete[] arr;
}

template<typename T>
MyStack<T> &MyStack<T>::operator=(const MyStack &obj)
{
    if(this == &obj)
        return  *this;
    delete[] arr;

    capacity = obj.capacity;
    arr = new T[capacity]{};
    top = obj.top;
    for (int i = 0; i <= top; ++i)
    {
        arr[i] = obj.arr[i];
    }
    return *this;
}

template<typename T>
MyStack<T> &MyStack<T>::operator=(MyStack &&obj)
{
    if(this == &obj)
        return  *this;
    delete[] arr;

    capacity = obj.capacity;
    top = obj.top;
    arr = obj.arr;
    obj.capacity = 0;
    obj.arr = nullptr;

    return  *this;
}

template<typename T>
int MyStack<T>::getCapacity() const
{
    return capacity;
}

template<typename T>
int MyStack<T>::getSize() const
{
    return top+1;
}

template<typename T>
void MyStack<T>::push(const T &val)
{
    arr[++top] = val;
}

template<typename T>
T MyStack<T>::pop()
{
    return arr[top--];
}

template<typename T>
T MyStack<T>::peek() const
{
    return arr[top];
}

template<typename T>
void MyStack<T>::clear()
{
    top = -1;
}
