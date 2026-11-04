#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;

int main()
{
	Passport ukrPassport("Taras Hryhorovych Shevchenko", "005834826", "12.03.1968");
	cout << ukrPassport << "\n\n";

	ForeignPassport foreignPassport("Taras Hryhorovych Shevchenko", "005834826", "12.03.1968", 
		"FP987645", "Shengen (until 2028), USA B1/B2 (until 2030)");
	cout << foreignPassport << endl;


}