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
#include <iomanip>

using namespace std;

int main()
{
    string fullname = "";
    string idNum = "00000";
    double gpa = 0.0;
    // set gpa to use 2 decimal values
    ofstream fout;
    fout.open("grades.csv");
    fout.setf(ios::fixed);
    fout.setf(ios::showpoint);
    fout.precision(2);
    fout << "Name,id#,gpa\n";
    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter student's fullname\n";
        getline(cin, fullname);
        cout << "Enter student id\n";
        cin >> idNum;
        cout << "Enter " << fullname << "'s GPA\n";
        cin >> gpa;
        cin.ignore();
        // write contents to file
        fout << fullname << ", " << idNum << ", " << gpa << endl;
    }
    fout.close();
	return 0;
}
