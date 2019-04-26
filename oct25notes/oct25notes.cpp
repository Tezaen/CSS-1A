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

string seccolor(string color1, string color2);

int main()
{
    string c1 = "", c2 = "";
    cout << "Please enter two primary colors: Red for red, Blue for blue, Yellow for yellow" << endl;
    cin >> c1 >> c2;
    cout << seccolor(c1, c2) << endl;
	return 0;
}

string seccolor(string color1, string color2)
{
    assert(color1 == "Red" || color1 == "Blue" || color1 == "Yellow");
    assert(color2 == "Red" || color2 == "Blue" || color2 == "Yellow");

    string Color = "";

    if((color1 == "Red" && color2 == "Blue") || (color1 == "Blue" && color2 == "Red"))
    {
        return "Purple";
    }
    else if((color1 == "Red" && color2 == "Yellow") || (color1 == "Yellow" && color2 == "Red"))
    {
        return "Orange";
    }
    else
    {
        return "Green";
    }
}

