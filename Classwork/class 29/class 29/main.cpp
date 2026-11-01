#include "Student.h"
using  namespace std;
int main()
{
//    Person p("Vasya", 23);
//    cout<<p<<endl;
    Student s("Vasya", 21, 123);
    cout<<s<<endl;
    s.setName("Petya");
    s.setAge(24);
    cout<<s<<endl;
}
