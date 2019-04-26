/**************************************************8
Roober Cruz
September 7 2018
RPS program
This is a simple RPS program that lets two users play RPS and can determine which wins
***********************************************/
#include <iostream>

using namespace std;

int main()
{
    char choice1;
    char choice2;
    cout << "R is for ROCK. P is for PAPER. S is for SCISSORS \n";
    cout << "Player 1, Enter your CHOICE\n"; cin >> choice1;
    cout << "Player 2, Enter your CHOICE\n"; cin >> choice2;

    if (((choice1 = 'p') || (choice1 = 'P')) && ((choice2 = 'r') || (choice2 = 'R')))
        cout << "PAPER BEATS ROCK!\n";
    else if (((choice1 = 'r') || (choice1 = 'R')) && ((choice2 = 'S') && (choice2 = 's')))
        cout << "ROCK BEATS SCISSORS!\n";
    else if (((choice1 = 's') || (choice1 = 'S')) && ((choice2 = 'p') || (choice2 = 'P')))
        cout << "SCISSORS BEATS PAPER!\n";
    else if (choice1 = choice2)
        cout << "TIE!\n";
    else
        cout << "INVALID\n";

    return 0;
}
