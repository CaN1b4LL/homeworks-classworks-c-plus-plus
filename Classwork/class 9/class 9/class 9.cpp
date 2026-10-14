#include <iostream>
#include <iomanip>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//int factoriial_r(int num)
//{
//	if (num < 2)
//		return 1;
//	return num * factoriial_r(num - 1);
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//void print_arrey_r(int arr[], int size)
//{
//	if (size > 0)
//	{
//		cout << arr[size - 1] << " ";
//		print_arrey_r(arr, size - 1);
//	}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//int sum(int a, int b)
//{
//	cout << "int" << endl;
//	return a + b;
//}
//
//double sum(double a, double b)
//{
//	cout << "double" << endl;
//	return a + b;
//}
//
//double sum(int a, double b)
//{
//	cout << "int double" << endl;
//	return a + b;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//template<typename T1, typename T2>
//auto sum(T1 a, T2 b)
//{
//	return a + b;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 1.1

//int findMax(int arr[], int size)
//{
//	int maxVal = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > maxVal)
//		{
//			maxVal = arr[i];
//		}
//	}
//	return maxVal;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 1.2

//int findMax(int arr[][3], int row, int col)
//{
//	int maxVal = arr[0][0];
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (arr[i][j] > maxVal)
//			{
//				maxVal = arr[i][j];
//			}
//		}
//	}
//	return maxVal;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 1.3

//int findMax(int arr[][3][3], int d1, int d2, int d3)
//{
//	int maxVal = arr[0][0][0];
//	for (int i = 0; i < d1; i++)
//	{
//		for (int j = 0; j < d2; j++)
//		{
//			for (int k = 0; k < d3; k++)
//			{
//				if (arr[i][j][k] > maxVal)
//				{
//					maxVal = arr[i][j][k];
//				}
//			}
//		}
//	}
//	return maxVal;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 1.4

//int findMax(int a, int b)
//{
//	return (a > b) ? a : b;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 1.5

//int findMax(int a, int b, int c)
//{
//	int maxVal = a;
//	if (b > maxVal) maxVal = b;
//	if (c > maxVal) maxVal = c;
//	return maxVal;
//}



int main()
{
	// 1.5

	//cout << "Max: " << findMax(4, 9, 1);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// 1.4

	//cout << "Max: " << findMax(2, 5);


	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// 1.3

	//int arr[3][3][3]{ {1,2,3},{4,5,6},{13,7,8} };
	//cout << "Max: " << findMax(arr, 3, 3, 3);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// 1.2

	//int arr[2][3]{ {5,12,3},{34,77,14} };
	//cout << "Max: " << findMax(arr, 2, 3);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// 1.1

	//int arr[]{ 10,45,33,66,24 };
	//cout << "Max: " << findMax(arr, 5);



	//cout << sum(12, 23) << endl;
	//cout << sum(1.2, 2.3) << endl;
	//cout << sum(1, 2.3) << endl;
	//cout << sum(2.3, 1) << endl;

	//int arr1[]{ 1,2,3,4,5,6,7 };
	//print_arrey_r(arr1, 7);


	//cout << factoriial_r(5) << endl;
}
