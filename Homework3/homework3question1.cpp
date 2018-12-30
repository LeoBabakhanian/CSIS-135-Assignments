//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 3 Question 1

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() 
{

	int diceRolled;
	int diceSide;

	int counterOne = 0;
	int counterTwo = 0;
	int counterThree = 0;
	int counterFour = 0;
	int counterFive = 0;
	int counterSix = 0;

	srand((unsigned int)time(NULL));

	cout << "How many times would you like to roll the dice?" << endl;
	cin >> diceRolled;

	while (diceRolled <= 0)
	{
		cout << "This is an invalid number. " << endl;
		cout << "The number of rolls should be equal to or greater than 1." << endl;
		cout << "Please enter again." << endl;
		cin >> diceRolled;
	}

	cout << endl;
	cout << "DICE ROLL STATISTICS" << endl;
	cout << endl;
	cout << "# Rolled          # Times       % Times" << endl;
	cout << "--------          --------      --------" << endl;

	for (int i = 1; i <= diceRolled; i++) 
	{
		diceSide = rand() % 6 + 1;
		if (diceSide == 1)
			counterOne++;
		else if (diceSide == 2)
			counterTwo++;
		else if (diceSide == 3)
			counterThree++;
		else if (diceSide == 4)
			counterFour++;
		else if (diceSide == 5)
			counterFive++;
		else if (diceSide == 6)
			counterSix++;
	}

	cout << setw(7) << fixed << "1" << "          "
		<< setw(8) << fixed << counterOne << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterOne * (100 / diceRolled) << "%" << endl;

	cout << setw(7) << fixed << "2" << "          "
		<< setw(8) << fixed << counterTwo << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterTwo * (100 / diceRolled) << "%" << endl;

	cout << setw(7) << fixed << "3" << "          "
		<< setw(8) << fixed << counterThree << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterThree * (100 / diceRolled) << "%" << endl;

	cout << setw(7) << fixed << "4" << "          "
		<< setw(8) << fixed << counterFour << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterFour * (100 / diceRolled) << "%" << endl;

	cout << setw(7) << fixed << "5" << "          "
		<< setw(8) << fixed << counterFive << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterFive * (100 / diceRolled) << "%" << endl;

	cout << setw(7) << fixed << "6" << "          "
		<< setw(8) << fixed << counterSix << "      "
		<< setw(8) << fixed << setprecision(2) << (double)counterSix * (100 / diceRolled) << "%" << endl;


	//system("PAUSE");
	return 0;



}
