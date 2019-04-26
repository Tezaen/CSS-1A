/***********************
Name: Roober Cruz
Date: November 16 2018
Program Name: outfile_infile
Description of program: This program puts information into a file and then outputs it onto the console/
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
    ofstream outfile;
    outfile.open("Lab14.txt");
    string name, date, time;
    cout << "Enter your name: \n";
    getline(cin, name);
    cout << "Enter the date: \n";
    getline(cin, date);
    cout << "Enter the time: \n";
    getline(cin, time);
    outfile << name << endl;
    outfile << date << endl;
    outfile << time << endl;
    outfile.close();

    ifstream infile;
    string nameThere, dateThere, timeThere;
    infile.open("Lab14.txt");

    if(infile.fail())
    {
        cout << "ERROR!!!" << endl;
    }

    getline(infile, nameThere);
    cout << "Name: " << nameThere << endl;
    getline(infile, dateThere);
    cout << "Date: " << dateThere << endl;
    getline(infile, timeThere);
    cout << "Time: " << timeThere << endl;

    infile.close();

	return 0;
}
