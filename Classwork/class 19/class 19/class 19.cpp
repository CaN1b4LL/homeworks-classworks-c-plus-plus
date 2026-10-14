#include <iostream>
#define f(size) for(int i = 0; i < size; i++)

#define Pi 3.14
#define f(size) for(int i = 0; i<size; i++)
#undef Pi
using namespace std;
#ifdef Pi


//struct Product
//{
//    int id;
//    char name[20];
//    char category[20];
//    float price;
//
//};

//struct Person
//{
//    int id;
//    char *first_name;
//    char *last_name;
//    int age;
//
//};

int main()
{
    
    //f(3) cout << "hello world!!!" << endl;

    /*
     include
     define
     undef
     if
     ifdef
     ifndef
     else
     elif
     endif
     warning
     error
     line
     pragma
     * */
     //    f(5) cout<<"Pi = "<<Pi<<endl;
    //cout << "Pi = " << Pi << endl;
    //cout << endl;
    //}
    //#else
    //int main()
    //{
    ////    cout<<"Pi is not defined"<<endl;
    ////#warning Pi is not defined
    //#line 157
    //#error Pi is not defined
    //}
    //#endif

    //int a[5]{ 1,2,3,4,5 }, b[5]{};
    //FILE* f = fopen("array.bin", "wb");
    //if (f != nullptr)
    //{
    //    fwrite(a, sizeof(int), 5, f);
    //    fclose(f);
    //}

    //f = fopen("array.bin", "rb");
    //if (f != nullptr)
    //{
    //    fread(b, sizeof(int), 5, f);
    //    fclose(f);
    //}

    //for (int i = 0; i < 5; i++)
    //{
    //    cout << b[i] << " ";
    //}
    //cout << endl;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    //srand(time(0));
    //int size = rand() % 20 + 5;
    //int* arr = new int[size] {};
    //for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 27 + 65;
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    //FILE* f = fopen("array.bin", "wb");
    //if (f != nullptr)
    //{
    //    fwrite(arr, sizeof(int), size, f);
    //    fclose(f);
    //}

    //delete[] arr;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //Product product{ 123, "Bread", "Food", 45.9 };
    //FILE* f = fopen("product.bin", "wb");
    //if (f != nullptr)
    //{
    //    fwrite(&product, sizeof(Product), 1, f);
    //    fclose(f);
    //}

    //cout << product.id << ", " << product.name << ", " << product.category << ", " << product.price << endl;


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


    //Person person{};
    //person.id = 123;
    //person.first_name = new char[6];
    //strcpy(person.first_name, "Vasya");
    //person.last_name = new char[7];
    //strcpy(person.last_name, "Pupkin");
    //person.age = 23;

    //cout << person.id << ", " << person.first_name << ", " << person.last_name << ", " << person.age << endl;

    //FILE* f = fopen("person.bin", "wb");
    //if (f != nullptr)
    //{
    //    fwrite(&person.id, sizeof(int), 1, f);
    //    int len = strlen(person.first_name) + 1;
    //    fwrite(person.first_name, sizeof(char), len, f);
    //    len = strlen(person.last_name) + 1;
    //    fwrite(&len, sizeof(int), 1, f);
    //    fwrite(person.last_name, sizeof(char), len, f);
    //    fwrite(&person.age, sizeof(int), 1, f);

    //    fclose(f);
    //}


    //delete[] person.last_name;
    //delete[] person.first_name;


}