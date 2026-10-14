#include <iostream>
using namespace std;

// task 1

//void indexPos(int**& arr, int& row, int& col, int index)
//{
//    int** tmpArr = new int*[row];
//    for (int i = 0; i < row; i++)
//    {
//        tmpArr[i] = new int[col + 1];
//    }
//
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            if (j < index)
//                tmpArr[i][j] = arr[i][j];
//            else if (j == index)
//            {
//                tmpArr[i][j] = 0;
//                tmpArr[i][j + 1] = arr[i][j];
//            }
//            else
//                tmpArr[i][j + 1] = arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < row; i++)
//    {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    arr = tmpArr;
//    col++;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 2

//void deleteIdx(int**& arr, int& row, int& col, int index)
//{
//    int** newArr = new int* [row];
//    for (int i = 0; i < row; i++)
//    {
//        newArr[i] = new int[col - 1];
//
//        for (int j = 0; j < col; j++)
//        {
//            if (j < index)
//                newArr[i][j] = arr[i][j];
//            else if (j == index)
//                continue;
//            else
//                newArr[i][j - 1] = arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < row; i++)
//    {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    arr = newArr;
//    col--;
//}




int main()
{
    
    // task 1
    
    //int row = 3;
    //int col = 3;
    //
    //int** arr = new int* [row];
    //for (int i = 0; i < row; i++)
    //{
    //    arr[i] = new int[col];
    //}
    //
    //int val = 1;
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        arr[i][j] = val++;
    //    }
    //}
    //
    //cout << "Start of array:\n";
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //
    //int insertIndex = 1;
    //cout << "Insert a new column at the index: " << insertIndex << endl;
    //indexPos(arr, row, col, insertIndex);
    //
    //cout << "\nArray after insertion:\n";
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //
    //for (int i = 0; i < row; i++)
    //{
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // task 2

    //int row = 3;
    //int col = 3;
    //
    //int** arr = new int* [row];
    //for (int i = 0; i < row; i++)
    //{
    //    arr[i] = new int[col];
    //    for (int j = 0; j < col; j++)
    //    {
    //        arr[i][j] = (i + 1) * 10 + (j + 1);
    //    }
    //}
    //
    //cout << "Initial array (" << row << "x" << col << "):\n";
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //
    //int indexToDelete = 1;
    //cout << "\nDelete the column under the indexes:" << indexToDelete << endl;
    //
    //deleteIdx(arr, row, col, indexToDelete);
    //
    //cout << "\nArray after column removal (" << row << "x" << col << "):\n";
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //
    //for (int i = 0; i < row; i++)
    //{
    //    delete[] arr[i];
    //}
    //delete[] arr;


}