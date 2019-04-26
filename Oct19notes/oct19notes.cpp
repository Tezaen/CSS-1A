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

/**double getHypo(double sideA, double sideB);**/

double kmconver(double km);

double getkm();

void printsConversion(double miles, double km);

void run();
int main()
{
   /* double sideA = 0, sideB = 0;
    cout << "Enter 2 sides: "; cin >> sideA >> sideB;
    cout << getHypo(sideA, sideB) << endl;
    return 0; */
    run();
    return 0;
}

/*
double getHypo(double sideA, double sideB)
{
    assert(sideA > 0 && sideB > 0);
    double sideC = 0;
    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
    return sideC;
}   */

double kmconver(double km)
{
    double miles = 0;
    miles = km * 0.6214;
    return miles;
}

double getkm()
{
    double km = 0;
    cout << "Enter kilometers\n";
    cin >> km;
    return km;
    while(km < 0)
    {
        cout << "KM can't be negative. Please enter km again\n";
        cin >> km;
    }
}

void printsConversion(double miles, double km)
{
    cout << km << " km. = " << miles << " mi.\n";
}
void run()
{
    double k = 0, m = 0;
    k = getkm ();
    m = kmconver(k);
    printsConversion(m, k);
}





