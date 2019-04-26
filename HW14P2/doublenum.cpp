/***********************
Name: Roober Cruz
Date: 14 December 2018
Program Name: Double Number
Description of program: This program reads in all numbers from a file and adds them up, then divide them by the number of numbers, finding the average.
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
    ifstream infile;
    infile.open("doublenums.txt");
    int counter = 0;
    double num = 0;
    double sum = 0;
    double average = 0;

    while(!infile.eof())
    {
        infile >> num;
        sum += num;
        counter ++;
    }
    average = sum / counter;
    cout << average;
	return 0;
}
