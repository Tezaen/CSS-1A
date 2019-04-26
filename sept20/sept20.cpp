/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:

***********************/

#include <iostream>

using namespace std;

int main()
{
/* PROBLEM 1
    int howMany;
    int num;
    int total;
    int ave;
    char repeat = 'y';
    cout << "How many numbers do you want to enter? "; cin >> howMany;

    do{
        total = 0;
        for(int counter = 1; counter <= howMany; counter++)
        {
            cout << "Enter a number: " << endl;
            cin >> num;
            total += num; //total = total + num
        }
        ave = static_cast<double>(total) / howMany;
        cout << ave << " is the AVERAGE!!!" << endl;
        cout << "repeat? "; cin >> repeat;
    }while(repeat == 'y' || repeat == 'Y');
    */


    int numEntered;
    int num;
    int mini;
    int maxi;

    cout << "HOW MANY NumbERS YOU WANT "; cin >> numEntered;
    maxi = 0;
    for (int counter = 1; counter <= numEntered; counter++){
        cout << "Number: "; cin >> num;
/**
        if(mini > num)
            mini = num;
        if (maxi < num)
            maxi = num;
            **/
            if(counter == 1) //we have 1st number
            {
                mini = num;
                maxi = num;
            }
            if(mini > num)
            {
                mini = num;
            }
            if(maxi < num)
            {
                maxi = num;
            }
    }

    cout << mini << "\t" << maxi << endl;




    return 0;

}
