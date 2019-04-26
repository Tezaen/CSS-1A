#include <iostream>

using namespace std;

int main()
{
    /*
    for(int index =1; index < 1000; ++index)
    {
        cout << index << endl;
    }
    return 0; */
/***
    int x1 = 0,
        x2 = 0;
    //prefix
    cout << ++x1 << endl;
    //postfix
    cout << x2++ << endl;
    cout << x2 << endl;
****/

/*
    int x = 0;

    for(int x = 1; x <= 3; x++)
    {
        cout << "x = " << x << endl;
    }

    cout << "FINAL X VALUE IS " << x << endl;
    return 0;

*/
/**
    int x = 0;

    for(int i = 2; i < 5; i++)
    {
        x = x + i;
        cout << x << endl;
    }

    **/
/*
   // This is for 2 for loops
    cout << "Odds: \n";
    for(int x = 1; x < 100; x += 2)
    {
        x += x;
        cout << x << endl;
    }
    cout << "\n";
    cout << "Evens: \n";
    cout << "\n";
    for(int x = 0; x <= 100; x+=2)
    {
        x += x;
        cout << x << endl;
    }
*/
/***
    int totalOdd = 0;
    int totalEven = 0;

    for(int counter = 1; counter <= 100; counter++)
    {
        if(counter % 2 == 0)
        {
            totalEven += counter;
        }
        else
        {
            totalOdd += counter;
        }
    }
    cout << totalEven << endl;
    cout << totalOdd << endl;
**/



    return 0;
}
