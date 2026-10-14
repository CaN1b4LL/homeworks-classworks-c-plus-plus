#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    
    // task 1

    //FILE* f_in = fopen("test1.txt", "r");
    //if (f_in != nullptr)
    //{
    //    char buf1[300]{};
    //    FILE* f_out = fopen("test2.txt", "r");
    //    if (f_out != nullptr)
    //    {
    //        char buf2[300]{};
    //        while (!feof(f_in))
    //        {
    //            fgets(buf1, 300, f_in);
    //            fgets(buf2, 300, f_out);
    //            if (strcmp(buf1, buf2) == 0)
    //            {
    //                cout << "lines from the first and second files are equal.";
    //            }
    //            else
    //            {
    //                cout << "lines from (" << buf1 << ") and (" << buf2 << ") not equal.";
    //            }
    //        }
    //        fclose(f_out);
    //    }
    //    fclose(f_in);
    //}

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // task 2

    //FILE* f_in = fopen("test.txt", "r");
    //if (f_in != nullptr)
    //{
    //    FILE* f_out = fopen("result.txt", "w");
    //    if (f_out != nullptr)
    //    {
    //        char buf[300]{};
    //        int count_chars = 0;
    //        int count_lines = 0;
    //        int count_vowels = 0;
    //        int count_consonants = 0;
    //        int count_digits = 0;
    //        while (fgets(buf, 300, f_in) != nullptr)
    //        {
    //            count_lines++;
    //            for (int i = 0; buf[i] != '\0'; i++)
    //            {
    //                count_chars++;
    //                if (buf[i] >= '0' && buf[i] <= '9')
    //                {
    //                    count_digits++;
    //                }

    //                if (buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u' ||
    //                    buf[i] == 'A' || buf[i] == 'E' || buf[i] == 'I' || buf[i] == 'O' || buf[i] == 'U')
    //                {
    //                    count_vowels++;
    //                }

    //                if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z'))
    //                {
    //                    if (!(buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u' ||
    //                          buf[i] == 'A' || buf[i] == 'E' || buf[i] == 'I' || buf[i] == 'O' || buf[i] == 'U'))
    //                    {
    //                        count_consonants++;
    //                    }
    //                }
    //            }
    //        }
    //        
    //        char result_buf[100];
    //        sprintf(result_buf, "Lines: %d\n", count_lines);
    //        fputs(result_buf, f_out);
    //        sprintf(result_buf, "Characters: %d\n", count_chars);
    //        fputs(result_buf, f_out);
    //        sprintf(result_buf, "Digits: %d\n", count_digits);
    //        fputs(result_buf, f_out);
    //        sprintf(result_buf, "Vowels: %d\n", count_vowels);
    //        fputs(result_buf, f_out);
    //        sprintf(result_buf, "Consonants: %d\n", count_consonants);
    //        fputs(result_buf, f_out);


    //        fclose(f_out);
    //    }
    //    fclose(f_in);
    //}














}