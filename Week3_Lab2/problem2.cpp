/*
Roober Cruz
August 28 2018
Moeny Program
This program tells you the monetary value of your coins
*/

#include <iostream>

using namespace std;

int main()
{
    double cent;
    double nickel;
    double dime;
    double quarter;

    cout << "How many quarters do you have? "; cin >> quarter;
    cout << "How many nickels do you have? "; cin >> nickel;
    cout << "How many dimes do you have? "; cin >> dime;
    cout << "How many cents do you have? "; cin >> cent;

    cout << "The monetary value of your coins is $" << (quarter * 0.25) + (nickel *.05) + (dime * .1) + (cent * .01) << endl;
    return 0;
}
