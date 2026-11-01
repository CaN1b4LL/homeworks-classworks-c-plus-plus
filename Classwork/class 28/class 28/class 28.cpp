#include "MyForwardList.h"
#include <iostream>
using namespace std;



int main()
{
	MyForwardList<int> lst;
	lst.pushBack(1);
	lst.pushBack(2);
	lst.pushBack(3);
	lst.pushBack(45);
	lst.pushBack(51);
	lst.print();
	lst.popBack();
	lst.popBack();
	lst.print();
	//MyForwardList<int> copy = std::move(lst);
	//copy.print();

}