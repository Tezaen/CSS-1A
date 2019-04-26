/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

void printArr(const int a[], int sz);

unsigned int countLetter(const string& s, char target);

int main()
{
    int a[3] = {0,1,2};
    printArr(a, 3);

    cout << countLetter("text", 'a') << endl;
    cout << countLetter("sample", 'm') << endl;
    cout << countLetter("hey!", '!') << endl;
    cout << countLetter("123 yell", '2') << endl;

	return 0;
}

void printArr(const int a[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << a[i] << endl;
    }
}

unsigned int countLetter(const string& s, char target)
{
    unsigned int counter = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == target)
        {
            counter++;
        }
    }
    return counter;
}
