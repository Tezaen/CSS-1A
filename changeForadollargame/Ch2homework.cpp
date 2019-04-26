/*Roober Cruz
August 31 2018
This program lets the user enter 2 numbers and shows them the sum, difference, product, and quotient
The second one tells you which number is larger
The commented out code is the first program
*/
#include <iostream>

using namespace std;

int main()
{
    /*
    int num1,
        num2;

    cout << "Enter two numbers\n";
    cin >> num1 >> num2;
    cout << (num1 + num2)<< '\n' << (num1 - num2) << '\n' << (num1 * num2) << '\n' << (num1 / num2) << endl;

    return 0;
    */
    int num1,
        num2;

    cout << "Enter two numbers pls" << endl;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is bigger than " << num2 << endl;
    }
    else if (num2 > num1)
    {
        cout << num2 << " is bigger than " << num1 << endl;
    }
    else
    {
        cout << "EQUAL !!!\n";
    }
}
