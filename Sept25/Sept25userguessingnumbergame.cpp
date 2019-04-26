/***********************
Name: Roober Cruz
Date: Sept 25 2018
Program Name:
Description of program:

***********************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // set seed to time
//    srand(static_cast<unassigned>(time(NULL)));

    // variables
    int compNum; //random number
    int userGuess;
    char choice = 'q';

    compNum = (rand() % 100) + 1;
    do{
        do{
        cout << "Guess Number: " << endl;
        cin >> userGuess;
        if(userGuess == compNum)
        {
            cout << "YOU GUESSED IT RIGHT! WOW! NICE! \n";
        }
        if(userGuess < compNum)
        {
            cout << "tOOO loWowOWOOW \n";
        }
        else
        {
            cout << " TOOO HIGHHHH NGVGGGGGGGGGGGGGGGGGG\n";
        }
        }while( userGuess != compNum);

        cout << " Wanna play agaIINN?!?!??!?!??!?!?!??!?!??!\n";
        cin >> choice;
    }while((choice == 'y') && (choice == 'Y'));

	return 0;
}
