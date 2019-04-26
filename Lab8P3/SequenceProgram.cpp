/***********************
Name: Roober Cruz
Date: 10/2/2018
Program Name: Sequence program
Description of program: This program lets the user input two numbers and prints out the sequence between them.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int firstNum = 0,
        secNum = 0;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Input the two numbers with a space between them" << endl;
        cin >> firstNum;
        cin >> secNum;
        if(firstNum < secNum)
        {
            for(int x = firstNum; x < secNum; x++)
            {
                cout << firstNum << "\t";
                firstNum++;
            }
        }
        if(firstNum > secNum)
        {
            for(int x = firstNum; x > secNum; x--)
            {
                cout << firstNum << "\t";
                firstNum--;
            }
        }
        if(firstNum == secNum)
        {
            cout << firstNum;
        }
        cout << "  Try again?\n";
        cin >> choice;
    }

	return 0;
}
