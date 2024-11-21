// File Name:     Tic Tac D'oh
// Author:        William Inkrott
// Date:          11/21/24
// Description:   Reserve seats on a plane using a 2-dimensional array and the requested functions. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main(void)
{
	int thisRow;
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
	cout << "Enter a seat or Q to quit: ";
	cin >>
}

int findRowIndex(int thisRow)
{

}

int findSeatIndex(char thisSeat)
{

}

void displaySeatColumn(char seats[][ROWS], int column)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			cout << seats[i][j] << " ";
		}
		cout << endl;
	}
}