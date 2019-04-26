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
    double numbers[10] = { 2.5, 3.6, 8.3, 2.0, 1, 3, 84, 38, 9, 25};
    double target = 0;
    cout<< "What value do you want to search for?\n”;
    cin>> target;
    int index_found= -1;
for(int i= 0; i< 10; i++)
    {
        if(numbers[i] == target)
        {
            index_found= i;
            break;
        }
    }
    if(index_found == -1)
    {
        cout<< “That value was NOT found\n”;
    }
    else
    {
cout<< target <<  "was found in index: " << index_found<< endl;
    }

	return 0;
}
