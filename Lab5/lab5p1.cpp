/***********************************
Author: Roober Cruz
Date: 9/11/2018
Program: This program takes the user inputted temperatures and calculates the speed at which velocity travels through the temperatures
****/

#include <iostream>

using namespace std;

int main()
{
    int temp1;
    int temp2;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout << "Enter Temperature 1: "; cin >> temp1;
    cout << "Enter Temperature 2: "; cin >> temp2;

    if(temp1 < temp2)
    {
        for(int temp = temp1; temp <= temp2; temp++)
        {
            double vel = 331.3 + (0.61 * temp);
            cout << "At " << temp << " Celsius the velocity of sound is " << vel << endl;
        }
    }
    else
        cout << "ERROR: TEMP 2 BIGGER THAN TEMP 1" << endl;
    return 0;
}
