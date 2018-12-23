//Leo Babakhanian
//CS/IS- 135 Fall 2017
//Homework #1 Project #5

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int apples;
	int oranges;
	int bananas;

	double appleCost;
	double orangeCost;
	double bananaCost;
	double total;

	cout << fixed << setprecision(2);
	cout << "Please enter the number of apples you want to purchase: \n";
	cin >> apples;
	cout << "Please enter the number of oranges you want to purchase: \n";
	cin >> oranges;
	cout << "Please enter the number of bananas you want to purchase: \n";
	cin >> bananas;
	cout << "\n";
	cout << "BOB'S FRUITS GROCERY INVOICE\n";
	cout << "----------------------------\n";
	appleCost = apples * 0.65;
	cout << "  " << apples << " Apples  @ 0.65 each   = $ " << appleCost << "\n";
	orangeCost = oranges * 0.90;
	cout << "  " << oranges << " Oranges @ 0.90 each   = $ " << orangeCost << "\n";
	bananaCost = bananas * 0.70;
	cout << "  " << bananas << " Bananas @ 0.70 each   = $ " << bananaCost << "\n";
	cout << "			-----------\n";
	total = appleCost + orangeCost + bananaCost;
	cout << "		    TOTAL = $ " << total << "\n";

	//system("PAUSE");
	return 0;
}