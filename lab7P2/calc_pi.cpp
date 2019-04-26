/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:

***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input;
    double pi = 0;
    char choice = 'q';
    int x = 0;
    do{
        pi = 0;
        cout << "Enter a number to calculate PI to: \n";
        cin >> input;

        for(int x = 0; x <= input; x++){
            pi = pi + ((pow(-1 , x)) / ((2 * x) + 1));
        }

        pi = pi * 4;

        cout << pi;
        cout << " Try again? \n"; cin >> choice;
    }while(choice == 'y' || choice == 'Y');

	return 0;
}
