#include <iostream>
#include "MyList.h"
using namespace std;

int main()
{
	MyList<int> list;

	try
	{
		cout << "Try opening a list with an empty element: " << endl;
		list.popFront();
	}
	catch (const exception& ex)
	{
		cout << "Cought exception: " << ex.what() << "\n\n";
	}

	list.pushBack(10);
	list.pushBack(20);

	try
	{
		cout << "Attempted to insert at an invalid index: " << endl;
		list.insert(100, 900);
	}
	catch (const out_of_range& ex)
	{
		cout << "Caught out_to_range exception: " << ex.what() << "\n\n";
	}
}
