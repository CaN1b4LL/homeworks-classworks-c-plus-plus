#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <string>
#include <list>
#include <deque>
#include <forward_list>
#include <array>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
    /*
 STL - Standard Template Library:
    - Containers
    - Iterators
    - Algorithms
 */
 //    int arr[] = {1,2,3,4,5,6,7,8};
 //    vector<int> v1(arr, arr+8);
 //    cout<<v1.size()<<endl;
 //    for (int i = 0; i < v1.size(); ++i)
 //    {
 //        cout<<v1[i]<<" ";
 //    }
 //    vector<int> v;
 //    v.reserve(100);
 //    for (int i = 0; i < 20; ++i)
 //    {
 //        cout<<v.size()<<"\t"<<v.capacity()<<endl;
 //        v.push_back(i);
 //    }
 //    cout<<v.size()<<"\t"<<v.capacity()<<endl;
 //    v.shrink_to_fit();
 //    v.clear();
 //
 //    cout<<v.size()<<"\t"<<v.capacity()<<endl;
 //    list<int> lst;
 //    deque<int> d;
 //    forward_list<int> lst;
 //    array<int ,10>arr{};
 //    cout<<arr.size()<<endl;

 //    stack<int> stk;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        stk.push(i+1);
 //    }
 //
 //    while (!stk.empty())
 //    {
 //        cout<<stk.top()<<" ";
 //        stk.pop();
 //    }
 //    queue<int> q;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        q.push(i+1);
 //    }
 //
 //    while (!q.empty())
 //    {
 //        cout<<q.front()<<" ";
 //        q.pop();
 //    }

 //    srand(time(0));
 //    priority_queue<int> pq;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        int tmp = rand() % 10;
 //        cout << tmp << " ";
 //        pq.push(tmp);
 //    }
 //    cout << endl;
 //    while (!pq.empty())
 //    {
 //        cout << pq.top() << " ";
 //        pq.pop();
 //    }

 //    srand(time(0));
 //    set<int> s;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        int tmp = rand() % 10;
 //        cout << tmp << " ";
 //        s.insert(tmp);
 //    }
 //    cout << endl;
 //
 //    for(auto item : s)
 //    {
 //        cout<<item << " ";
 //    }
 //    cout<<endl;
 //    srand(time(0));
 //    multiset<int> ms;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        int tmp = rand() % 10;
 //        cout << tmp << " ";
 //        ms.insert(tmp);
 //    }
 //    cout << endl;
 //
 //    for(auto item : ms)
 //    {
 //        cout<<item << " ";
 //    }
 //    cout<<endl;


 //    map<int, string> m;
 //    m.insert(pair<int,string>(2, "two"));
 //    m.insert(pair<int,string>(5, "five"));
 //    m.insert(pair<int,string>(1, "one"));
 //    m.insert(pair<int,string>(3, "three"));
 //    m.insert(pair<int,string>(4, "four"));
 //    m[6] = "six";
 //
 //    for(auto item : m)
 //    {
 //        cout<<item.first<<" "<<item.second<<endl;
 //    }

 //    multimap<int, string> mm;
 //    mm.insert(pair<int,string>(2, "two"));
 //    mm.insert(pair<int,string>(2, "два"));
 //    mm.insert(pair<int,string>(5, "five"));
 //    mm.insert(pair<int,string>(1, "one"));
 //    mm.insert(pair<int,string>(3, "three"));
 //    mm.insert(pair<int,string>(4, "four"));
 //
 //
 //    for(auto item : mm)
 //    {
 //        cout<<item.first<<" "<<item.second<<endl;
 //    }

 // unordered
 //    srand(time(0));
 //    unordered_set<int> s;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        int tmp = rand() % 10;
 //        cout << tmp << " ";
 //        s.insert(tmp);
 //    }
 //    cout << endl;
 //
 //    for(auto item : s)
 //    {
 //        cout<<item << " ";
 //    }
 //    cout<<endl;
 //
 //
 //
 //    srand(time(0));
 //    unordered_multiset<int> ms;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        int tmp = rand() % 10;
 //        cout << tmp << " ";
 //        ms.insert(tmp);
 //    }
 //    cout << endl;
 //
 //    for(auto item : ms)
 //    {
 //        cout<<item << " ";
 //    }
 //    cout<<endl;
 //
 //
 //    unordered_map<int, string> m;
 //    m.insert(pair<int,string>(2, "two"));
 //    m.insert(pair<int,string>(5, "five"));
 //    m.insert(pair<int,string>(1, "one"));
 //    m.insert(pair<int,string>(3, "three"));
 //    m.insert(pair<int,string>(4, "four"));
 //    m[6] = "six";
 //
 //    for(auto item : m)
 //    {
 //        cout<<item.first<<" "<<item.second<<endl;
 //    }
 //
 //    unordered_multimap<int, string> mm;
 //    mm.insert(pair<int,string>(2, "two"));
 //    mm.insert(pair<int,string>(2, "два"));
 //    mm.insert(pair<int,string>(5, "five"));
 //    mm.insert(pair<int,string>(1, "one"));
 //    mm.insert(pair<int,string>(3, "three"));
 //    mm.insert(pair<int,string>(4, "four"));
 //
 //
 //    for(auto item : mm)
 //    {
 //        cout<<item.first<<" "<<item.second<<endl;
 //    }

 //
 //    vector<string> v;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        v.push_back(to_string(i+1));
 //    }
 //    for (auto i = v.begin(); i != v.end(); ++i)
 //    {
 //        cout<<*i<<" ";
 //    }
 ////    for (int i = 0; i < v.size(); ++i)
 ////    {
 ////        cout<<v[i]<<" ";
 ////    }
 //    cout<<endl;

 //    list<string> l;
 //
 //    for (int i = 0; i < 10; ++i)
 //    {
 //        l.push_back(to_string(i+1));
 //    }
 //    for (auto i = l.begin(); i != l.end(); ++i)
 //    {
 //        cout<<*i<<" ";
 //    }
 //    cout<<endl;


     // task 1
    //srand(time(0));
    //vector<int> v(10);

    //for (int i = 0; i < v.size(); ++i)
    //{
    //    v[i] = rand() % 20 - 10;
    //    cout << v[i] << " ";
    //}
    //cout << endl;
    //int counter = 0;
    //for (int i = 0; i < v.size(); ++i)
    //{
    //    if (v[i] < 0)
    //        counter++;
    //}
    //cout << "There are " << counter << " negative numbers" << endl;


	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//srand(time(0));
	//const int size = 15;
	//vector<int> vec(size);
	//int count = 0;

	//for (int i = 0; i < size; i++)
	//{
	//	vec[i] = -20 + rand() % 41;
	//	cout << vec[i] << " ";
	//	if (vec[i] < 0)
	//		count++;
	//}

	//cout << "Negative num: " << count << endl;
}