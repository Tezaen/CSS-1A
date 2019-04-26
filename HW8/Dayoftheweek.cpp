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

bool isLeapYear(int year);
//This function determines if the year is a leap year
int centuryC(int year);
//Determines the first two digits of the year
int yearY(int year);
//Determines the last two digits of the year
int monthM(int month, int year);
//Determines the month
void input(int& day, int&month, int& year);
//User input for the date
int main()
{
    int day = 0, month = 0, year = 0;
    input(day, month, year);

    int dateNum = (day + centuryC(year) + yearY(year) + monthM(month, year)) % 7;

    cout << "The date is: \n";

    switch(dateNum)
    {
    case 0:
        cout << "Sunday! ";
        break;
    case 1:
        cout << "Monday! :( ";
        break;
    case 2:
        cout << "Tuesday! ";
        break;
    case 3:
        cout << "Wednesday! ";
        break;
    case 4:
        cout << "Thursday! ";
        break;
    case 5:
        cout << "Friday! ";
        break;
    case 6:
        cout << "SATURDAY! :)";
        break;
    default:
        cout << "ERROR";
    }

	return 0;
}

bool isLeapYear(int year)
{
    return year%400 == 0;
}

int centuryC(int year)
{
    return 2*(3 - (year/100)%4);
}

int yearY(int year)
{
    return (year - 100*(year/100))/4 + year - 100 * (year/100);
}

int monthM(int month, int year)
{
    switch(month)
    {
    case 1:
        if(isLeapYear(year)){
            return 6;
            return 2;
        }
    case 2:
        if(isLeapYear(year)){
            return 2;
            return 3;
        }
    case 3:
        return 3;
    case 4:
        return 6;
    case 5:
        return 1;
    case 6:
        return 4;
    case 7:
        return 6;
    case 8:
        return 2;
    case 9:
        return 5;
    case 10:
        return 0;
    case 11:
        return 3;
    case 12:
        return 5;
    };
}
void input(int& day, int& month, int& year)
{
    string temp;

    cout << "Enter the date as day month year in numbers. Example: 11 11 2011  \n";

    cin >> day >> month >> year;
}




