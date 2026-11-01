#include <iostream>
#include <string>
using namespace std;

int main()
{
	// task 1

	//string str = ("hhhello world hhh!");
	//int first = str.find('h');
	//int last = str.rfind('h');
	//
	//string left_part = str.substr(0, first + 1);
	//string middle_part = str.substr(first + 1, last - first - 1);
	//string right_part = str.substr(last);

	//int left = 0;
	//int right = middle_part.length() - 1;

	//while (left < right)
	//{
	//	char tmp = middle_part[left];
	//	middle_part[left] = middle_part[right];
	//	middle_part[right] = tmp;
	//	left++;
	//	right--;
	//}

	//str = left_part + middle_part + right_part;

	//cout << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// taks 2

	//string str = "banana and pineapple";
	//int pos = str.find('n');
	//while (pos != -1)
	//{
	//	str.erase(pos, 1);
	//	pos = str.find('n');
	//}
	//cout << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 3

	//string str = "hello world, this is a test text with h letter.";
	//int first = str.find('h');
	//int last = str.rfind('h');

	//for (int i = first + 1; i < last; i++)
	//{
	//	if (str[i] == 'h')
	//		str[i] = 'H';
	//}
	//cout << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 4

	//string str = "0123456789";

	//for (int i = str.length() - 1; i >= 0; i--)
	//{
	//	if (i % 3 == 0)
	//	{
	//		str.erase(i, 1);
	//	}
	//}
	//cout << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 5

	//string str = "1 hello 1 world 1 !!!";
	//int pos = str.find('1');

	//while (pos != -1)
	//{
	//	str.replace(pos, 1, "one");
	//	pos = str.find('1', pos + 3);
	//}

	//cout << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

}
