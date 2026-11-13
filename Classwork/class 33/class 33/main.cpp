#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyStack.h"
using namespace std;

int main()
{
	try {
        MyStack<int> stk(20);

        for (int i = 0; i < 50; ++i)
        {
            stk.push(i + 1);
        }
        while (!stk.isEmpty())
        {
            cout << stk.pop() << " ";
        }
        cout << endl;
	}
    catch (const exception& e)
    {
        cout << "\nCought exception: " << e.what() << endl;
    }
}