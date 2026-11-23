#include <iostream>
#include "MyStack.h"
#include "MyQueue.h"
using namespace std;

int main()
{
//    MyStack<int> q(20);
//    for (int i = 0; i < 30; ++i)
//    {
//        if(q.getSize() == q.getCapacity())
//            break;
//        q.push(i+1);
//    }
//
//    while (q.getSize()>0)
//    {
//        cout<<q.pop()<<" ";
//    }
//    cout<<endl;
    MyQueue<int> q(20);
    for (int i = 0; i < 30; ++i)
    {
        if(q.getSize() == q.getCapacity())
            break;
        q.push(i + 1);
    }

    while (q.getSize() > 0)
    {
        cout << q.pop() << " ";
    }
    cout<<endl;

}