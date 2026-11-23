#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int rand_10()
{
    return rand() % 10;
}

typedef int my_type;
typedef int(func)();

template<typename Iterator, typename Function>
void my_generate(Iterator begin, Iterator end, Function gen)
{
    for (;begin != end;begin++)
    {
        *begin = gen();
    }
}

class Test
{
public:
    Test()
    {
        cout << "Test()" << endl;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
    void print()const
    {
        cout << "Hello" << endl;
    }
};

int main()
{

    //    Test * pt = new Test();
    //    cout<<"!!!"<<endl;
    //    delete pt;

    //    Test * pt =  (Test*) malloc(sizeof(Test));
    //    cout<<"!!!"<<endl;
    //    pt->print();
    //    free(pt);


    //    int(*pt)() = rand_10;
    //    func *pt = rand_10;
    //    cout<<pt()<<endl;

    srand(time(0));

    /*
        vector<vector<int>>arr(5);
        for (int i = 0; i < arr.size(); ++i)
        {
            arr[i].resize(rand()%10+5);
        }

        for (int i = 0; i < arr.size(); ++i)
        {
            for (int j = 0; j < arr[i].size(); ++j)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    */
    /*//    vector<int> v(10);
    //    for (int i = 0; i < v.size(); ++i)
    //    {
    //        v[i] = rand() % 10;
    //    }
    //
    //    cout << "iterator:\t\t\t\t";
    //    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;
    //    cout << "const_iterator:\t\t\t";
    //    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;
    //    cout << "reverse_iterator:\t\t";
    //    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;
    //    cout << "const_reverse_iterator:\t";
    //    for (vector<int>::const_reverse_iterator it = v.crbegin(); it != v.crend(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;
    //     Iterators:
    //        - input
    //        - output
    //        - forward
    //        - bidirectional
    //        - random access
    //        - contiguous
    //
    //

    //    vector<int> v(10);
    //    for (int i = 0; i < v.size(); ++i)
    //    {
    //        v[i] = rand() % 10;
    //    }
    //    list<int> l(v.begin(), v.end());
    //    cout<<v[3]<<endl;
    //    cout << "vector:\t";
    //    for (auto it = v.begin(); it < v.end(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;
    //    cout << "list:\t";
    //    for (auto it = l.begin(); it != l.end(); it++)
    //    {
    //        cout << *it << " ";
    //    }
    //    cout << endl;*/

    //   vector<int>v(10);
    //    generate(v.begin(), v.end(), rand_10);
    //    //my_generate(v.begin(), v.end(), rand_10);
    //    ostream_iterator<int> osi(cout," ");
    //    copy(v.begin(), v.end(), osi);
    //    cout<<endl;
    //    list<int> l;
    //    copy(v.begin(), v.end(), inserter(l, l.begin()));
    //    copy(l.begin(), l.end(), osi);
    //    cout<<endl;



}