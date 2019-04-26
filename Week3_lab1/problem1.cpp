/****************************************
Roober Cruz
August 28 2018
This is full of errors and is supposed to show how a beginner programmer can solve the errors
****************************************/

#include <iostream>
//A. fatal error: iostream: no such file or directory
//B. error: missing terminating > character

using namespace std;

int main () //C. requires a type error //D. 1d returned 1 exit status //E. error: expected initializer before ')' token
{
    double height = 0,
        base = 0,
        area = 0;
    // Request height and base
    cout << "Enter the height and base of the triange\n"; //F. cut was not declared in this scope //F. error: expected ';' before string constant
    cin >> height;
    cin >> base; //F. error: 'cn' was not declared in this scope
    // Compute the area of the triangle with typed in base and height
    area = 0.5 * base * height;
    //display the area of the triangle
    cout << "Triangle area with base = " << base << " and height = " << height <<" is " << area << endl; // error expected ';' before string constant warning: statement has no effect [-Wunused-value]

    return 0;
}
