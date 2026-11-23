#pragma once
#include <iostream>
#include <string>
using namespace std;

class Train
{
private:
	string number;
	string departure_time;
	string destination;
public:
	Train();
	Train(const string num, const string time, const string dest);
	Train(const Train& obj);
	Train& operator=(const Train& obj);
	Train(Train&& obj);
	Train& operator=(Train&& obj);
	~Train() = default;
	const string& getNumber()const;
	const string& getDepartureTime()const;
	const string& getDestination()const;
	void print()const;
};

