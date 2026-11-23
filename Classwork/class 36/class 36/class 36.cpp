#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdexcept>

using namespace std;

class Person
{
    char* name = nullptr;
    int age = 0;
public:
    Person() = default;
    Person(const char* n, int a)
    {
        if (a < 0)
            throw invalid_argument("age must be not negative");
        name = new char[strlen(n) + 1] {};
        strcpy(name, n);
        age = a;
    }
    Person(Person&& obj)noexcept
    {
        name = obj.name;
        age = obj.age;
        obj.name = nullptr;
    }
    Person(const Person& obj)
    {
        age = obj.age;
        if (obj.name == nullptr)
            return;
        name = new char[strlen(obj.name) + 1] {};
        strcpy(name, obj.name);
    }
    ~Person()
    {
        delete[]name;
    }
    Person& operator=(const Person& obj)
    {
        if (this == &obj)
            return *this;
        delete[] name;
        name = nullptr;
        age = obj.age;
        if (obj.name != nullptr)
        {
            name = new char[strlen(obj.name) + 1] {};
            strcpy(name, obj.name);
        }
        return *this;
    }
    Person& operator=(Person&& obj)noexcept
    {
        if (this == &obj)
            return *this;
        delete[] name;
        name = obj.name;
        age = obj.age;
        obj.name = nullptr;
        return *this;
    }
    int getAge()const
    {
        return age;
    }
    void setAge(int val)
    {
        age = val;
    }
    const char* getName()const
    {
        return name;
    }
    void setName(const char* val)
    {
        delete[] name;
        name = new char[strlen(val) + 1] {};
        strcpy(name, val);
    }
    void print()const
    {
        cout << (name ? name : "Noname") << ", " << age << endl;
    }
};



int quot(int a, int b) noexcept
{
    try
    {
        if (b == 0)
            throw invalid_argument("second argument cannot be zero");
        return a / b;
    }
    catch (const invalid_argument& ex)
    {
        cerr << "Error(function). " << ex.what() << endl;
        throw;
    }
}

int main()
{

    try
    {
        Person p("Vasya", -23);
        p.print();
    }
    catch (const invalid_argument& ex)
    {
        cerr << ex.what() << endl;
    }


    /*
     try
     catch
     throw
     */

     /*    int num;
     cout<<"Enter a number->";
     cin>>num;

     while (cin.fail())
     {
         cin.clear();
         cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
         cout<<"Wrong format. Try one more time->";
         cin>>num;
     }
     cout<<"Your number is ["<<num<<"]"<<endl;*/
     /* try
      {
          int a, b;
          cout<<"Enter the first number->";
          cin>>a;
          if(cin.fail())
              throw runtime_error("Cannot convert [a] to the number");
          cout<<"Enter the second number->";
          cin>>b;
          if(cin.fail())
              throw runtime_error("Cannot convert [b] to the number");

          if(b == 0)
          {
              logic_error err("Division by zero");
              throw err;
          }
          int res = a/b;
          cout<<res<<endl;
      }
      catch(const runtime_error& ex)
      {
          cerr<<"Error. "<<ex.what()<<endl;
          cin.clear();
          cin.ignore(100000, '\n');
      }
      catch(const logic_error& ex)
      {
          cerr<<"Std Error. "<<ex.what()<<endl;
      }
      catch(const char * ex)
      {
          cerr<<"Error. "<<ex<<endl;
      }
      catch(int ex)
      {
          cerr<<"Error. int error"<<endl;
      }
      catch(...)
      {
          cerr<<"Error"<<endl;
      }*/

      //    string str = "Hello";
      ////    cout<<str[5]<<endl;
      //    cout<<str.at(5)<<endl;

        /*  try
          {
              int res = quot(12,0);
              cout<<res<<endl;
          }
          catch(const invalid_argument& ex)
          {
              cerr<<"Error(main). "<<ex.what()<<endl;
          }*/


}