//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#ifndef STATS_H
#define STATS_H
#include <string>
using namespace std;

class Stats
{
private:
	double rainFall[12];
public:
	Stats();
	bool setValue(int, double);
	void displayValues();
	double calcTotal();
	double calcAverage();
	double calcLargest();
	double calcSmallest();
};

#endif