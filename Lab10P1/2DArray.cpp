/***********************
Name: Roober Cruz
Date: 10/16/18
Program Name: The pound program
Description of program: This program lets the user input a number for a row and column in order to place a # symbol in the grid.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

const int sz = 20;

int main()
{
    char chc = 'y';
    char board[sz][sz];
    char user = '#';
    int x, y;

    for(int row = 0; row < sz; row++)
    {
        for(int col = 0; col < sz; col++)
        {
            board[row][col] = '.';
            cout << board[row][col];
        }
        cout << endl;
    }
    while(chc == 'y' || chc == 'Y'){
        cout << "Enter a row and column: "; cin >> x >> y;
        while(board[x][y] != '.')
        {
            cout << "Spot taken: Try again" << endl;
            cout << "Enter a row and column: "; cin >> x >> y;
        }
        board[x][y] = user;
        for(int row = 0; row < sz; row++)
        {
            for(int col = 0; col < sz; col++)
            {
                cout << board[row][col];
            }
            cout << endl;
        }
    cout << "Try again? "; cin >> chc;
    }
	return 0;
}
