/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main()
{
    ofstream outfile;
    // 1. open the file
    outfile.open("testfile.txt");
    // 2. process file
    string color, name;
    cout << "Enter your first name \n";
    cin >> name;
    cout << "Enter a color \n";
    cin >> color;
    outfile << "Name: " << name << endl;
    outfile << "Color: " << color << endl;
    // 3.close
    outfile.close();

	return 0;
}
