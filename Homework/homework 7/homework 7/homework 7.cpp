#include <iostream>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 1


//int power(int base, int exponent)
//{
//    int result = 1;
//
//    for (int i = 0; i < exponent; i++)
//    {
//        result *= base;
//    }
//
//    return result;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 2


//int sumRange(int num1, int num2)
//{
//    int start = num1;
//    int end = num2;
//
//    int sum = 0;
//
//    for (int i = start; i <= end; i++)
//    {
//        sum += i;
//    }
//
//    return sum;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 3


//void findPerfectNumbers(int start, int end)
//{
//    for (int i = start; i <= end; i++)
//    {
//        int sum = 0;
//
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0) sum += j;
//        }
//
//        if (sum == i && i > 0)
//        {
//            cout << i << " ";
//        }
//    }
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 4


//void printCard(int cardNum, int suitNum)
//{
//    switch (cardNum)
//    {
//    case 6: cout << "6"; break;
//    case 7: cout << "7"; break;
//    case 8: cout << "8"; break;
//    case 9: cout << "9"; break;
//    case 10: cout << "10"; break;
//    case 11: cout << "Jack"; break;
//    case 12: cout << "Queen"; break;
//    case 13: cout << "King"; break;
//    case 14: cout << "Tuz"; break;
//    default: cout << "Invalid value"; return;
//    }
//
//    cout << " ";
//
//    switch (suitNum)
//    {
//    case 1: cout << "Spades"; break;
//    case 2: cout << "Clubs"; break;
//    case 3: cout << "Diamonds"; break;
//    case 4: cout << "Hearts"; break;
//    default: cout << "Wrong suit"; break;
//    }
//
//    cout << endl;
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// task 5


//bool isLucky(int n)
//{
//    int d1 = n / 100000;
//    int d2 = (n / 10000) % 10;
//    int d3 = (n / 1000) % 10;
//    int d4 = (n / 100) % 10;
//    int d5 = (n / 10) % 10;
//    int d6 = n % 10;
//
//    int sumFirst = d1 + d2 + d3;
//    int sumLast = d4 + d5 + d6;
//
//    return (sumFirst == sumLast);
//}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    // task 1

    //int base, exponent;

    //cout << "Enter the base of the power -> ";
    //cin >> base;
    //cout << "Enter the exponent -> ";
    //cin >> exponent;

    //cout << "Result: " << power(base, exponent) << endl;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 2


    //int a, b;

    //cout << "Enter the first number -> ";
    //cin >> a;
    //cout << "Enter the second number -> ";
    //cin >> b;

    //cout << "The sum of the range: " << sumRange(a, b) << endl;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 3


    //int a, b;
    //cout << "Enter the start and end of the interval -> ";
    //cin >> a >> b;

    //cout << "Perfect numbers: ";
    //findPerfectNumbers(a, b);
    //cout << endl;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 4


    //int c, s;

    //cout << "Enter the card number (6-14, where 11=Jack, 14=Ace) -> ";
    //cin >> c;
    //cout << "Enter suit (1-Spades, 2-Clubs, 3-Diamonds, 4-Hearts) -> ";
    //cin >> s;

    //cout << "\nYour card: ";
    //printCard(c, s);


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    // task 5


    //int number;
    //cout << "Enter a six-digit number -> ";
    //cin >> number;

    //if (isLucky(number))
    //{
    //    cout << "This is a lucky number!" << endl;
    //}
    //else
    //{
    //    cout << "This is not a lucky number." << endl;
    //}


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
