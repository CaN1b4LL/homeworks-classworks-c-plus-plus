#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Hamster.h"
using namespace std;

int main()
{
	Pet* pets[4];
	pets[0] = new Dog("Rex", "A large guard dog");
	pets[1] = new Cat("Barsik", "Red and scaly cat");
	pets[2] = new Parrot("Gosha", "Green parrot with a tuft");
	pets[3] = new Hamster("Lolik", "Small and fast hamster");

	for (int i = 0; i < 4; i++)
	{
		pets[i]->Type();
		pets[i]->Show();
		pets[i]->Sound();
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		delete pets[i];
	}
}