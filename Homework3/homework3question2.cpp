//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 3 Question 2



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	char menuChoice;
	int numChoice = 0;
	int numChoiceCounter = 1;

	do {

		cout << "MENU" << endl;
		cout << "a) Generate Multiplication Table" << endl;
		cout << "q) Quit the program" << endl;
		cout << "Please make a selection: ";
		cin >> menuChoice;

		if (menuChoice == 'a' || menuChoice == 'q') {

			if (menuChoice == 'a') {

				cout << "Please enter a number for your multiplication table: " << endl
					<< endl;
				cin >> numChoice;

				while (numChoice <= 0 || numChoice >= 11) {

					cout << "Invalid Selection" << endl;
					cout << "Please enter a number for your multiplication table: " << endl
						<< endl;
					cin >> numChoice;

				}
				cout << "MULTIPLICATION TABLE: " << numChoice << "'s" << endl;
				cout << endl;

				for (int row = 1; row <= numChoice; row++)
				{

					if (row == 1) {

						for (int col = 1; col <= numChoice; col++)
						{
							cout << setw(5) << fixed << row * col;

						}

						cout << endl;
						cout << "   ";

						for (int col = 1; col <= numChoice; col++)
						{

							cout << "----|";
						}
						cout << endl;
					}
				}

				for (int row = 1; row <= numChoice; row++) {

					if (row == 1) {

						cout << setw(2) << fixed << numChoiceCounter << "|";

						for (int col = 1; col <= numChoice; col++)
						{

							cout << setw(4) << fixed << row * col << "|";

						}

						cout << endl;
						cout << " -|";

						for (int col = 1; col <= numChoice; col++)
						{
							cout << "----|";
						}
						cout << endl;
						numChoiceCounter++;
					}
					else if (row >= 2) {

						cout << setw(2) << fixed << numChoiceCounter << "|";

						for (int col = 1; col <= numChoice; col++)
						{

							cout << setw(4) << fixed << row * col << "|";
						}
						cout << endl;
						cout << " -|";
						for (int col = 1; col <= numChoice; col++)
						{
							cout << "----|";
						}
						cout << endl;
						numChoiceCounter++;
					}
				}
				numChoiceCounter = 1;
				cout << endl;
			}
			else if (menuChoice == 'q') {
				cout << "You have chosen to quit the program. Thank you for using!" << endl;
			}
		}
		else { //if any other letter is chosen

			cout << "Invalid Selection" << endl;
			cout << endl;
		}
	} while (menuChoice != 'q');

	//system("PAUSE");
	return 0;



}
