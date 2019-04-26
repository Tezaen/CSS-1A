/***********************
Name: Roober Cruz
Date: 10/2/2018
Program Name: Tutor program
Description of program: This program lets
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

const int SIZE = 20;
int main()
{
    int idArr[SIZE];
    string subjArr[SIZE];
    int timeArr[SIZE];
    char choice;
    int counter =0;
    char again = 'e';

    cout << "Enter C to Check in\n" << "Enter D to display all check ins" << endl;
    cin >> choice;

    if(choice == 'c' || choice == 'C')
    {
        while(again == 'e'){
            if(counter <= 20)
            {
                cout << "Enter your student ID#, subject you are checking in for, and the time you arrived in 24 hour notation" << endl;
                cin >> idArr[counter];
                cin.ignore();
                getline(cin, subjArr[counter]);
                cin >> timeArr[counter];
                counter++;
            }
            else{
                cout << "Max capacity " << endl;
                again == 'n';
            }
            cout << "Next person to sign in, press E. If you want to exit: enter any other letter: "; cin >> again;
        }
        if(again != 'e')
        {
            cout << "You have exited sign-in. Press D to check the list: "; cin >> choice;
        }
    }
    if(choice == 'd' || choice == 'D')
    {
        cout << "List of students signed in: " << endl;
        for(int x = 0; x < counter; x++)
        {
            cout << idArr[x] << endl;
            cout << subjArr[x] << endl;
            cout << timeArr[x] << endl;
            cout << endl;
        }
    }
	return 0;
}
