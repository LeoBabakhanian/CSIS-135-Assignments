//Leo Babakhanian
//CS/IS 135- Fall Class
//Homework 4

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int getComputerChoice();
int getPlayerChoice();
bool isTie(int,int);
bool isPlayerWinner(int, int);

int main()
{
	char menuChoice;
	
	int playerChoice;
	int computerChoice;
	
	string playerInput;
	string computerInput;

	bool tie;
	bool win;

	do
	{
		cout << endl;
		cout << "ROCK PAPER SCISSORS MENU" << endl;
		cout << "------------------------" << endl;
		cout << "p) Play Game" << endl;
		cout << "q) Quit" << endl;
		cout << "Please enter your choice : " << endl;
		cin >> menuChoice;

		if (menuChoice == 'p')
		{
			playerChoice = getPlayerChoice();
			computerChoice = getComputerChoice();

			if (playerChoice == 1) 
			{
				playerInput = "Rock";
			}
			else if (playerChoice == 2) 
			{
				playerInput = "Paper";
			}
			else if (playerChoice == 3) 
			{
				playerInput = "Scissors";
			}

			if (computerChoice == 1) 
			{
				computerInput = "Rock";
			}
			else if (computerChoice == 2) 
			{
				computerInput = "Paper";
			}
			else if (computerChoice == 3) 
			{
				computerInput = "Scissors";
			}

			cout << "You chose : " << playerInput << endl;
			cout << "The computer chose : " << computerInput << endl;
			cout << endl;

			tie = isTie(computerChoice, playerChoice);
			win = isPlayerWinner(computerChoice, playerChoice);

			if (tie == true)
			{
				cout << "You TIED!" << endl;
				cout << endl;
			}
			else if (win == true)
			{
				cout << "You WIN!" << endl;
				cout << endl;
			}
			else if (win == false)
			{
				cout << "Sorry you LOSE." << endl;
				cout << endl;
			}
		}
		else if (menuChoice == 'q')
		{
			cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
		}
		else
		{
			cout << "Invalid selection. Try again." << endl;
			cout << endl;
		}
	} 
	while (menuChoice != 'q');
	
	//system("PAUSE");
	return 0;
}

int getComputerChoice()
{
	int computerChoice;

	srand((unsigned int)time(NULL));
	computerChoice = rand() % 3 + 1;

	return computerChoice;
}

int getPlayerChoice()
{
	int playerChoice;

	cout << endl;
	cout << endl;
	cout << "Rock, Paper, or Scissors?" << endl;
	cout << "1) Rock" << endl;
	cout << "2) Paper" << endl;
	cout << "3) Scissors" << endl;
	cout << "Please enter your choice : " << endl;
	cout << endl;
	cin >> playerChoice; 

	return playerChoice;
}

bool isTie(int computer, int player)
{
	if (computer == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPlayerWinner(int computer, int player)
{
	if (computer == 1 && player == 2)
	{
		return true;
	}
	else if (computer == 2 && player == 3)
	{
		return true;
	}
	else if (computer == 3 && player == 1)
	{
		return true;
	}
	else if (computer == 2 && player == 1)
	{
		return false;
	}
	else if (computer == 3 && player == 2)
	{
		return false;
	}
	else if (computer == 1 && player == 3)
	{
		return false;
	}
}
