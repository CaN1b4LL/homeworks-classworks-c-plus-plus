#pragma once
class Counter
{
	int min = 0;
	int max = 100;
	int cur = 0;

public:
	Counter();
	Counter(int min_val, int max_val);
	int getMin()const;
	int getMax()const;
	int getCur()const;
	void setMin(int val);
	void setMax(int val);
	void increase();

};