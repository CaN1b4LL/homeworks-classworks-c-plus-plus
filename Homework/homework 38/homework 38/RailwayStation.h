#pragma once
#include <vector>
#include <string>
#include "Train.h"
using namespace std;

class RailwayStation
{
private:
	vector<Train> trains;
public:
	RailwayStation() = default;
	RailwayStation(const RailwayStation& obj);
	RailwayStation& operator=(const RailwayStation& obj);
	RailwayStation(RailwayStation&& obj);
	RailwayStation& operator=(RailwayStation&& obj);
	~RailwayStation() = default;
	void addTrain(const Train& train);
	void addTrain(Train&& train);
	void printAllTrains()const;
	void findTrainByNumber(const string& num)const;
	void run();
};

