/***********************************
Author: Roober Cruz
Date: 9/11/2018
Program: Call Cost Calculator
Description: This program calculates the cost of a call based on the duration of the call, the day, and the hour the call started.
**********************************/

#include <iostream>

using namespace std;

int main()
{

    int startHour;
    int duration;
    double weekdayrate = 0.40;
    double nightrate = 0.25;
    double weekendrate = 0.15;
    string day;
    cout << "Enter the time of call in military time: "; cin >> startHour;
    cout << "Enter the duration of the call: "; cin >> duration;
    cout << "Enter the first two letter of the day of the week of the call: "; cin >> day;

    if((day == "mo") || (day == "MO") || (day == "mO") || (day == "Mo") || (day == "Tu") || (day == "tU") || (day == "tu") || (day == "TU") || (day == "We") || (day == "we")
       || (day == "wE") || (day ==  "WE") || (day == "TH") || (day == "th") || (day == "tH") || (day == "Th") || (day == "Fr") || (day == "fr") || (day == "FR") || (day == "fR"))
    {
        if((startHour < 800) || (startHour > 1800))
        {
            cout << "The cost is: $" << nightrate * duration << endl;
        }
        else if ((startHour >= 800) || (startHour <=1800))
        {
            cout << "The cost is: $" << weekdayrate * duration << endl;
        }
        else{
            cout << "INVALID HOUR" << endl;
        }
    }
    else if(day == "Sa" || day == "sa" || day == "sA" || day == "SA" || day == "Su" || day == "su" || day == "sU" || day == "SU")
    {
        cout << "The cost is: $" << weekendrate * duration << endl;
    }
    else
    {
        cout << "INVALID DAY" << endl;
    }
    return 0;

    /****
    Is there a way to reduce the number of lines of code in this program?
    ****/
}
