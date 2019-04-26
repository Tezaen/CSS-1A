/***********************
Name: Roober Cruz
Date: September 25 2018
Program Name: Prime numbers
Description of program: This program lists out every number between 3 to 100 and outputs all prime numbers.
***********************/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int flag;
    int low = 3;
    int high = 100;

    while (low < high)
    {
        flag = 0;

        for(int i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }
    return 0;
}
