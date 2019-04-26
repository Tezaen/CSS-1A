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

void shuffleArr(char arr[], int sz);

const int sz = 26;

int main()
{
    srand(time(NULL));
    char arr[26];

    for(int i = 0; i < sz; i++)
    {
        arr[i] = 65 + i;
    }

    for(int i = 0; i < sz; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    shuffleArr(arr, sz);

    for(int i = 0; i < sz; i++)
    {
        cout << arr[i];
    }

	return 0;
}

void shuffleArr(char arr[], int sz)
{
    char newArr[sz] = {};
    int temp;
    for(int i = 0; i < sz; i++)
    {
        int r = (rand() % 26);
        temp = arr[r];
        arr[r] = arr[i];
        arr[i] = temp;
    }
}
