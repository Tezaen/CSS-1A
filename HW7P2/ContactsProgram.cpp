/***********************
Name: Roober Cruz
Date: 10/23/2018
Program Name: Contact Program
Description of program: This program allows you to add contacts, find stored contacts, display all stored contacts, and quit the program.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

const int rsz = 20;
const int csz = 3;

int main()
{
    char choice = '+';
    int column = 0;
    int rows = 0;
    string contacts[rsz][csz];
    string firstN = " ";
    string lastN = " ";
    string number = " ";
    while(toupper(choice) != 'Q')
    {
    cout << "Hello. Enter + to add contacts. Enter F to find contacts by last name. Enter D to display contacts. Enter Q to quit the program. " << endl;
    cin >> choice;

    switch(toupper(choice))
    {
        case '+':
            column = 0;
            cout << "Enter a First Name: "; cin >> firstN;
            cout << endl;
            contacts[rows][column] = firstN;
            column++;
            cout << "Enter a Last Name: "; cin >> lastN;
            cout << endl;
            contacts[rows][column] = lastN;
            column++;
            cout << "Enter the number: ";cin >> number;
            contacts[rows][column] = number;
            rows++;

            break;
        case 'F':
            cout << "Enter a last name: "; cin >> lastN;
            for(int row = 0; row < rsz; row++)
            {
                 if(contacts[row][1] == lastN)
                 {
                    cout << contacts[row][0] << " ";
                    cout << contacts[row][1] << " ";
                    cout << contacts[row][2] << " ";
                 }
            }
            cout << endl;

            break;
        case 'D':
            cout << "Here are the contacts: " << endl;
            for(int row = 0; row < rows; row++)
            {
                for(int col = 0; col < csz; col++)
                {
                    cout << contacts[row][col] << " ";
                }
                cout << endl;
            }

            break;
        case 'Q':
            cout << "Thank you for using this program. Exiting now." << endl;
            break;
        default:
            cout << "Invalid. Try again: " << endl;

        }
    }



	return 0;
}
