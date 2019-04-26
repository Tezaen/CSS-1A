#include <iomanip> // setw, setf
#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
    /*cout << setw(6) << "Number\t" << setw(5) << "Month\n";

    cout << setw(6) << std::left << " 1" << "\t" << setw(5) << "Jan\n";

    cout << setw(6) << std::left << 2 << "\t" << setw(5) << "Feb\n";

    cout << setw(6) << std::left << 3 << "\t" << setw(5) << "Mar\n";

    cout << setw(6) << std::left << 4 << "\t" << setw(5) << "April\n";

    cout << PI << endl;
    */


    char answer = 'y';

    cout << "Enter y for yes or n for no\n";
    cin >> answer;

    switch(answer)
    {
        case 'y':
        case 'Y':
            cout << "YOU ENTERED 'YES' \n";
            break;
        case 'n':
        case 'N':
            cout << "yOu enteredD nOO \n";
            break;
        default:
            cout << "LMFAOOOO INVALID\n";
    }

    return 0;
}
