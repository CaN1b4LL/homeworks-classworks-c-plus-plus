#include <iostream>
#include "Counter.h"
using namespace std;







int main()
{
	Counter c(0, 24);
	for (int i = 0; i < 50; i++)
	{
		cout << c.getCur() << endl;
		c.increase();
	}



}