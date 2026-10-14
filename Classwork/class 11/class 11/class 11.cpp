#include <iostream>
using namespace std;


int main()
{
    // 1

    //int m, n;

    //cout << "Enter the size of the first array -> ";
    //cin >> m;
    //cout << "Enter the size of the second array -> ";
    //cin >> n;

    //int* A = new int[m];
    //int* B = new int[n];

    //cout << "\nEnter the elements for the array A: ";
    //for (int i = 0; i < m; i++)
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> A[i];
    //}
    //cout << endl;

    //cout << "\nEnter the elements for the array B: ";
    //for (int i = 0; i < n; i++)
    //{
    //    cout << "B[" << i << "] = ";
    //    cin >> B[i];
    //}
    //cout << endl;

    //int sizeC = m + n;
    //int* C = new int[sizeC];

    //for (int i = 0; i < m; i++)
    //{
    //    C[i] = A[i];
    //}

    //for (int i = 0; i < n; i++)
    //{
    //    C[m + i] = B[i];
    //}

    //cout << "\nThe third array:\n[";
    //for (int i = 0; i < sizeC; i++)
    //{
    //    cout << C[i] << " ";
    //}
    //cout << "]" << endl;

    //delete[] A;
    //delete[] B;
    //delete[] C;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // 2

    //int m, n;

    //cout << "Enter the size of the first array -> ";
    //cin >> m;
    //cout << "Enter the size of the second array -> ";
    //cin >> n;

    //int* a = new int[m];
    //int* b = new int[n];

    //cout << "\nEnter the elements for the array A: ";
    //for (int i = 0; i < m; i++)
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> a[i];
    //}
    //cout << endl;

    //cout << "\nEnter the elements for the array B: ";
    //for (int i = 0; i < n; i++)
    //{
    //    cout << "B[" << i << "] = ";
    //    cin >> b[i];
    //}
    //cout << endl;

    //int maxSize = (m < n) ? m : n;
    //int* tmpC = new int[maxSize];
    //int realSizeC = 0;

    //for (int i = 0; i < m; i++)
    //{
    //    bool foundInB = false;
    //    for (int j = 0; j < n; j++)
    //    {
    //        if (a[i] == b[j])
    //        {
    //            foundInB = true;
    //            break;
    //        }
    //    }

    //    if (foundInB)
    //    {
    //        bool alreadyInC = false;
    //        for (int k = 0; k < realSizeC; k++)
    //        {
    //            if (tmpC[k] == a[i])
    //            {
    //                alreadyInC = true;
    //                break;
    //            }
    //        }

    //        if (!alreadyInC)
    //        {
    //            tmpC[realSizeC] = a[i];
    //            realSizeC++;
    //        }
    //    }
    //}

    //int* c = new int[realSizeC];
    //for (int i = 0; i < realSizeC; i++)
    //{
    //    c[i] = tmpC[i];
    //}

    //delete[] tmpC;

    //cout << "\nThe third array:\n[ ";
    //for (int i = 0; i < realSizeC; i++)
    //{
    //    cout << c[i] << " ";
    //}
    //cout << "]" << endl;

    //delete[] a;
    //delete[] b;
    //delete[] c;

}