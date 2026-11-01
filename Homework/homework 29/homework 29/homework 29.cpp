#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
using namespace std;

int main()
{
	Pet pet("Just an animal");
	cout << pet << endl;

	Dog dog("Rex", "German Shepherd");
	cout << dog << endl;

	Cat cat("Murka", "Red");
	cout << cat << endl;

	Parrot parrot("Kesha", true);
	cout << parrot << endl;

	cat.setName("Barsik");
	cat.setColor("Black");
	cout << "\nAfter changing the cat's data:\n" << cat << endl;
}