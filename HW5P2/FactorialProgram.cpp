/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

#include <iostream>

using namespace std;

int main()
{
    int inp = 0,
        fact = 1;
    char choice = 'y';

    while(choice = 'y' || choice == 'Y'){
        cout << "Input a number: "; cin >> inp;
        if((inp <= 12) && (inp > 0))
        {
            for(int num = inp; num >= 1; num--)
            {
                fact = fact * num;
            }
            cout << fact << endl;
        }
        else
        {
            cout << "Try again. " << endl;
            cin >> inp;
        }
        cout << "Try again? "; cin >> choice;

    }


	return 0;
}
