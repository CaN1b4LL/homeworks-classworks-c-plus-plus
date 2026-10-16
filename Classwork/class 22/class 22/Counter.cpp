#include "Counter.h"

Counter::Counter() = default;

Counter::Counter(int min_val, int max_val)
{
	if (min_val < max_val)
	{
		min = min_val;
		max = max_val;
		cur = min_val;
	}
}

int Counter::getMin()const
{
	return min;
}

int Counter::getMax()const
{
	return max;
}

int Counter::getCur()const
{
	return cur;
}

void Counter::setMin(int val)
{
	if (val < max)
	{
		min = val;
		cur = min;
	}
}

void Counter::setMax(int val)
{
	if (val > min)
	{
		max = val;
		cur = min;
	}
}

void Counter::increase()
{
	cur++;
	if (cur == max)
		cur = min;
}
