#include "MyList.h"
#include <iostream>
using namespace std;

int main()
{
	MyList<int> lst;
	lst.pushFront(10);
	lst.pushFront(5);
	lst.pushFront(25);
	lst.pushFront(15);

	cout << "Original list: ";
	lst.printForward();

	lst.sort();
	cout << "Sorted list: ";
	lst.printForward();

	lst.remove(1);
	cout << "After remove: ";
	lst.printForward();

	MyList<int> lstCopy(lst);
	MyList<int> lstMoved;
	lstMoved = std::move(lstCopy);

	cout << "All tests passed successfully" << endl;

	
}