//Leo Babakhanian
//CS/IS 135- Fall Semester
//Homework 6 Part 2

#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
using namespace std;

const int maxRows = 15;
const int maxCol = 20;
void seatChartDisplay(bool[maxRows][maxCol]);
void getPrices(double[], int);

int main()
{
	char selection;
	int row;
	int column;
	int ticketsSold = 0;
	double revenue = 0;
	bool seatChart[maxRows][maxCol];
	double rowPrices[maxRows];

	for (int row = 0; row<maxRows; row++)
	{
		for (int col = 0; col<maxCol; col++)
		{
			seatChart[row][col] = false;
		}

		rowPrices[row] = 0.00;
	}

	seatChartDisplay(seatChart);
	getPrices(rowPrices, maxRows);

	do
	{
		cout << "MOVIE THEATER MENU\n------------------" << endl;
		cout << "1) Sell a ticket\nQ) Quit program" << endl;
		cout << "Please make a selection : ";
		cin >> selection;

		if (selection != '1' && selection != 'Q' && selection != 'q')
		{
			cout << "Invalid selection. Please try again.\n\n";
		}

		if (selection == '1')
		{
			cout << endl;
			cout << "Please enter a row number and seat number for the ticket:" << endl;
			cout << "Row # : ";
			cin >> row;

			while (row < 0 || row > 14)
			{
				cout << "Row # must be between 0 and 14. Please enter again: " << endl;
				cin >> row;
			}

			cout << "Seat # : ";
			cin >> column;

			while (column < 0 || column > 19)
			{
				cout << "Seat # must be between 0 and 19. Please enter again: " << endl;
				cin >> column;
			}

			cout << endl;

			if (seatChart[row][column] == false)
			{
				ticketsSold++;
				revenue = revenue + rowPrices[row];
				seatChart[row][column] = true;
			}
			else
			{
				cout << "Sorry. The ticket is not available for this seat.\n" << endl;
			}
		}
	} while (selection != 'q' && selection != 'Q');

	cout << endl;
	cout << "UPDATED SEATING CHART AND SALES INFO" << endl;
	cout << "------------------------------------" << endl;

	seatChartDisplay(seatChart);

	cout << endl;
	cout << "TOTAL TICKETS SOLD: " << ticketsSold << endl;
	cout << "TOTAL REVENUE: $" << fixed << setprecision(2) << revenue << endl;

	//system("PAUSE");
	return 0;
}

void seatChartDisplay(bool seats[maxRows][maxCol])

{

	cout << "Seats:  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19" << endl;

	for (int row = 0; row < maxRows; row++)

	{
		cout << "Row " << row;

		if (row<10)
		{
			cout << " ";
		}

		for (int col = 0; col < maxCol; col++)
		{

			if (!seats[row][col])
			{
				cout << setw(3) << "*";
			}

			else
			{
				cout << setw(3) << "#";
			}
		}
		cout << endl;
	}
}

void getPrices(double prices[], int rows)
{
	cout << "\nPlease enter a ticket price for each row." << endl;

	for (int row = 0; row < maxRows; row++)
	{
		prices[row] = -1;
		while (prices[row]<0)
		{
			cout << "Row #" << row << " : ";
			cin >> prices[row];
			if (prices[row]<0)
			{
				cout << "Invalid Price. Try again." << endl;
			}
		}
	}
	cout << endl;
}
