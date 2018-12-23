//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#include <iostream>
#include <iomanip>
#include "Employee.h"
using namespace std;

int main()
{
	Employee employ1("Jenny Jacobs", "JJ8990", "Accounting", "President", 15);
	Employee employ2("Myron Smith", "MS7571", "IT", "Programmer", 5);
	Employee employ3("Chris Raines", "CR6873", "Manufacturing", "Engineer", 30);
	Employee arr[] = {employ1, employ2, employ3};

	cout << "Name          ID Number        Department         Position       Years Worked" <<endl;

	for (int counter = 0; counter<3; counter++)
	{

		cout << arr[counter].getName() << "   " << arr[counter].getIdNumber() << "   " << arr[counter].getDepartment() <<
			"    " << arr[counter].getPosition() << "   " << arr[counter].getYearsWorked() << endl;
	}

	system("PAUSE");
	return 0;
}
