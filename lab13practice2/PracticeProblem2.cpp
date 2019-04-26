/***********************
Name: Roober Cruz
Date: 11/6/2018
Program Name: counter
Description of program: Program counts the number of instances that 2 appears.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int countNums2(int a[], int sz);

int main()
{
    int a[5] = {2,2,2,2,2};
    int b[3] = {1,2,3};
    int c[6] = {3,5,12,55,1,33};

    cout << countNums2(a, 5) << endl;
    cout << countNums2(b, 3) << endl;
    cout << countNums2(c, 6) << endl;

	return 0;
}

int countNums2(int a[], int sz)
{
    int counter = 0;
    for(int i = 0; i < sz; i++)
    {
        if(a[i] == 2)
        {
            counter++;
        }
    }
    return counter;
}
