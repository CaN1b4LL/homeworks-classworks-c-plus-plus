#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//struct Time
//{
//    unsigned hour;
//    unsigned minute;
//    unsigned second;
//};




int main()
{
    //Time t{ 12,23,34 };
    //cout << t.hour << ":" << t.minute << ":" << t.second << endl;
    //
    //Time* pt = &t;
    //cout << pt->hour << endl;


    //FILE* f = fopen("test.txt", "w");

    //if (f != nullptr)
    //{
    //    fputs("Hello file!!!", f);
    //}
    //fclose(f);

    

    //FILE* f = fopen("test.txt", "w");

    //if (f != nullptr)
    //{
    //    char buf[300]{};
    //    fgets(buf, 300, f);
    //    cout << buf << endl;
    //    fclose(f);
    //}

    //FILE* f = fopen("test.txt", "r");

    //if (f != nullptr)
    //{
    //    char buf[300]{};

    //    while (!feof(f))
    //    {
    //        cout << ftell(f) << ": ";
    //        fgets(buf, 300, f);
    //        cout << buf;
    //    }
    //    fclose(f);
    //}
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // task 1

    //FILE* f_in = fopen("test.txt", "r");
    //if (f_in != nullptr)
    //{
    //    FILE* f_out = fopen("result.txt", "w");
    //    if (f_out != nullptr)
    //    {
    //        char buf[500]{};
    //        while (!feof(f_in))
    //        {
    //            fgets(buf, 500, f_in); // читаем
    //            fputs(buf, f_out); // записываем
    //        }
    //        fclose(f_out);
    //    }
    //    fclose(f_in);
    //}

    // task 2

    //FILE* f_in = fopen("test.txt", "r");
    //if (f_in != nullptr)
    //{
    //    FILE* f_out = fopen("result.txt", "w");
    //    if (f_out != nullptr)
    //    {
    //        char buf[500]{};
    //        while (!feof(f_in))
    //        {
    //            fgets(buf, 500, f_in);
    //            char* token = strtok(buf, " \t\n\r.,!?;:-");
    //            while (token != nullptr)
    //            {
    //                if (strlen(token) >= 7)
    //                {
    //                    fputs(token, f_out);
    //                    fputs("\n", f_out);
    //                }
    //                token = strtok(nullptr, " \t\n\r.,!?;:-");
    //            }
    //        }
    //        fclose(f_out);
    //    }
    //    fclose(f_in);
    //}

    // task 3

    //FILE* f_in = fopen("test.txt", "r");
    //if (f_in != nullptr)
    //{
    //    FILE* f_out = fopen("result.txt", "w");
    //    if (f_out != nullptr)
    //    {
    //        char lines[100][500]{};
    //        int count = 0;
    //        while (!feof(f_in))
    //        {
    //            fgets(lines[count], 500, f_in);
    //            count++;
    //        }

    //        for (int i = count - 1; i >= 0; i--)
    //        {
    //            fputs(lines[i], f_out);
    //        }
    //        fclose(f_out);
    //    }
    //    fclose(f_in);
    //}






}