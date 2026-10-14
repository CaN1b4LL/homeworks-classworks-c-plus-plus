#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};

struct Date
{
    int day;
    char month[20];
    int year;
};

struct Person
{
    char first_name[20]{};
    char last_name[20]{};
    Date birthday{};
};
void print_date(Date obj)
{
    cout << "Today is " << obj.day << " " << obj.month << " " << obj.year << endl;
}
void input_date(Date& obj)
{
    cout << "day->";
    cin >> obj.day;
    cin.ignore();
    cout << "month->";
    cin.getline(obj.month, 20);
    cout << "year->";
    cin >> obj.year;
    cin.ignore();
}
void input_person(Person& obj)
{
    cout << "Enter the first name->";
    cin.getline(obj.first_name, 20);
    cout << "Enter the last name->";
    cin.getline(obj.last_name, 20);
    cout << "Enter the birthday" << endl;
    input_date(obj.birthday);
}
void print_person(Person obj)
{
    cout << "Name: " << obj.first_name << " " << obj.last_name << endl;
    cout << "Birthday: ";
    print_date(obj.birthday);

}
void full_edit_person(Person& obj)
{
    cout << "First name: " << obj.first_name << endl;
    cout << "->";
    cin.getline(obj.first_name, 20);
    cout << "Last name: " << obj.last_name << endl;
    cout << "->";
    cin.getline(obj.last_name, 20);
    cout << "Birthday";
    print_date(obj.birthday);
    input_date(obj.birthday);
}
int main()
{

    Person p;
    input_person(p);
    print_person(p);
    full_edit_person(p);
    print_person(p);

    //    Date today{29,"September", 2026};
    ////    today.day = 29;
    ////    strcpy(today.month, "September");
    ////    today.year = 2026;
    //    input_date(today);
    //    print_date(today);

    //    Point a{};
    //    cout<<sizeof(a)<<endl;
    //    cout<<"X = "<<a.x<<", Y = "<<a.y<<endl;



    //    int a = 5, b = 3;
    //    int * pt = &a;
    //    *pt = 23;
    //    cout<<*pt<<endl;
    //    pt = &b;
    //    cout<<*pt<<endl;
    //    const int c = 12;
    //    const int * c_pt;
    //    c_pt = &c;
    //    cout<<*c_pt<<endl;
    //    c_pt = &a;
    //    cout<<*c_pt<<endl;
    //    int * const pt_c = &a;
    //    *pt_c = 45;
    //    cout<<*pt_c<<endl;
    //
    //    const int *const c_pt_c = &c;
    //    cout<<*c_pt_c<<endl;


}