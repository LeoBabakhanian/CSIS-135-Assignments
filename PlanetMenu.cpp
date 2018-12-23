//Leo Babakhanian
//CS/IS 135
//Homework #2

//PSEUDOCODE
//Create all required variables and initialize them
//Create if else statements for their respective outcomes
//Apply the equations to each if else statement for each planet
//Create an option inside of the if else statements to exit the program
//Create a final print output after the user chooses an option in the menu

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {

	const double SUN_TO_EARTH = 93;

	char planetChoice;
	string planetName;

	double userWeight;
	double travelSpeed;

	double surfGrav;
	double distSun;
	double distBetweenPlanets;
	double travelInHours;
	double travelInDays;
	double travelInYears;


	cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl;
	cout << "This program enables you to find out your travel time to the planet" << endl;
	cout << "you want to travel to as well as your weight on that planet." << endl;
	cout << "Please enjoy the program and find the perfect planet for you!" << endl;
	cout << endl
		 << endl;
	cout << "INTERPLANETARY TRAVEL MENU" << endl;
	cout << "--------------------------" << endl;
	cout << "a) Mercury" << endl;
	cout << "b) Venus" << endl;
	cout << "c) Earth" << endl;
	cout << "d) Mars" << endl;
	cout << "e) Jupiter" << endl;
	cout << "f) Saturn" << endl;
	cout << "g) Uranus" << endl;
	cout << "h) Neptune" << endl;
	cout << "q) quit" << endl;
	cout << endl;
	cout << "Select a planet to travel to or q to quit the program: " << endl;
	cin >> planetChoice;


	if (planetChoice >= 'a' && planetChoice <= 'h')
	{
		cout << "Please enter your weight (in lbs): " << endl;
		cin >> userWeight;
		cout << "Please enter the speed (in mile per hour) that you would like to travel at: " << endl;
		cin >> travelSpeed;
		cout << endl;

		if (planetChoice == 'a') 
		{
			planetName = "Mercury";
			surfGrav = 0.27;
			distSun = 36;
		}
		else if (planetChoice == 'b')
		{
			planetName = "Venus";
			surfGrav = 0.86;
			distSun = 67;
		}
		else if (planetChoice == 'c')
		{
			planetName = "Earth";
			surfGrav = 1.00;
			distSun = 93;
		}
		else if (planetChoice == 'd')
		{
			planetName = "Mars";
			surfGrav = 0.37;
			distSun = 141;
		}
		else if (planetChoice == 'e') 
		{
			planetName = "Jupiter";
			surfGrav = 2.64;
			distSun = 483;
		}
		else if (planetChoice == 'f') 
		{
			planetName = "Saturn";
			surfGrav = 1.17;
			distSun = 886;
		}
		else if (planetChoice == 'g') 
		{
			planetName = "Uranus";
			surfGrav = 0.92;
			distSun = 1782;
		}
		else if (planetChoice == 'h') 
		{
			planetName = "Neptune";
			surfGrav = 1.44;
			distSun = 2793;
		}
		userWeight *= surfGrav;
		distBetweenPlanets = abs((SUN_TO_EARTH * 1000000) - (distSun * 1000000));

		travelInHours = distBetweenPlanets / travelSpeed;
		travelInDays = travelInHours / 24;
		travelInYears = travelInDays / 365;

		distBetweenPlanets = (SUN_TO_EARTH - distSun) * 1000000;
		distBetweenPlanets = abs(distBetweenPlanets);

		cout << "INTERPLANETARY TRAVEL:  Earth to " << planetName << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Your weight on " << planetName << ":      " << fixed << setprecision(2) << userWeight << " lbs" << endl;
		cout << endl;
		cout << "Your travel time to " << planetName << ":" << endl;
		cout << "    In Hours: " << fixed << setprecision(0) << travelInHours << " hours" << endl;
		cout << "    In Days : " << fixed << setprecision(0) << travelInDays << " days" << endl;
		cout << "    In Years : " << fixed << setprecision(2) << travelInYears << " years" << endl;
		cout << endl;
	}
	else if (planetChoice == 'q') 
	{
		cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
	}
	else 
	{
		cout << "You have entered an invalid selection." << endl;
	}

	//system("PAUSE");
	return 0;
}