#include <iostream>
#include <cstring>
using namespace std;

// task 1

//void delSymbol(char* str, int index)
//{
//	for (int i = index; str[i] != '\0'; i++)
//	{
//		str[i] = str[i + 1];
//	}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 2

//void removeChar(char* str, char target)
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == target)
//		{
//			for (int j = i; str[j] != '\0'; j++)
//			{
//				str[j] = str[j + 1];
//			}
//
//			i--;
//		}
//	}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 3

//void insertChar(char* str, int index, char symbol)
//{
//	int length = strlen(str);
//
//	for (int i = length; i >= index; i--)
//	{
//		str[i + 1] = str[i];
//	}
//
//	str[index] = symbol;
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// task 4

//void replaceDots(char* str)
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == '.')
//		{
//			str[i] = '!';
//		}
//	}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int main()
{
    // task 1
	
	//const int size = 100;
	//char str[size];
	//
	//cout << "Enter a word -> ";
	//cin.getline(str, size);
	//
	//int index;
	//cout << "Enter the index of the character to delete -> ";
	//cin >> index;
	//
	//delSymbol(str, index);
	//
	//cout << "Result: " << str << endl;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 2

	//const int size = 100;
	//char str[size];
	//char target;
	//
	//cout << "Enter a string -> ";
	//cin.getline(str, size);
	//
	//cout << "Enter a symbol -> ";
	//cin >> target;
	//
	//removeChar(str, target);
	//
	//cout << "Result -> " << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 3

	//const int size = 100;
	//char str[size] = "hello, world!";
	//
	//cout << "Initial line: " << str << endl;
	//
	//int index = 2;
	//char symbol = 'X';
	//
	//cout << "Inserting a symbol '" << symbol << "' on the index " << index << endl;
	//
	//insertChar(str, index, symbol);
	//
	//cout << "Result: " << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 4

	//const int size = 100;
	//char str[size] = "hello. world.";
	//cout << "Initial line: " << str << endl;
	//
	//replaceDots(str);
	//
	//cout << "Result: " << str << endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

}
