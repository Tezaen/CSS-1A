#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   /***
    int dec = 0,
        rem = 0;
    char repeat = 'y';
    do{
    cout << "Enter a number\n";
    cin >> dec;
    while(dec != 0)
    {
        rem = dec; //initialize remainder to match decimal.
        dec /= 2; //dec = dec / 2;
        rem %= 2; //rem = rem % 2'
        cout << rem;
    }
    cout << endl;
    cout << "Do you want to convert another number? y - yes\n";
    cin >> repeat;
    }while(repeat == 'Y' || repeat =='y');

    ***/

    /*
    double x = 2,
           y = 3,
           z = 0;
    z = pow(x, y);
    cout << z << endl;
    cout << pow(2, 4) << endl; //16

    z = round(2.0/3);
    cout << z << endl; //1

    z = sqrt(y);
    cout << "Square root: " << z << endl;

    z = ceil(2.33); //3
    cout << z << endl;

    z = floor(2.7888); //2
    cout << z << endl;
    */

    srand(3); //sets seed to 3
    for(int i = 1; i <= 3; i++)
    {
    cout << rand() % 10<< endl;
    }
    return 0;
}
