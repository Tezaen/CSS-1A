#include <iostream>

using namespace std;

/*
int main()
{
    int age;
    cout << "Number: ";
    cin >> age;

    cout << age << age << age << age << endl;
    cout << age << age << age << age << endl;
    cout << age << age << age << age << endl;
    cout << age << age << age << age << endl;
    return 0;
}
*/
int main()
{
    double money;
    cout << "Enter money amount paid: "; cin >> money;
    //format to precision of 2
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "You entered $" << money <<endl;

    char x = 3;

    cout << x<<endl;

    x = '*';

    cout << x << endl;


    return 0;

}
