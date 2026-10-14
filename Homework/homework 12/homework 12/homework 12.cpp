#include <iostream>
using namespace std;

// task 1.1 (Функция распределения памяти)

//void allocateArray(int*& arr, int size)
//{
//    arr = new int[size];
//}

//// tasl 1.2 (Функция инициализации массива)

//void initArray(int* arr, int size)
//{
//    cout << "Enter " << size << " elements array:\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << "A[" << i << "] = ";
//        cin >> arr[i];
//    }
//}

//// task 1.3 (Функция вывода массива)

//void printArray(const int* arr, int size)
//{
//    cout << "[ ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "] (size: " << size << ")" << endl;
//}
//
//// task 1.4 (Функция удаления массива)
//
//void freeArray(int*& arr, int& size)
//{
//    delete[] arr;
//    arr = nullptr;
//    size = 0;
//    cout << "The memory is successfully cleared." << endl;
//}

//// task 1.5 (Функция добавления элемента в конец)

//void addElement(int*& arr, int& size, int value)
//{
//    int newSize = size + 1;
//    int* newArr = new int[newSize];
//
//    for (int i = 0; i < size; i++)
//    {
//        newArr[i] = arr[i];
//    }
//
//    newArr[size] = value;
//
//    delete[] arr;
//    arr = newArr;
//    size = newSize;
//}

//// task 1.6 (Функция вставки по индексу)

//void insertElement(int*& arr, int& size, int index, int value)
//{
//    int newSize = size + 1;
//    int* newArr = new int[newSize];
//
//    for (int i = 0, j = 0; i < newSize; i++)
//    {
//        if (i == index)
//        {
//            newArr[i] = value;
//        }
//        else
//        {
//            newArr[i] = arr[j];
//            j++;
//        }
//    }
//
//    delete[] arr;
//    arr = newArr;
//    size = newSize;
//}

// task 1.7 (Функция удаления по индексу)

//void removeElement(int*& arr, int& size, int index)
//{
//    if (size == 1)
//    {
//        delete[] arr;
//        arr = nullptr;
//        size = 0;
//        return;
//    }
//
//    int newSize = size - 1;
//    int* newArr = new int[newSize];
//
//    for (int i = 0, j = 0; i < size; i++)
//    {
//        if (i == index)
//        {
//            continue;
//        }
//        newArr[j] = arr[i];
//        j++;
//    }
//
//    delete[] arr;
//    arr = newArr;
//    size = newSize;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 2

//bool isPrime(int n)  // Вспомогательная функция.
//{
//    if (n <= 1) return false;
//    for (int i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0) return false;
//    }
//    return true;
//}

//void removePrime(int*& arr, int& size)
//{
//    int newSize = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (!isPrime(arr[i]))
//            newSize++;
//    }
//
//    if (newSize == 0)
//    {
//        delete[] arr;
//        arr = nullptr;
//        size = 0;
//        return;
//    }
//
//    int* newArr = new int[newSize];
//
//    for (int i = 0, j = 0; i < size; i++)
//    {
//        if (!isPrime(arr[i]))
//        {
//            newArr[j] = arr[i];
//            j++;
//        }
//    }
//
//    delete[] arr;
//    arr = newArr;
//    size = newSize;
//}   
    
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 3

//void splitArray(const int* arr, int size, int*& posArr, int& posSize, int*& negArr, int& negSize, int*& zeroArr, int& zeroSize)
//{
//    posSize = 0;
//    negSize = 0;
//    zeroSize = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > 0) posSize++;
//        else if (arr[i] < 0) negSize++;
//        else zeroSize++;
//    }
//
//    posArr = (posSize > 0) ? new int[posSize] : nullptr;
//    negArr = (negSize > 0) ? new int[negSize] : nullptr;
//    zeroArr = (zeroSize > 0) ? new int[zeroSize] : nullptr;
//
//    int pIndex = 0, nIndex = 0, zIndex = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > 0)
//        {
//            posArr[pIndex++] = arr[i];
//        }
//        else if (arr[i] < 0)
//        {
//            negArr[nIndex++] = arr[i];
//        }
//        else
//        {
//            zeroArr[zIndex++] = arr[i];
//        }
//    }
//
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    //int size = 0;
    //int* arr = nullptr;

    // 1.1

    //cout << "Enter the initial array size: ";
    //cin >> size;
    //allocateArray(arr, size);

    //// 1.2

    //initArray(arr, size);

    //// 1.3

    //cout << "\nInitial array: ";
    //printArray(arr, size);

    //// 1.5

    //cout << "\nAdd 777 to the end:\n";
    //addElement(arr, size, 777);
    //printArray(arr, size);

    //// 1.6

    //cout << "\nInsert 999 at index 1:\n";
    //insertElement(arr, size, 1, 999);
    //printArray(arr, size);

    //// 1.7

    //cout << "\nDelete the element with index 2:\n";
    //removeElement(arr, size, 2);
    //printArray(arr, size);

    //// 1.4

    //cout << "\nDelete the entire array:\n";
    //freeArray(arr, size);

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // 2

    //int size = 7;
    //int* arr = new int[size] {4, 5, 6, 7, 8, 9, 11};

    //cout << "Initial array: ";
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    //removePrime(arr, size);

    //cout << "Array after removing prime numbers: ";
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // 3

    //const int staticSize = 10;
    //int staticArr[staticSize] = { 5, -2, 0, 12, -7, 0, 3, -1, 4, 0 };

    //cout << "Initial static array: ";
    //for (int i = 0; i < staticSize; i++)
    //{
    //    cout << staticArr[i] << " ";
    //}
    //cout << endl;

    //int* posArr = nullptr; int posSize = 0;
    //int* negArr = nullptr; int negSize = 0;
    //int* zeroArr = nullptr; int zeroSize = 0;

    //splitArray(staticArr, staticSize, posArr, posSize, negArr, negSize, zeroArr, zeroSize);

    //cout << "Outstanding numbers (" << posSize << "): ";
    //for (int i = 0; i < posSize; i++)
    //{
    //    cout << posArr[i] << " ";
    //}
    //cout << endl;

    //cout << "Negative numbers (" << negSize << "): ";
    //for (int i = 0; i < negSize; i++)
    //{
    //    cout << negArr[i] << " ";
    //}
    //cout << endl;

    //cout << "Zero elevents (" << zeroSize << "): ";
    //for (int i = 0; i < zeroSize; i++)
    //{
    //    cout << zeroArr[i] << " ";
    //}
    //cout << endl;

    //delete[] posArr;
    //delete[] negArr;
    //delete[] zeroArr;

}