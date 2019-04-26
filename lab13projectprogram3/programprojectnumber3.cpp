/***********************
Name: Roober Cruz
Date: 11/6/2018
Program Name: Delete Repeat
Description of program: This program takes a set of character arrays and deletes any repeating characters.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

void deleteRepeat(char a[], int sz);

int main()
{
    char arr[5] = {'a','a','g','f','f'};
    char arr2[7] = {'a','b','b','c','c','d','d'};
    char arr3[3] = {'a', 'a', 'b'};
    deleteRepeat(arr, 5);
    deleteRepeat(arr2, 7);
    deleteRepeat(arr3,3);
	return 0;
}

void deleteRepeat(char a[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        for(int j = i + 1; j < sz; j++)
        {
            if(a[j] == a[i])
            {
                for(int k = j + 1; k < sz; k++)
                {
                    a[k - 1] = a[k];
                }
                a[sz - 1] = ' ';
            }
        }
    }

    for(int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
