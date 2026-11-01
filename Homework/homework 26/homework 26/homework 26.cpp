#define _CRT_SECURE_NO_WARNINGS
#include "test.h"
#include "TestPtr.h"
using namespace std;

int main()
{
	int arr1[]{ 1,2,3,4,5 }, arr2[]{ 6,7,8,9,10 };
	Test<int*>e(arr1, 5), e1(arr2, 5);
	e.print();
	e1.print();

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	Test<int*> res = e + e1;
	res.print();
	
}