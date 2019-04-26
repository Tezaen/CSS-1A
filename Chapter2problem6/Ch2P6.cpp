/* Roober Cruz
September 2, 2018
Program: Cost program
This program calculates a person's wage, dependents, withheld costs, and net income that subtracts costs and taxes */
#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    int hours;
    int num_depend;
    double wage = 16.78;
    double overtime = (wage * 1.5);
    double sst = 0.06;
    double fit = .14;
    double sit = 0.05;
    int uniondues = 10;
    int healthInsurance = 35;

    cout << "Enter the number of hours worked: "; cin >> hours;
    cout << "Enter the number of dependents: "; cin >> num_depend;

    if (hours <= 40 && num_depend < 3)
    {
        cout << "Earned " <<(hours * wage) << endl;
        cout << num_depend << endl;
        cout << "Total Withheld " << ((hours * wage) * sst) + ((hours * wage) * fit) + ((hours * wage) * sit) + (uniondues) << endl;
        cout << "Net income " << ((hours * wage) - ((hours * wage) * sst) - ((hours * wage) * fit) - ((hours * wage) * sit) - (uniondues)) << endl;
    }
    else if (hours <= 40 && num_depend >= 3)
    {
        cout << "Earned " <<(hours * wage) << endl;
        cout << num_depend << endl;
        cout << "Total Withheld " << ((hours * wage) * sst) + ((hours * wage) * fit) + ((hours * wage) * sit) + (uniondues) + (healthInsurance) << endl;
        cout << "Net income " << ((hours * wage) - ((hours * wage) * sst) - ((hours * wage) * fit) - ((hours * wage) * sit) - (uniondues) - (healthInsurance)) << endl;
    }
    else if (hours > 40 && num_depend >= 3)
    {
        cout << "Earned "<<((40 * wage) + ((hours - 40) * overtime)) << endl;
        cout << num_depend << endl;
        cout << "Total Withheld " << (((40 * wage) + ((hours - 40) * overtime)) * sst) + (((40 * wage) + ((hours - 40) * overtime)) * fit) + (((40 * wage) + ((hours - 40) * overtime)) * sit) + (uniondues) + (healthInsurance) << endl;
        cout << "Net income " << ((((40 * wage) + ((hours - 40) * overtime)) - (((40 * wage) + ((hours - 40) * overtime)) * sst) - (((40 * wage) + ((hours - 40) * overtime)) * fit) - (((40 * wage) + ((hours - 40) * overtime)) * sit) - (uniondues) - (healthInsurance))) << endl;
    }
    else {
        cout << "Earned "<<((40 * wage) + ((hours - 40) * overtime)) << endl;
        cout << num_depend << endl;
        cout << "Total Withheld " << (((40 * wage) + ((hours - 40) * overtime)) * sst) + (((40 * wage) + ((hours - 40) * overtime)) * fit) + (((40 * wage) + ((hours - 40) * overtime)) * sit) + (uniondues)<< endl;
        cout << "Net income " << ((((40 * wage) + ((hours - 40) * overtime)) - (((40 * wage) + ((hours - 40) * overtime)) * sst) - (((40 * wage) + ((hours - 40) * overtime)) * fit) - (((40 * wage) + ((hours - 40) * overtime)) * sit) - (uniondues))) << endl;
    }

    return 0;
}
