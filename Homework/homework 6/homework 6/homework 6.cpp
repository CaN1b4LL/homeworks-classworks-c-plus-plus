#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    // task 1


    //const int row = 3, col = 4;
    //int arr[row][col];
    //
    //int startNum;
    //cout << "Enter the number -> ";
    //cin >> startNum;

    //int currentVal = startNum;

    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        arr[i][j] = currentVal;

    //        currentVal *= 2;
    //    }
    //}

    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << left << setw(6) << arr[i][j];
    //    }
    //    cout << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 2


    //const int row = 3, col = 4;
    //int arr[row][col];

    //int startNum;
    //cout << "Enter the number -> ";
    //cin >> startNum;

    //int currentVal = startNum;

    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        arr[i][j] = currentVal;
    //        currentVal++;
    //    }
    //}

    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << left << setw(4) << arr[i][j];
    //    }
    //    cout << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 3


    //srand(time(0));
    //const int row = 2, col = 6;
    //int arr[row][col];

    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        arr[i][j] = rand() % 10;
    //    }
    //}

    //cout << "Initial array: " << endl;
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << setw(3) << arr[i][j];
    //    }
    //    cout << endl;
    //}

    //int choice, steps;
    //cout << "\nSelect the shift direction:" << endl;
    //cout << "1 - left" << endl;
    //cout << "2 - right" << endl;
    //cout << "3 - up" << endl;
    //cout << "4 - down" << endl;
    //cin >> choice;

    //cout << "Enter the number of shift steps -> ";
    //cin >> steps;

    //if (choice == 1 || choice == 2)
    //{
    //    for (int i = 0; i < row; i++)
    //    {
    //        int temp[col];

    //        for (int j = 0; j < col; j++)
    //        {
    //            temp[j] = arr[i][j];
    //        }

    //        for (int j = 0; j < col; j++)
    //        {
    //            if (choice == 2)
    //            {
    //                int new_j = (j + steps) % col;
    //                arr[i][new_j] = temp[j];
    //            }
    //            else
    //            {
    //                int new_j = (j - steps % col + col) % col;
    //                arr[i][new_j] = temp[j];
    //            }
    //        }
    //    }
    //}
    //else if (choice == 3 || choice == 4)
    //{
    //    int tempArr[row][col];

    //    for (int i = 0; i < row; i++)
    //    {
    //        for (int j = 0; j < col; j++)
    //        {
    //            tempArr[i][j] = arr[i][j];
    //        }
    //    }

    //    for (int i = 0; i < row; i++)
    //    {
    //        for (int j = 0; j < col; j++)
    //        {
    //            if (choice == 4)
    //            {
    //                int new_i = (i + steps) % row;

    //                arr[new_i][j] = tempArr[i][j];
    //            }
    //            else
    //            {
    //                int new_i = (i - steps % row + row) % row;

    //                arr[new_i][j] = tempArr[i][j];
    //            }
    //        }
    //    }


    //}

    //cout << "\nArray after cyclic shift:" << endl;
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << setw(3) << arr[i][j];
    //    }
    //    cout << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}