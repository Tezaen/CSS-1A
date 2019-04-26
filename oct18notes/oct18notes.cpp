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
// ***********************************
double calcTriangleArea(double base, double height);
// Calculates the area of a triangle
// equation 1/2 * base * height
//Precondition: base and height > 0
//Postcondition: area of triangle is returned.
// ***********************************
//
// ***********************************
double calcRectArea(double length, double width);
// Calculates the area of a rectangle
// length * width
// preconditions: length and width > 0
// postconditions: area of rectangle is returned.
// ***********************************
//

int main()
{
	// Test 1
	if(calcTriangleArea(1, 1) == 0.5)
    {
        cout << "Triangle(1, 1) test ... passed\n";
    }
    else
    {
        cout << "Triangle(1, 1) test ... failed\n";
    }

    if(calcTriangleArea(50, 100) == 2500)
    {
        cout << "Triange(50, 100) test ... passed\n";
    }
    else
    {
         cout << "Triange(50, 100) test ... failed\n";
    }
	return 0;

	if(calcRectArea(5, 5) == 25);
	{
	    cout << "Rectangle(5, 5) test ... passed\n";
	}
	else
    {
        cout << "Rectangle(5, 5) test ... failed\n";
    }

    if(calcRectArea(3, 5) == 15)
    {
        cout << "(5,3) passed\n";
    }
    else
    {
        cout << "(5.3) failed\n";
    }
    if(calcRectArea(0.3, 0.15) == 0.15)
    {
        cout << "It is 0.15\n";
    }
    else
    {
        cout << "It's not 0.15 oof\n";
    }

}

double calcTriangleArea(double base, double height)
{
    assert(base > 0 && height > 0);
    double area = 0;
    area = 0.5 * base * height;
    return area;
}

double calcRectArea(double length, double width);
{
    assert(length > 0 && width > 0)
    double area = 0;
    area = length * width;
    return area;
}
