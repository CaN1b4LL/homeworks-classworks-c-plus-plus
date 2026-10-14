#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



enum class Sex
{
    Unknown,
    Male,
    Female
};


struct Person
{
    int id = 0;
    char* first_name = nullptr;
    char* last_name = nullptr;
    int age = 0;
    Sex sex = Sex::Unknown;
};

Sex str_to_sex(const char* str)
{
    if (strcmp(str, "male") == 0)
        return Sex::Male;
    if (strcmp(str, "female") == 0)
        return Sex::Female;
    return Sex::Unknown;
}

const char* sex_to_str(Sex sex)
{
    switch (sex)
    {
    case Sex::Male:
        return "male";
    case Sex::Female:
        return "female";
    default:
        return "unknown";


    }
}

void input_person(Person& obj)
{
    char buf[500]{};
    cout << "Enter the first name ->";
    cin.getline(buf, 500);
    delete[] obj.first_name;
    obj.first_name = new char[strlen(buf) + 1];
    strcpy(obj.first_name, buf);
    cout << "Enter the last name ->";
    cin.getline(buf, 500);
    delete[] obj.last_name;
    obj.last_name = new char[strlen(buf) + 1];
    strcpy(obj.last_name, buf);
    cout << "Enter the age ->";
    cin >> obj.age;
    cin.ignore();
    cout << "Enter the sex(male/female) ->";
    cin.getline(buf, 500);
    obj.sex = str_to_sex(buf);
}

void print_person(Person& obj)
{
    cout << "Id: " << obj.id << endl;
    cout << "Name: " << obj.first_name << obj.last_name << endl;
    cout << "Age: " << obj.age << endl;
    cout << "Sex: " << sex_to_str(obj.sex) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}

void add_person(Person*& arr, int& size, int& id)
{
    if (size == 0)
        arr = new Person[size + 1];
    else
    {
        Person* tmp = new Person[size + 1];
        for (int i = 0; i < size; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;

    }

    arr = tmp;

    arr[size].id = id++;
    input_person(arr[size]);
    size++;
}

void remove_at(Person*& arr, int& size, int pos)
{
    delete[] arr[pos].first_name;
    delete[] arr[pos].last_name;

    if (size == 1)
    {
        delete[] arr;
        arr = nullptr;
        size = 0;
        return;
    }

    Person* tmp = new Person[size - 1];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == pos)
            continue;
        tmp[j] = arr[i];
        j++;
    }
    delete[] arr;
    arr = tmp;
    size--;
}



int main()
{
    //Person p;
    //input_person(p);
    //print_person(p);
    //
    //delete[] p.last_name;
    //delete[] p.first_name;

    int id = 1;
    int size = 0;
    Person* arr = nullptr;
    add_person(arr, size, id);
    add_person(arr, size, id);
    add_person(arr, size, id);

    for (int i = 0; i < size; i++)
    {
        print_person(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i].first_name;
        delete[] arr[i].last_name;
    }

    if (size != 0)
        delete[] arr;




}