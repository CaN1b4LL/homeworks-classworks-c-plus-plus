#define _CRT_SECURE_NO_WARNINGS
#include "test.h"
#include "TestChar.h"
using namespace std;

int main()
{

	int arr1[]{ 1,2,3,4,5 }, arr2[]{ 2,3,4,5,6,7 };
	Test<int*>e(arr1), e1(arr2);
	e.print();
	




	//Test<int> a(123), a1(234);
	//Test<double> b(12.3);


	//Test<char*> d("Hello"), d1("World");
	//auto res = d + d1;
	//res.print();

	//cout << d << endl;
	//a.print();
	//b.print();
	//c.print();

	//cout << typeid(a).name() << endl;
	//a.print();
	//cout << typeid(b).name() << endl;
	//b.print();
	//cout << typeid(c).name() << endl;
	//c.print();

	//auto res = a + a1;
	//res.print();
}
