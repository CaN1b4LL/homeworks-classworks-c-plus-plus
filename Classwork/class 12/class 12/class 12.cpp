#include <iostream>
using namespace std;


//void append(int *&arr, int &size, int val)
//{
//    int* tmp = new int[size + 1];
//    for (int i = 0; i < size; i++)
//    {
//        tmp[i] = arr[i];
//    }
//
//    delete[] arr;
//    arr = tmp;
//
//    arr[size++] = val;
//
//}

int main()
{
    //int m;

    //cout << "Enter the array size: ";
    //cin >> m;

    //int* arr1 = new int[m];

    //cout << "Enter the array elements -> \n";
    //for (int i = 0; i < m; i++)
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> arr1[i];
    //}

    //int choice;
    //cout << "1. Delete even values\n";
    //cout << "2. Delete odd values\n";
    //cout << "1 or 2 ->";
    //cin >> choice;

    //int newSize = 0;
    //for (int i = 0; i < m; i++)
    //{
    //    if (choice == 1 && arr1[i] % 2 != 0)
    //    {
    //        newSize++;
    //    }
    //    else if (choice == 2 && arr1[i] % 2 == 0)
    //    {
    //        newSize++;
    //    }
    //}

    //int* arr2 = new int[newSize];

    //int indexArr2 = 0;
    //for (int i = 0; i < m; i++)
    //{
    //    if (choice == 1 && arr1[i] % 2 != 0)
    //    {
    //        arr2[indexArr2] = arr1[i];
    //        indexArr2++;
    //    }
    //    else if (choice == 2 && arr1[i] % 2 == 0)
    //    {
    //        arr2[indexArr2] = arr1[i];
    //        indexArr2++;
    //    }
    //}

    //cout << "\nArray after deletion (new size: " << newSize << "):\n[";
    //for (int i = 0; i < newSize; i++)
    //{
    //    cout << arr2[i] << " ";
    //}
    //cout << "]" << endl;

    //delete[] arr1;
    //delete[] arr2;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //int size = 5;
    //int* arr = new int[size];

    //cout << "Enter the array elements -> \n"; // чтоб не писать просто скопировал.
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> arr[i];
    //}

    //int* tmp = new int[size + 1];
    //for (int i = 0; i < size; i++)
    //{
    //    tmp[i] = arr[i];
    //}

    //delete[] arr;

    //arr = tmp;

    //arr[size++] = 100;

    //cout << "\nArray after deletion:\n["; // тоже самое.
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << "]" << endl;

    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //int size = 5;
    //int* arr = new int[size];

    //for (int i = 0; i < size; i++)
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> arr[i];
    //}

    //append(arr, size, 100);

    //cout << "\n[";
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << "]" << endl;

    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //int a = 5;
    //int* pa = &a;
    //int& ra = a;
    //int** ppa = &pa;
    //int*& rpa = pa;
    //cout << **ppa << endl;
    //cout << *pa << endl;
    //cout << a << endl;
    //cout << ra << endl;
    //cout << *rpa << endl;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
