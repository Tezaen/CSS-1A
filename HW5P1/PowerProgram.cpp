/***********************
Name: Roober Cruz
Date: 9/28/2018
Program Name: Power Program
Description of program: This program has the user enter two integers, one for the base and one for the exponent. The user can execute the program as many times
as they want.
***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int base = 0, exp = 0, powerFunc = 0;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter two integers. The first for the base and the second for the exponent."; cin >> base >> exp;
        powerFunc = pow(base, exp);
        cout << powerFunc;
        cout << " Want to try again?\n";
        cin >> choice;
    }

	return 0;
}
