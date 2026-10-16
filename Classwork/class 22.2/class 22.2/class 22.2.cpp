#include "Window.h"
using namespace std;




int main()
{
	Window w1(100, 200, "Wood");
	Window w2 = w1;

	w1.printWindow();
	w2.printWindow();
	
	cout << "End of Program" << endl;


}