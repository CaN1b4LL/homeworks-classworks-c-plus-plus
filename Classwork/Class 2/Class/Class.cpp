
#include <iostream>

using namespace std;

int main()
{
    int hryvnias, kopecks;

    cout << "Enter the hryvnias: ";
    cin >> hryvnias;
    cout << "Enter the pennies: ";
    cin >> kopecks;

    hryvnias = hryvnias + kopecks / 100;

    kopecks = kopecks % 100;

    cout << "Corrected amount: " << hryvnias << " hrn. " << kopecks << " kop." << endl;
}