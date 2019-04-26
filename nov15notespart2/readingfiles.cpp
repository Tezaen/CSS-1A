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

int main()
{
    ifstream infile;
    int num;
    infile.open("nums5.txt");
    // check for any problems
    if(infile.fail())
    {
        cout << "Error opening file\n";
        exit(1);
    }
    //file opened
    for(int i = 1; i <= 5; i++)
    {
        infile >> num;
        cout << "Read: " << num << endl;
    }
    infile.close();
	return 0;
}
