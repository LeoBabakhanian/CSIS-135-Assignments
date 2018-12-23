//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#include "stats.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void rainReport(Stats);

int main()

{	
	Stats rainData;      
		
	double rain;   
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", 
						  "September", "October", "November", "December" };
	//Set up array
	for (int month = 0; month < 12; month++)
	//Make a for loop
	{	
			cout << "Enter the rainfall (in inches) for " << months[month] << ": ";
			cin >> rain;
			while (rain < 0)				
			{  

			cout << "Rainfall must be 0 or more.  Please re-enter: ";			
			cin >> rain;	

			}		
			//call raindata function
			rainData.setValue(month, rain);			
	}
	
		rainReport(rainData);

		system("PAUSE");
		return 0;	
}

//void function
void rainReport(Stats rainData)
{
	double rainfall[12];

	cout << fixed << setprecision(2) << endl;
	cout << "Total rainfall for the year was ";
	cout << rainData.calcTotal() << " inches." << endl;
	cout << "Average rainfall for the year was ";
	cout << rainData.calcAverage() << " inches." << endl << endl;
	cout << "The largest amount of rainfall was ";
	cout << rainData.calcLargest() << " inches." << endl;
	cout << "The smallest amount of rainfall was ";
	cout << rainData.calcSmallest() << " inches." << endl;
}
