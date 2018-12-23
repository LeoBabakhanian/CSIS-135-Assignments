//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7
#include "stats.h"
#include <iostream>
#include <string>
using namespace std;

Stats::Stats()
{
	//INITIALIZE ARRAY
	rainFall[0] = 0;
	rainFall[1] = 0;
	rainFall[2] = 0;
	rainFall[3] = 0;
	rainFall[4] = 0;
	rainFall[5] = 0;
	rainFall[6] = 0;
	rainFall[7] = 0;
	rainFall[8] = 0;
	rainFall[9] = 0;
	rainFall[10] = 0;
	rainFall[11] = 0;
}

bool Stats::setValue(int month, double rain)
{
	bool test;

	if (month >= 0)
	{
		rainFall[month] = rain;
		test = true;
	}
	else
	{
		test = false;
	}
	return test;

}

void Stats::displayValues()
{
	for (int i = 0; i < 12; i++)
	{
		cout << rainFall[i];
	}
}

double Stats::calcTotal()
{
	double total = 0;

	for (int i = 0; i < 12; i++)
	{
		total += rainFall[i];
	}
	return total;
}

double Stats::calcAverage()
{
	double average;
	double tot = 0;

	for (int i = 0; i < 12; i++)
	{
		tot += rainFall[i];
	}
	average = tot / 12;
	return average;
}

double Stats::calcLargest()
{
	double largest = 0;

	for (int i = 0; i < 12; i++)
	{
		if (rainFall[i] > largest)
		{
			largest = rainFall[i];
		}
	}
	return largest;
}

double Stats::calcSmallest()
{
	double smallest = rainFall[0];

	for (int i = 1; i < 12; i++)
	{
		if (rainFall[i] < smallest)
		{
			smallest = rainFall[i];
		}
	}
	return smallest;
}