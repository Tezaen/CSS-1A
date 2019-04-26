/*********
Roober Cruz
September 11, 2018
This program takes a use-inputted number from 1-10 and displays it in roman numeral
**/

#include <iostream>

using namespace std;

int main()
{
    int num;
    char choice = 'y';
    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter a number from 1-10: " << endl;
        cin >> num;
        if((num >= 1) && (num <= 10))
        {
            if(num == 1)
            {
                cout << "I" << endl;
            }
            else if (num == 2)
            {
                cout << "II" << endl;
            }
            else if (num == 3)
            {
                cout << "III" << endl;
            }
            else if (num == 4)
            {
                cout << "IV" << endl;
            }
            else if (num == 5)
            {
                cout << "V" << endl;
            }
            else if (num == 6)
            {
                cout << "VI" << endl;
            }
            else if (num == 7)
            {
                cout << "VII" << endl;
            }
            else if (num == 8)
            {
                cout << "VIII" << endl;
            }
            else if (num == 9)
            {
                cout << "IX" << endl;
            }
            else
            {
                cout << "X" << endl;
            }
            cout << "Do you want to go again?\n"; cin >> choice;
        }
        else
        {
            cout << "ERROR" << endl;
            cout << "Do you want to go again?\n"; cin >> choice;
        }
    }
    return 0;
}
