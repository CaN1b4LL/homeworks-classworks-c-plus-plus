#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <random>
using namespace std;

int rand_10()
{
	return rand() % 10;
}

int rand_20_30()
{
	return rand() % 10 + 20;
}

class Counter
{
	mutable int num;
public:
	Counter(int n)
	{
		num = n;
	}

	void setNum(int n)
	{
		num = n;
	}

	int operator()() const
	{
		return num++;
	}

};


int main()
{
//	//    random_device rd;
////    mt19937 gen(rd());
////    uniform_int_distribution<int>uid(-10,10);
////    for (int i = 0; i < 10; ++i)
////    {
////        //cout<<gen()<<" ";
////        cout<<uid(gen)<<" ";
////    }
//
//
//	srand(time(0));
//	vector<int> v(10);
//	//generate(v.begin(), v.end(), rand_10);
//	generate(v.begin(), v.end(), []
//		{
//			return rand() % 10;
//		});
//	//    Counter counter(1);
//	//    generate(v.begin(), v.end(), counter);
//	//
//	//    generate(v.begin(), v.end(), [num=1]()mutable noexcept ->int{
//	//        return num++;
//	//    });
//
//	ostream_iterator<int> osi(cout, " ");
//	copy(v.begin(), v.end(), osi);
//	cout << endl;
//
//	//    generate_n(back_inserter(v), 5, rand_20_30);
//	generate_n(back_inserter(v), 5, [min = 20, max = 30]
//		{
//			return rand() % (max - min) + min;
//		});
//	copy(v.begin(), v.end(), osi);
//	cout << endl;
//	//sort(v.begin(), v.end(), less<>());
//	//sort(v.begin(), v.end(), greater<>());
//	sort(v.begin(), v.end(), [](int a, int b) -> bool
//		{
//			return a > b;
//		});
//	copy(v.begin(), v.end(), osi);
//	cout << endl;
//	shuffle(v.begin(), v.end(), random_device());
//	copy(v.begin(), v.end(), osi);
//	cout << endl;
	//auto it = find(v.begin(), v.end(), 5);
//    auto it = find_if(v.begin(), v.end(), [](auto val)->bool{
//        return val % 2 == 0;
//    });
//    if(it != v.end())
//        cout<<*it<<endl;
//    else
//        cout<<"There is no such number"<<endl;
//    int counter = count(v.begin(), v.end(), 5);
//    int counter = count_if(v.begin(), v.end(), [](auto val) -> bool
//    {
//        return val % 2 != 0;
//    });
//    cout << counter << endl;
//    list<double> l;
//    transform(v.begin(), v.end(), back_inserter(l), [](int val)->double{
//       return val/10.0;
//    });
//    copy(l.begin(), l.end(), ostream_iterator<double>(cout, " "));
//    cout << endl;

//    set<int> even_numbers;
//    copy_if(v.begin(), v.end(), inserter(even_numbers, even_numbers.begin()), [](int val)
//    {
//        return val % 2 == 0;
//    });
//    copy(even_numbers.begin(), even_numbers.end(), osi);
//    cout << endl;

//    int res = reduce(v.begin(), v.end(), 0, [](int a, int b){
//        return a+b;
//    });
//    int res = accumulate(v.begin(), v.end(), 0, [](int a, int b){
//        return a+b;
//    });
//    cout<<res<<endl;



	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// 
	//vector<int> input = { 231, 234, 23, 342, 1, 435 };
	//vector<int> result;

	//cout << "Input: ";
	//copy(input.begin(), input.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;

	//transform(input.begin(), input.end(), input.begin(), [&result](int num) {
	//	string s = to_string(num);
	//	transform(s.begin(), s.end(), back_inserter(result), [](char c) {
	//		return c - '0';
	//		});
	//		return num;
	//	});

	//copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;
}