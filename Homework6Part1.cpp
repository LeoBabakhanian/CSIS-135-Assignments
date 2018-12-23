
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int getLottoPicks();
int GenWinNums();

bool isADuplicate(int[], int, int);
int matchingNums(int[], int[]);

const int ARRAYSIZE = 7;

int main() {

	char menuSelect;
	string userName;
	int userPicks[ARRAYSIZE];
	int compPicks[ARRAYSIZE];
	//int counter = 0;

	bool truefalse2;

	do {

		cout << "LITTLETON CITY LOTTO MODEL:" << endl;
		cout << "---------------------------" << endl;
		cout << "1) Play Lotto" << endl;
		cout << "q) Quit Program" << endl;
		cout << "Please make a selection: ";
		cin >> menuSelect;

		if (menuSelect == '1') {

			cout << "Please enter your name: ";
			getline(cin, userName);
			cout << "Please enter your 7 lotto number picks between 1 and 40." << endl;

			//getLottoPicks();
			//GenWinNums();
			for (int i = 0; i < ARRAYSIZE; i++) {

				userPicks[i] = getLottoPicks();

			}

			for (int i = 0; i < ARRAYSIZE; i++) {

				compPicks[i] = GenWinNums();

				if (i >= 1)
					truefalse2 = isADuplicate(compPicks, ARRAYSIZE, compPicks[i]);

				if (truefalse2 == true) {

					compPicks[i] = GenWinNums();


					while (truefalse2 == true) {

						compPicks[i] = GenWinNums();

						truefalse2 = isADuplicate(compPicks, ARRAYSIZE, compPicks[i]);

					}
				}
				else if (truefalse2 == false) {
					//do nothing 
				}

			}

			for (int i = 0; i < ARRAYSIZE; i++) { // jsut for test purposes

				cout << compPicks[i];
				cout << "  ";

			}
			cout << endl;
			for (int i = 0; i < ARRAYSIZE; i++) { // jsut for test purposes

				cout << userPicks[i];
				cout << "  ";

			}
			cout << endl;

		}
		else if (menuSelect == 'q' || menuSelect == 'Q') {

			cout << "You have chosen to quit the program. Thank you for using!" << endl;

		}
		else {

			cout << "Invalid selection. Please try again." << endl;

		}

	} while (menuSelect != 'q' && menuSelect != 'Q');

	system("PAUSE");
	return 0;

}

int getLottoPicks(/*int count*/) { // what if we make this a setlottopicks and then pass the array into a getLottoPicks and then pass them to main that way


	int userTicket[ARRAYSIZE];


	bool truefalse;
	//int counter = 0;//maybe we declare the counter in main and pass it into this func so that it doesnt reset to 0 every time, which is just an assumption

	//do {

	for (int i = 0; i < ARRAYSIZE; i++) {



		cout << "selection #" << i + 1 << ": ";
		cin >> userTicket[i];
		return userTicket[i];
		if (i >= 1)
			truefalse = isADuplicate(userTicket, ARRAYSIZE, userTicket[i]);

		if (truefalse == true) {

			while (truefalse == true) {


				cout << "You got dupes";
				cout << "You already picked this number. Please enter a different number:";
				cin >> userTicket[i];
				return userTicket[i];
				truefalse = isADuplicate(userTicket, ARRAYSIZE, userTicket[i]);

			}


		}
		else if (truefalse == false) {
			//do nothing 
		}

		if (userTicket[i] <= 0 || userTicket[i] >= 41) {

			cout << "The number must be between 1 and 40. Please try again:";
			cin >> userTicket[i];
			return userTicket[i];

		}

	}


}



int GenWinNums() {

	bool truefalse2;

	int WinningNums[ARRAYSIZE];
	int winningNumbers;

	srand((unsigned int)time(NULL));
	//int counter = 0;
	winningNumbers = rand() % 40 + 1;
	return winningNumbers;
	/*

	//for (int i = 0; i < ARRAYSIZE; i++) {

	//WinningNums[i] = rand() % 40 + 1;
	winningNumbers = rand() % 40 + 1;
	//return  WinningNums[i];
	return winningNumbers;

	if (i >= 1)
	truefalse2 = isADuplicate(WinningNums, ARRAYSIZE, WinningNums[i]);

	if (truefalse2 == true) {

	WinningNums[i] = rand() % 40 + 1;
	return  WinningNums[i];
	winningNumbers = rand() % 40 + 1;
	return winningNumbers;

	while (truefalse2 == true) {

	WinningNums[i] = rand() % 40 + 1;
	//cin >> WinningNums[i];
	return  WinningNums[i];
	truefalse2 = isADuplicate(WinningNums, ARRAYSIZE, WinningNums[i]);

	}
	}
	else if (truefalse2 == false) {
	//do nothing
	}*/

	//if (WinningNums[i] <= 0 || WinningNums[i] >= 41) {//we might have to do a while loops instead so that it changes it keeps testing that it isnt a dupe

	//cout << "The number must be between 1 and 40. Please try again:";
	//cin >> WinningNums[i];

	//}

	//}


	/*for (int i = 0; i < ARRAYSIZE; i++) {


	return  WinningNums[i];
	}*/
	//cout << endl;

	//return 0;
} // or we can have a for loop in main that accepts return statements from here that are in a for loop returning each part of the array and putting it in the other array over there.






bool isADuplicate(int arr[], int size, int numToCheck) {//we dont need size since its a global var

	for (int i = 0; i < size; i++)

	{

		if (arr[i] == numToCheck)

		{

			return true;

		}

		return false;

	}

}//we can call winNUms into getlottonums and then compare it there or something or have another func to compare

int matchingNums(int userNums[], int winNums[]) {

	int counter = 0;

	for (int i = 0; i < ARRAYSIZE; i++) {

		if (userNums[i] == winNums[0] || userNums[i] == winNums[1] || userNums[i] == winNums[2] || userNums[i] == winNums[3] || userNums[i] == winNums[4] || userNums[i] == winNums[5] || userNums[i] == winNums[6]) {

			counter++;

		}

	}

	return counter;
}