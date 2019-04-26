/***********************
Name: Roober Cruz
Date: 10/2/2018
Program Name: Mode Program
Description of program: This program lets the user input 20 numbers and outputs the mode or most recurring number(s).
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int arr[20];
    cout << "Enter 20 numbers " << endl;
    for (int i = 0; i < 20; i++){
       cin >> arr[i];
    }

    int maxi = 0;

    for (int i = 0; i < 20; i++)
    {
       int counter = 1;
       for (int j = i + 1; j < 20; j++)
           if (arr[i] == arr[j])
               counter++;
       if (counter > maxi)
          maxi = counter;
    }

    for (int i = 0; i < 20; i++)
    {
       int counter = 1;
       for (int j = i + 1; j < 20; j++)
           if (arr[i] == arr[j])
               counter++;
       if (counter == maxi)
           cout << "Mode is " << arr[i] << " with " << maxi << " occurences. "<< endl;
    }
}
