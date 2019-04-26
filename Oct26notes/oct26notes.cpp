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

//void withdrawAtm(double& amount, double& balance);

void printArray(int arr[], int sz);
int linearSearch(int arr[], int sz, int target);

int main()
{
   /* double total = 500, cash = 0;
    withdrawAtm(cash, total);
    cout << "You got " << cash << " from your balance\n";
    cout << "Balance remaining: " << total << endl;

    */
    int a[5] = {1,2,3,4,5};
    printArray(a, 5);

    int found = linearSearch(a, 5 , 4);
    cout << "Found 4 at index " << found << endl;
    cout << "Found 7 at index " << linearSearch(a, 5, 7) << endl;
	return 0;
}
/*
void withdrawAtm(double& amount, double& balance)
{
    cout << "How much money do you want? $";
    cin >> amount;
    if(amount <= balance)
    {
        balance -= amount; // balance = balance - amount
        cout << "New Balance: $" << balance << endl;
    }
    else
    {
        cout << "Insufficient funds\n";
    }

}
*/
void printArray(int arr[], int sz)
{
    for(int i = 0; i< sz; i++)
    {
        cout << arr[i] << endl;
    }
}

int linearSearch(int arr[], int sz, int target)
{
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
