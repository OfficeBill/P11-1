// File Name:     P11-1
// Author:        William Inkrott
// Date:          11/21/24
// Description:   Reserve seats on a plane using a 2-dimensional array and the requested functions. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 13;

int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);
int letterFinder(char thisSeat);



int main(void)
{
	int thisRow, validRow = 0, validSeat = 0, alphaNumera = 0, column = 8;
	char thisSeat;
	char seats[8][13]{
		{'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', ' '},
		{'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '1', '1', '1'},
		{'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'},
		{'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'},
	};
	while (1 == 1)
	{
		//beginning of loop
		displaySeatColumn(seats, column);
		cout << "Enter a seat or Q to quit: ";
		cin >> thisRow;
		cin >> thisSeat;
		validRow = findRowIndex(thisRow);
		if (validRow == 0)
		{
			validSeat = findSeatIndex(thisSeat);
			if (validSeat == 0)
			{
				// within proper range
				alphaNumera = letterFinder(thisSeat);
				alphaNumera = alphaNumera - 1;
				thisRow = thisRow - 1;
				if (seats[alphaNumera][thisRow] == 'X')
				{
					cout << endl;
					cout << "Seat already assigned." << endl;
					cout << endl;
				}
				else if (thisRow == 12 && (alphaNumera == 0 or alphaNumera == 1))
				{
					//seat 13 DNE in rows D and C
					cout << "Sorry, no such seat exists on the CRJ 200." << endl;
					validRow = 0;
					validSeat = 0;
				}
				else
				{
					seats[alphaNumera][thisRow] = 'X';
				}
			}
			else
			{
				cout << "Sorry, no such seat exists on the CRJ 200." << endl;
			}
		}
		else if (validRow == 1)
		{
			//row is out of range
			cout << "Sorry, no such seat exists on the CRJ 200." << endl;
			validRow = 0;
			validSeat = 0;
		}
		else
		{
			//row is within range, column is not
			cout << "Sorry, no such seat exists on the CRJ 200." << endl;
			validRow = 0;
			validSeat = 0;
		}
	}
}

int findRowIndex(int thisRow)
{
	if (thisRow > 0 and thisRow < 14)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int findSeatIndex(char thisSeat)
{
	if (thisSeat == 'A' or thisSeat == 'B' or thisSeat == 'C' or thisSeat == 'D')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void displaySeatColumn(char seats[][ROWS], int column)
{
	cout << endl;
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << seats[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int letterFinder(char thisSeat)
{
	if (thisSeat == 'A')
	{
		return 8;
	}
	if (thisSeat == 'B')
	{
		return 7;
	}
	if (thisSeat == 'C')
	{
		return 2;
	}
	if (thisSeat == 'D')
	{
		return 1;
	}
}