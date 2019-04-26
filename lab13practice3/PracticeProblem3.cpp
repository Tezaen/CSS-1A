/***********************
Name: Roober Cruz
Date: 11/6/2018
Program Name: Swapper Program
Description of program: This program takes the first and last elements
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

void swapFrontBack(int a[], int sz);

int main()
{
    int a[4] = {3,2,1,5};
    int b[5] = {2,4,3,1,6};

    swapFrontBack(a, 4);
    swapFrontBack(b, 5);

	return 0;
}

void swapFrontBack(int a[], int sz)
{
    int first = a[0];
    a[0] = a[sz - 1];
    a[sz - 1] = first;
    for(int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
