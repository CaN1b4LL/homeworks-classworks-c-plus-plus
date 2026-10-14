#include <iostream>
using namespace std;

// task 1

//int linearSearch(int arr[], int size, int key)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == key)
//        {
//            return i;
//        }
//    }
//    return -1;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 2


//int binarySearch(int arr[], int size, int key)
//{
//    int left = 0;
//    int right = size - 1;
//
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//
//        if (arr[mid] == key)
//        {
//            return mid;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 3


//int benaryToDecimal(char binStr[])
//{
//    int decimalResult = 0;
//    int length = 0;
//    
//    while (binStr[length] != '\0')
//    {
//        length++;
//    }
//    for (int i = 0; i < length; i++)
//    {
//        int bit = binStr[i] - '0';
//        decimalResult = decimalResult * 2 + bit;
//    }
//
//    return decimalResult;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    // task 1

    //const int size = 5;
    //int arr[size]{ 10, 25, 42, 7, 19 };
    //int key = 42;

    //int index = linearSearch(arr, size, key);
    //if (index != -1)
    //{
    //    cout << "Key found by index: " << index << endl;
    //}
    //else
    //{
    //    cout << "Key not found." << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 2


    //const int size = 6;
    //int arr[size]{ 3, 11, 24, 35, 48, 60 };
    //int key = 35;

    //int index = binarySearch(arr, size, key);

    //if (index != -1)
    //{
    //    cout << "Key found by index: " << index << endl;
    //}
    //else
    //{
    //    cout << "Key not found" << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 3


    //char binary[5] = "1011";

    //cout << "A binary number " << binary << " In decimal form: " << benaryToDecimal(binary) << endl;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
