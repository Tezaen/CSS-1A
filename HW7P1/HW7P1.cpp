/***********************
Name: Roober Cruz
Date: 10/20/2018
Program Name: Airplane Seating Program
Description of program: This program allows people to book seats on an airplane with 5 rows and 6 columns.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

//const int 5 = 5;
//rconst int 6 = 6;

int main()
{
    char seating[5][6];
    int y = 0; //Row
    int x = 0; //Col
    char letter = ' '; // This letter initializes the seat positions.
    char let = ' '; // Choice for a seat
    char choice = 'c'; // This let's the user quit or continue booking seats
    int rownum = 1; // Row number

    for(int row = 0; row < 5; row++)
    {
        letter = 'A';
        cout << rownum;
        rownum++;
        for(int col = 0; col < 6; col++)
        {
            seating[row][col] = letter;
            letter++;
            cout << seating[row][col];
        }
        cout << endl;
    }
    cout << "Would you like to get a seat? Press C. TO quit, press Q: "; cin >> choice;
    while(toupper(choice) == 'C')
    {
        cout << "Enter a row. Ex: 1,2,3... ";cin >> x;

        if(x <= 0 || x > 5){
            cout << "Try again: "; cin >> x;
        }

        cout << "Enter a Letter for a seat: "; cin >> let;


        if(toupper(let) == 'A'){
            y = 0;
        }
        else if(toupper(let) == 'B'){
            y = 1;
        }
        else if(toupper(let) == 'C'){
            y = 2;
        }
        else if(toupper(let) == 'D'){
            y = 3;
        }
        else if(toupper(let) == 'E'){
            y = 4;
        }
        else if(toupper(let) == 'F'){
            y = 5;
        }
        else{
            cout << "Wrong Input: " << endl;
            cin >> let;
        }

        while(seating[x][y] == 'X')
        {
            cout << "Try again? Row:" << endl;
            cin >> x;
            cout <<" and letter: " << endl;
            cin >> let;
        }

        seating[x - 1][y] = 'X';

        rownum = 1;
        for(int row = 0; row < 5; row++)
        {
            cout << rownum;
            rownum++;
            for(int col = 0; col < 6; col++)
            {
                cout << seating[row][col];
            }
            cout << endl;
        }
        cout << "Seat again? Press C to continue to seat and press Q to quit. "; cin >> choice;
    }
    if(toupper(choice) != 'C')
    {
        cout << "Thank you for using this program! " << endl;
    }

	return 0;
}
