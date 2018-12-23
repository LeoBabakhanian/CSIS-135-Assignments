//Leo Babakhanian
//CS/IS 135- Fall Class
//Homework #5

#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countWords(string);
int countConsonants(string);

int main()
{
	string userInput;
	string temp = "";
	char selection;

	int consonants;
	int words;

	cout << "Please enter a word, a sentence, or a string of numbers." << endl;
	getline(cin, userInput);
	cout << endl;

	do
	{
		cout << "USE THIS MENU TO MANIPULATE YOUR STRING" << endl;
		cout << "---------------------------------------" << endl;
		cout << "1) Inverse String" << endl;
		cout << "2) Reverse String" << endl;
		cout << "3) To Uppercase" << endl;
		cout << "4) Count Number Words" << endl;
		cout << "5) Count Consonants" << endl;
		cout << "6) Enter a Different String" << endl;
		cout << "7) Print the string" << endl;
		cout << "Q) Quit" << endl;
		cin >> selection;

		if (selection == '1')
		{
			
			cout << endl;

			for (int i = 0; i < userInput.length(); i++)
			{
				if (isupper(userInput[i]))
				{
					userInput[i] = tolower(userInput[i]);
				}
				else if (islower(userInput[i]))
				{
					userInput[i] = toupper(userInput[i]);
				}
			}
		}
		else if (selection == '2')
		{
			cout << endl;

			for (int i = userInput.length() - 1; i >= 0; i--)
			{

				temp += userInput[i];
			}

			userInput = temp;
		}
		else if (selection == '3')
		{
			for (int i = 0; i < userInput.length(); i++)
			{
				if (islower(userInput[i]))
				{
					userInput[i] = toupper(userInput[i]);
				}
			}
		}
		else if (selection == '4')
		{
			cout << endl;
			words = countWords(userInput);
			cout << "The string " << '"' << userInput << '"' << " has " << words << " word(s)" << endl;
			cout << endl;
		}
		else if (selection == '5')
		{
			cout << endl;
			consonants = countConsonants(userInput);
			cout << "The number of consonants in the string is " << consonants << "." << endl;
			cout << endl;
		}
		else if (selection == '6')
		{
			cout << endl;
			cin.ignore();
			cout << "Enter a different string : " << endl;
			getline(cin, userInput);
			cout << endl;
		}
		else if (selection == '7')
		{
			cout << endl;

			cout << "The current string is: ";

			for (int i = 0; i < userInput.length(); i++)
			{
				cout << userInput[i];
			}

			cout << endl;
			cout << endl;
		}
		else if (selection == 'q' && selection == 'Q')
		{
			cout << endl;
			cout << "You have chosen to quit the program. Thank you!" << endl;
		}
		else
		{
			cout << endl;
			cout << "Invalid selection. Please try again." << endl;
			cout << endl;
		}

	} 
	while (selection != 'q' && selection != 'Q');


	//system("PAUSE");
	return 0;
}

int countWords(string input) {

	int counter = 0;

	for (int i = 0; i < input.length(); i++) {

		if (isspace(input[i])) {

			if (isspace(input[i + 1])) {
				i++;
			}

			if (isalpha(input[i + 1]) || isalpha(input[i - 1])) {
				counter++;
			}

		}

	}

	if (isalpha(input[input.length() - 1]) || ispunct(input[input.length() - 1])) {
		counter++;
	}

	return counter;
}

int countConsonants(string input) {

	int counter = 0;

	for (int i = 0; i < input.length(); i++) {

		if (input[i] == 'a' || input[i] == 'A') {

		}
		else if (input[i] == 'e' || input[i] == 'E') {

		}
		else if (input[i] == 'i' || input[i] == 'I') {

		}
		else if (input[i] == 'o' || input[i] == 'O') {

		}
		else if (input[i] == 'u' || input[i] == 'U') {

		}
		else if (isspace(input[i]) || ispunct(input[i])) {

		}
		else {
			counter++;
		}

	}

	return counter;
}