#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <list>
using namespace std;

int main()
{
	// task 1
	
	//vector<int> vec(10);

	//for (size_t i = 0; i < vec.size(); i++)
	//{
	//	vec[i] = static_cast<int>(2 * i + 1);
	//}

	//for (size_t i = 0; i < vec.size(); i++)
	//{
	//	cout << i << " -> " << vec[i] << endl;
	//}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 2

	//srand(time(0));

	//int size = 10;
	//vector<int> vec(size);
	//cout << "Vector default: " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	vec[i] = rand() % 22 + 13;
	//	cout << vec[i] << " ";
	//}
	//cout << endl;

	//cout << "Vector reverse: " << endl;
	//for (int i = size - 1; i >= 0; i--)
	//{
	//	cout << vec[i] << " ";
	//}
	//cout << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 3

	//srand(static_cast<unsigned>(time(0)));

	//list<int> lst;
	//for (int i = 0; i < 10; i++)
	//{
	//	int val = rand() % 21 - 10;
	//	lst.push_back(val);
	//}

	//cout << "List: ";
	//for (int x : lst)
	//{
	//	cout << x << " ";
	//}
	//cout << endl;

	//long long prod = 1;
	//int max_val = lst.front();
	//int zero_count = 0;

	//for (int x : lst)
	//{
	//	prod *= x;
	//	if (x > max_val)
	//	{
	//		max_val = x;
	//	}
	//	if (x == 0)
	//	{
	//		zero_count++;
	//	}
	//}

	//cout << "a. Product of all elements of a list: " << prod << endl;
	//cout << "b. Max element: " << max_val << endl;
	//cout << "c. Number of elements equal to zero: " << zero_count << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 4

	//srand(static_cast<unsigned>(time(0)));

	//list<int> lst;
	//for (int i = 0; i < 10; i++)
	//{
	//	lst.push_back(rand() % 21 - 10);
	//}

	//cout << "Original list: ";
	//for (int x : lst)
	//{
	//	cout << x << " ";
	//}
	//cout << endl;

	//cout << "Positive: ";
	//for (int x : lst)
	//{
	//	if (x > 0)
	//	{
	//		cout << x << " ";
	//	}
	//}
	//cout << endl;

	//cout << "Negative: ";
	//for (int x : lst)
	//{
	//	if (x < 0)
	//	{
	//		cout << x << " ";
	//	}
	//}
	//cout << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}