/***********************
Name: Roober Cruz
Date: 11/06/2018
Program Name: First and Last
Description of program: This program detects if the first or last element is the number two. If it is two, then returns two, if not, return false.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

bool firstlast2(int a[], int sz);


int main()
{
    int a[3] = {2,3,4};
    int b[5] = {6,10,3,1,2};
    int c[4] = {3,6,2,3};
    int d[4] = {2,3,56,2};

    cout << firstlast2(a, 3) << endl;
    cout << firstlast2(b, 5) << endl;
    cout << firstlast2(c, 4) << endl;
    cout << firstlast2(d, 4) << endl;
	return 0;
}

bool firstlast2(int a[], int sz)
{
    bool numTwo = false;
    for(int i = 0; i < sz; i++)
    {
        if((a[0] == 2) || (a[sz - 1] == 2))
        {
            numTwo = true;
        }
    }
    return numTwo;
}
