/***********************
Name: Roober Cruz
Date: 14 December 2018
Program Name: Big and Small
Description of program: This program reads in numbers from a file and outputs the biggest and smallest number in the file.
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

int main()
{
    system("color F0");
    ifstream infile;
    infile.open("nums.txt");
    int smallest = 100, biggest = 0, currentNum = 0;

    while(!infile.eof())
    {
        infile >> currentNum;
        if(currentNum > biggest)
        {
            biggest = currentNum;
        }
        if(currentNum < smallest)
        {
            smallest = currentNum;
        }
    }
    cout << "Largest Num: " << biggest << endl << endl;
    cout << "Smallest Num: " << smallest << endl << endl;
	return 0;
}
