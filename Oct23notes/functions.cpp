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

double classA(int Ax);

double classB(int Bx);

double classC(int Cx);

double total(double costsA, double costsB, double costsC);

int main()
{
    int ticks = 0;
    double totalCost = 0;
    double costsA = 0, costsB = 0, costsC = 0;
    cout << "Enter class A number of tickets: "; cin >> ticks;
    costsA = classA(ticks);
    cout << endl;
    cout << "Enter class B number of tickets: "; cin >> ticks;
    costsB = classB(ticks);
    cout << endl;
    cout << "Enter class C number of tickets: "; cin >> ticks;
    costsC = classC(ticks);
    cout << endl;
    cout << "Total amount = " << total(costsA, costsB, costsC);
	return 0;
}

double classA(int Ax)
{
    assert(Ax >= 0);
    int costsA = 0;
    costsA = Ax * 15;
    return costsA;
}

double classB(int Bx)
{
    assert(Bx >= 0);
    int costsB = 0;
    costsB = Bx * 12;
    return costsB;
}

double classC(int Cx)
{
    assert(Cx >= 0);
    int costsC = 0;
    costsC = Cx * 9;
    return costsC;
}
double total(double costsA,double costsB,double costsC)
{
    assert(costsA >= 0 && costsB >= 0 && costsC >= 0);
    double totalCost = 0;
    totalCost = costsA + costsB + costsC;
    return totalCost;
}
