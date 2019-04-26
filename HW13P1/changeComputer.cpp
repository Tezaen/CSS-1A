/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <fstream> // ofstream
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>
#include <iomanip> // format output

using namespace std;

void computerC(int coins, int& num, int& amountLeft); // Assign the number of coins equal to a quarter or nickel etc.

void input(int& amountLeft); // Enter the cents as a whole number.

void output(int& num, int& amountLeft); // Outputs the results of computerC function

int main()
{
    char repeat = 'y';
    int num, amountLeft = 0;

    do{
        input(amountLeft);
        output(num, amountLeft);

        cout << endl;
        cout << "Run program again? Press y" << endl;
        cin >> repeat;
    }while(toupper(repeat) == 'Y');

	return 0;
}

void input(int& amountLeft)
{
    cout << "Please enter your money in cents: " << endl;
    cin >> amountLeft;
}

void computerC(int coins, int& num, int& amountLeft)
{
    num = (amountLeft - amountLeft % coins)/coins;
    amountLeft %= coins;
}

void output(int& num, int& amountLeft)
{
    computerC(25, num, amountLeft);

    cout << "Your money is " << num << " in quarter(s), ";

    computerC(10, num, amountLeft);

    cout << num;

    cout << " dime(s), ";

    computerC(5, num, amountLeft);

    cout << num;

    cout << " nickel(s), and ";

    computerC(1, num, amountLeft);

    cout << num;

    cout << " cents.";
}
