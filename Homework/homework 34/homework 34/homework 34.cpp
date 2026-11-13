#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// task 1

	//fstream f1("test.txt", ios::in);
	//if (f1.is_open())
	//{
	//	string targetWord;
	//	cout << "Enter the word to search for: ";
	//	cin >> targetWord;

	//	string currentWord;
	//	int count = 0;

	//	f1 >> currentWord;
	//	while (f1)
	//	{
	//		if (currentWord == targetWord)
	//		{
	//			count++;
	//		}
	//		f1 >> currentWord;
	//	}
	//	f1.close();

	//	cout << "The word \"" << targetWord << "\" was found " << count << " times." << endl;
	//}
	//else
	//{
	//	cout << "Error opening file!" << endl;
	//}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// task 2

	//string targetWord, replacementWord;
	//cout << "Enter the word to find: ";
	//cin >> targetWord;
	//cout << "Enter the replacement word: ";
	//cin >> replacementWord;

	//string fileContent = "";

	//fstream file("test.txt", ios::in);
	//if (file.is_open())
	//{
	//	string currentWord;
	//	while (file >> currentWord)
	//	{
	//		if (currentWord == targetWord)
	//		{
	//			fileContent += replacementWord + " ";
	//		}
	//		else
	//		{
	//			fileContent += currentWord + " ";
	//		}
	//	}
	//	file.close();
	//}
	//else
	//{
	//	cout << "Error opening file for reading!" << endl;
	//}

	//fstream outFile("test.txt", ios::out | ios::trunc);
	//if (outFile.is_open())
	//{
	//	outFile << fileContent;
	//	outFile.close();
	//	cout << "Replacement completed successfully!" << endl;
	//}
	//else
	//{
	//	cout << "Error opening file for writing!" << endl;
	//}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
