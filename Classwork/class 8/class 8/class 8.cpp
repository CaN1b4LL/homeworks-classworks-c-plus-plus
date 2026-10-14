#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//void print_array(int mas[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << mas[i] << " ";
//    }
//    cout << endl;
//}
//
//void fill_array(int mas[], int size, int min, int max)
//{
//    for (int i = 0; i < size; i++)
//    {
//        mas[i] = rand() % (max - min) + min;
//    }
//}
//
//int number = 12;
//
//int sum_array(int arr[], int size)
//{
//    int sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}

//void findMinMax(int arr[], int size)
//{
//    int minIdx = 0, maxIdx = 0;
//
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] < arr[minIdx]) minIdx = i;
//        if (arr[i] > arr[maxIdx]) maxIdx = i;
//    }
//    cout << "Min: " << arr[minIdx] << " number - " << minIdx << endl;
//    cout << "Max: " << arr[maxIdx] << " number - " << maxIdx << endl;
//}


//void reversePrint(int arr[], int size)
//{
//    for (int i = 0, j = size - 1; i < j; i++, j--)
//    {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//    }
//}


//int countPrimes(int arr[], int size)
//{
//    int count = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        int n = arr[i];
//        bool isPrime = true;
//
//        for (int j = 2; j < n; j++)
//        {
//            if (n % j == 0)
//            {
//                isPrime = false;
//                break;
//            }
//        }
//        
//        if (n > 1 && isPrime)
//        {
//            count++;
//        }
//    }
//
//    return count;
//}
//
//
//int main()
//{
//    const int size = 6;
//    int arr[size]{2, 4, 5, 10, 13, 3};
//
//    int result = countPrimes(arr, size);
//
//    cout << "Result: " << result << endl;




    //reversePrint(arr, size);
    //cout << "Reverse array: ";
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << endl;



    //findMinMax(arr, size);

    //cout << "Enter a five numbers:";
    //for (int i = 0; i < size; i++)
    //{
    //    cin >> arr[i];
    //}
    //findMinMax(arr, size);



    //srand(time(0));
    //const int size = 5;
    //int arr[size]{ 2, 1, 3, 5, 4 };
    //print_array(arr, size);

    //fill_array(arr, size, 10, 30);
    //print_array(arr, size);
    //int sum = sum_array(arr, size);

    //cout << "Sum = " << sum << endl;
}
