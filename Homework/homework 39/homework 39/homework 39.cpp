#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <random>
#include <string>
#include <iterator>
using namespace std;



int main()
{
	vector<int> input = { 231, 234, 23, 342, 1, 435 };
	vector<int> result;

	cout << "Input: ";
	copy(input.begin(), input.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	transform(input.begin(), input.end(), input.begin(), [&result](int num) {
		string s = to_string(num);
		transform(s.begin(), s.end(), back_inserter(result), [](char c) {
			return c - '0';
			});
		return num;
		});

	cout << "Result: ";
	copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}