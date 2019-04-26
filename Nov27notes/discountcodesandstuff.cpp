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

void printMenu();

void displayDiscount(char choice, double arr[7][4]);

void product(char& choice);

int main()
{
    char choice;
    double discounts[7][4] = {{3, 4, 6, 3}, {10, 5, 10, 20}, {5, 30, 20, 30}, {15, 10, 30, 10}, {0, 0, 40, 0}, {0,0,5,0},{0,0,15,0}};

    char c;
    product(c);
    displayDiscount(c, discounts);
	return 0;
}

void printMenu()
{
    cout << "Here is the product list: " << endl;
    cout << "A. Clothes B. Electronics C. Toys D. Home Products\t";

}

void product(char& choice)
{
    printMenu();
}

void displayDiscount(char& choice)
{
    switch(toupper(choice))
    {
    case 'A':
        col = 0;
        break;
    case 'B':
        col = 1;
        break;
    case 'C':
        col = 2;
        break;
    case 'D':
        col = 3;
        break;
    default:
        col = 0;
        break;

    }
    cout << "Discounts: ";
    for(int i = 1; i < arr[0][col]; i++)
        cout << arr[i][col] << "%";
    cout << endl;
}
