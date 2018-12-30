
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

void getPicks(/*int*/);
int GenWinNums();
//int NoDuplicates(int[], int);
bool isADuplicate(int[], int, int);
int matchingNums(int[], int[]);

const int ARRAYSIZE = 7;

int mainoooooo() {

	char menuSelect;
	string userName;
	int userPicks[ARRAYSIZE];
	int compPicks[ARRAYSIZE];
	int counter = 0;
	//global const int ARRAYSIZE = 7;

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

			getLottoPicks();
			GenWinNums();
			for (int i = 0; i < ARRAYSIZE; i++) {//put a do while in getllottopcisk that stops after 7 nums were inputed and then do this

				userPicks[i] = getPicks();
				compPicks[i] = GenWinNums();
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

void getPicks(/*int count*/) { // what if we make this a setlottopicks and then pass the array into a getLottoPicks and then pass them to main that way

									//const int ARRAYSIZE = 7;
	int userTicket[ARRAYSIZE];

	//could use a for loop here to input the data, think about it later
	/*cout << "selection #1: ";
	cin >> selections[0];

	cout << "selection #2: ";
	cin >> selections[1];

	cout << "selection #3: ";
	cin >> selections[2];

	cout << "selection #4: ";
	cin >> selections[3];

	cout << "selection #5: ";
	cin >> selections[4];

	cout << "selection #6: ";
	cin >> selections[5];

	cout << "selection #7: ";
	cin >> selections[6];*/
	bool truefalse;
	//int counter = 0;//maybe we declare the counter in main and pass it into this func so that it doesnt reset to 0 every time, which is just an assumption

	//do {

	for (int i = 0; i < ARRAYSIZE; i++) {

		//if (i >= 2)
		//NoDuplicates(userTicket);

		cout << "selection #" << i + 1 << ": ";
		cin >> userTicket[i];
		if (i >= 1)
			truefalse = isADuplicate(userTicket, ARRAYSIZE, userTicket[i]);

		if (truefalse == true) {

			while (truefalse == true) {


				cout << "You got dupes";
				cout << "You already picked this number. Please enter a different number:";
				cin >> userTicket[i];
				truefalse = isADuplicate(userTicket, ARRAYSIZE, userTicket[i]);

			}
			//truefalse = false;

		}
		else if (truefalse == false) {
			//do nothing ?
		}

		if (userTicket[i] <= 0 || userTicket[i] >= 41) {

			cout << "The number must be between 1 and 40. Please try again:";
			cin >> userTicket[i];

		}

	}
	//count++;
	//} while (count < 7);//that wont work cause itll never be 0; maybe i can do it so that a counter checks
	//string printArray;
	///for (int i = 0; i < ARRAYSIZE; i++) {

	//cout << userTicket[i];
	//cout << "  ";
	//printArray += (char)userTicket[i];
	//printArray += "  ";
	//return  userTicket[i];

	//}
	//cout << printArray;  // come back to this in a sec
	//cout << endl;
	//GenWinNums();

	//matchingNums(userTicket, GenWinNums()); // will put this over in main
	getPicks(userTicket);


	//return ARRAYSIZE;//placeholder
	//might have to return a string of the printed array


}

int getPicks(int userpiced[]) {

	for (int i = 0; i < ARRAYSIZE; i++) {

		return  userpiced[i];

	}


}

int GenWinNums() {

	bool truefalse2;

	int WinningNums[ARRAYSIZE];

	srand((unsigned int)time(NULL));
	//int counter = 0;



	for (int i = 0; i < ARRAYSIZE; i++) {

		WinningNums[i] = rand() % 40 + 1;

		if (i >= 1)
			truefalse2 = isADuplicate(WinningNums, ARRAYSIZE, WinningNums[i]);

		if (truefalse2 == true) {
			//cout << "You got dupes";
			//cout << "You already picked this number. Please enter a different number:";
			//cin >> WinningNums[i];
			WinningNums[i] = rand() % 40 + 1;

			while (truefalse2 == true) {


				//cout << "You got dupes";
				//cout << "You already picked this number. Please enter a different number:";
				cin >> WinningNums[i];
				truefalse2 = isADuplicate(WinningNums, ARRAYSIZE, WinningNums[i]);

			}
		}
		else if (truefalse2 == false) {
			//do nothing ?
		}

		//if (WinningNums[i] <= 0 || WinningNums[i] >= 41) {//we might have to do a while loops instead so that it changes it keeps testing that it isnt a dupe

		//cout << "The number must be between 1 and 40. Please try again:";
		//cin >> WinningNums[i];

		//}

	}


	for (int i = 0; i < ARRAYSIZE; i++) {

		//cout << WinningNums[i];
		//cout << "  ";
		return  WinningNums[i];
	}
	//cout << endl;

	//return 0;
} // or we can have a for loop in main that accepts return statements from here that are in a for loop returning each part of the array and putting it in the other array over there.




  /*int NoDuplicates(int nums[], int i) {

  //if (nums[0] == nums[1]) {
  //
  //	cout << "You got dupes";

  //}
  int replacement = 0;

  if (nums[i] == nums[0] || nums[i] == nums[1] || nums[i] == nums[2] || nums[i] == nums[3] || nums[i] == nums[4] || nums[i] == nums[5] || nums[i] == nums[6]) {

  cout << "You got dupes";
  cout << "You already picked this number. Please enter a different number:";
  cin >> replacement;

  return replacement;

  }

  return replacement; // might need to return something else if duplicate doesnt happen
  }*/

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
