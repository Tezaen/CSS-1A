/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:

***********************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 5;
const int ArrayVal = 20;
int main()
{
    /**
    srand(static_cast<unsigned>(time(NULL)));
    string students[SIZE];
    for(int idx = 0; idx < SIZE; idx++)
    {
        cout << "Enter the name for a student"
             << (idx + 1) << endl;
        cin >> students[idx];
    }

    int rand_student = rand() % SIZE;

    // Display

    cout << students[rand_student];
    **/
    /*
    for(int idx = 0; idx < SIZE; idx++)
    {
        cout << "Students [" << (idx + 1) << "]: "
             << students[idk] << endl;
    }
    */

    double input;
    double nums[ArrayVal];
    double ave;
    double total;
    for(int x = 0; x < ArrayVal; x++){
        cout << "Enter a double: "; cin >> input;
        cin >> nums[ArrayVal];
        total += nums[ArrayVal];
    }
    ave = total/SIZE;

    for(int x = 0; x < ArrayVal; x++){
        if(x % 9 == 0 && x != 0){
            cout << nums[ArrayVal] << endl;
        } else
        {
            cout << nums[ArrayVal] << " ";
        }
    }
    cout << "Total: " << total << endl;
    cout << "Average : " << ave << endl;
	return 0;
}
