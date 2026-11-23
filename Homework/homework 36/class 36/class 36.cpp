#include <iostream>
#include "MySharedPtr.h"
#include "MyUniquePtr.h"
using namespace std;

class Test
{
public:
	Test() { cout << "-> Test Constructor!\n"; }
	~Test() { cout << "<- Test Destructor!\n"; }
	void sayHello()const { cout << "Hello from Test!\n"; }
};


int main()
{
	cout << "~~ Test uniquePtr ~~" << endl;
	{
		MyUniquePtr<Test> uptr(new Test());
		uptr->sayHello();
	}

	cout << "~~ Testing sharedPtr ~~" << endl;
	{
		MySharedPtr<Test> sptr1(new Test());
		cout << "Count: " << sptr1.useCount() << endl;
		{
			MySharedPtr<Test> sptr2 = sptr1;
			cout << "Count after copy: " << sptr1.useCount() << endl;
		}
		cout << "Count after inner scope: " << endl;
	}



}