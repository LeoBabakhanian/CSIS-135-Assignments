//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}

Employee::Employee(string emp, string id)
{
	name = emp;
	idNumber = id;
	department = "";
	position = "";
	yearsWorked = 0;
}

Employee::Employee(string empName, string idWorker, string depart, string posit, int years)
{
	name = empName;
	idNumber = idWorker;
	department = depart;
	position = posit;
	yearsWorked = years;
}

void Employee::setName(string empName)
{
	name = empName;
}

void Employee::setIdNumber(string idWorker)
{
	idNumber = idWorker;
}

void Employee::setDepartment(string depart)
{
	department = depart;
}

void Employee::setPosition(string posit)
{
	position = posit;
}

bool Employee::setYearsWorked(int years)
{
	bool yearsAtJob;
	if (years > 0)
	{
		yearsWorked = years;
		yearsAtJob = true;
	}
	else
	{
		yearsAtJob = false;
	}
	return yearsAtJob;
}

string Employee::getName() const
{
	return name;
}

string Employee::getIdNumber() const
{
	return idNumber;
}

string Employee::getDepartment() const
{
	return department;
}

string Employee::getPosition() const
{
	return position;
}

int Employee::getYearsWorked() const
{
	return yearsWorked;
}
