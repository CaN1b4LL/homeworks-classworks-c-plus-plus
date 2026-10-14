#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


struct Date
{
    int day;
    char month[20];
    int year;
};

struct House
{
    char owner[30]; // Власник
    char address[50]; // Адреса
    double height; // Висота
    int floorsCount; // Кількість поверхів
    int flatsCount; // Кількість квартир
    Date bouildDate; // Дата побудови
    char material[20]; // Матеріал
    double pricePerSqM; // Вартість кв.м.
};

void input_date(Date& obj)
{
    cout << "Day -> ";
    cin >> obj.day;
    cin.ignore();
    cout << "Month -> ";
    cin.getline(obj.month, 20);
    cout << "Year -> ";
    cin >> obj.year;
    cin.ignore();
}

void input_house(House& obj)
{
    cout << "Enter the owner -> ";
    cin.getline(obj.owner, 30);
    cout << "Enter the address -> ";
    cin.getline(obj.address, 50);
    cout << "Enter the height of the house -> ";
    cin >> obj.height;
    cout << "Enter the number of floors -> ";
    cin >> obj.floorsCount;
    cout << "Enter the number of apartments -> ";
    cin >> obj.flatsCount;
    cout << "Enter the date of construction: " << endl;
    input_date(obj.bouildDate);
    cin.ignore();
    cout << "Enter the material -> ";
    cin.getline(obj.material, 20);
    cout << "Enter the cost per sq.m. -> ";
    cin >> obj.pricePerSqM;
}

void print_date(Date obj)
{
    cout << obj.day << "." << obj.month << "." << obj.year;
}

void print_house(House obj)
{
    cout << "Owner: " << obj.owner << endl;
    cout << "Address: " << obj.address << endl;
    cout << "Height: " << obj.height << endl;
    cout << "Number of floors: " << obj.floorsCount << endl;
    cout << "Number of apartments: " << obj.flatsCount << endl;
    cout << "Date of construction: ";
    print_date(obj.bouildDate);
    cout << endl;
    cout << "Material: " << obj.material << endl;
    cout << "cost per sq.m.: " << obj.pricePerSqM << " grn" << endl;
}

void full_edit_house(House& obj)
{
    cout << "Full editing of house data: " << endl;
    input_house(obj);
    cout << "Data successfully updated!\n" << endl;
}



int main()
{
    House myHouse;

    cout << "Entering house data." << endl;
    input_house(myHouse);

    print_house(myHouse);

    cout << "Editing house data." << endl;
    full_edit_house(myHouse);

    print_house(myHouse);






}