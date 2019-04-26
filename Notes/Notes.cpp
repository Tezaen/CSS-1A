#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout <<2.34567<< endl;
    cout.precision(2);
    cout <<2.34567<< endl;

    return 0;
}
