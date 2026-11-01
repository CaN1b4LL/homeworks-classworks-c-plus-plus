#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List<int> list;
	list.pushBack(10);
	list.pushBack(20);
	list.pushBack(30);

	cout << "Initial list (pushBack): ";
	list.print();

	list.pushFront(5);
	cout << "After PushFront(5): ";
	list.print();

	list.insert(2, 99);
	cout << "After insert(2, 99): ";
	list.print();

	list.popFront();
	cout << "After popFront: ";
	list.print();

	list.popBack();
	cout << "After popBack: ";
	list.print();

	list.removeAt(1);
	cout << "After removeAt(1): ";
	list.print();

	List<int> list2 = list;
	cout << "Copied list2: ";
	list2.print();


}