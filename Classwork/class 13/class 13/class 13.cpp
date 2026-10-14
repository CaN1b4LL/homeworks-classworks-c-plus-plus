#include <iostream>
using namespace std;

// 1

//void addRowToTheEnd(int**& arr, int& rows, int cols, const int* newRow)
//{
//    int** tmpArr = new int* [rows + 1];
//    for (int i = 0; i < rows; i++)
//    {
//        tmpArr[i] = arr[i];
//    }
//
//    tmpArr[rows] = new int[cols];
//    for (int j = 0; j < cols; j++)
//    {
//        tmpArr[rows][j] = newRow[j];
//    }
//
//    delete[] arr;
//    arr = tmpArr;
//    rows++;
//}
//
//void printMatrix(int** arr, int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 2

//void printMatrix(int** arr, int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void addRowToTheBeginning(int**& arr, int& rows, int cols, const int* newRow)
//{
//    int** tmpArr = new int* [rows + 1];
//    tmpArr[0] = new int[cols];
//    for (int j = 0; j < cols; j++)
//    {
//        tmpArr[0][j] = newRow[j];
//    }
//
//    for (int i = 0; i < cols; i++)
//    {
//        tmpArr[i + 1] = arr[i];
//    }
//
//    delete[] arr;
//    arr = tmpArr;
//    rows++;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 3

void addRowAtPosition(int**& arr, int& rows, int cols, const int* newRow, int index)
{
    int** tmpArr = new int* [rows + 1];
    int i = 0;
    for (; i < index; i++)
    {
        tmpArr[i] = arr[i];
    }

    tmpArr[index] = new int[cols];
    for (int j = 0; j < cols; j++)
    {
        tmpArr[index][j] = newRow[j];
    }

    for (; i < rows; i++)
    {
        tmpArr[i + 1] = arr[i];
    }

    delete[] arr;
    arr = tmpArr;
    rows++;
}

void printMatrix(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}






int main()
{
    // 3

    int rows = 3;
    int cols = 4;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }


    cout << "Initial array (" << rows << "x" << cols << "):\n";
    printMatrix(arr, rows, cols);

    int newRowData[4] = { 90, 90, 90, 90 };

    int insertIndex = 1;

    cout << "\nVstavlyayemo novyy riadok na pozytsiyu indexu: " << insertIndex << endl;
    addRowAtPosition(arr, rows, cols, newRowData, insertIndex);

    cout << "\nArray after adding a string to the beginning (" << rows << "x" << cols << "):\n";
    printMatrix(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;





    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // 2

    //int rows = 3;
    //int cols = 4;

    //int** arr = new int* [rows];
    //for (int i = 0; i < rows; i++)
    //{
    //    arr[i] = new int[cols];
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = (i + 1) * (j + 1);
    //    }
    //}

    //cout << "Initial array (" << rows << "x" << cols << "):\n";
    //printMatrix(arr, rows, cols);

    //int newRowData[4] = { 9, 9, 9, 9 };

    //addRowToTheBeginning(arr, rows, cols, newRowData);

    //cout << "\nArray after adding a string to the beginning (" << rows << "x" << cols << "):\n";
    //printMatrix(arr, rows, cols);

    //for (int i = 0; i < rows; i++)
    //{
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // 1

    //int rows = 3;
    //int cols = 4;

    //int** arr = new int* [rows];
    //for (int i = 0; i < rows; i++)
    //{
    //    arr[i] = new int[cols];
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = (i + 1) * (j + 1);
    //    }
    //}

    //cout << "Initial array (" << rows << "x" << cols << "):\n";
    //printMatrix(arr, rows, cols);

    //int newRowData[4] = { 9, 9, 9, 9 };

    //addRowToTheEnd(arr, rows, cols, newRowData);

    //cout << "\nArray after adding a string to the end (" << rows << "x" << cols << "):\n";
    //printMatrix(arr, rows, cols);

    //for (int i = 0; i < rows; i++)
    //{
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
