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

const int SIZE = 10;

int main()
{
   /*
    string student [SIZE];
    string majors [SIZE];
    for(int x = 0; x < SIZE; x++){
        cout << "Enter the name of a student:\n";
        cin >> student[x];
        cout << "Enter the name of the majors:\n";
        cin >> majors[x];
    }
    for(int x = 0; x < SIZE; x++){
    cout << student[x] << endl;
    cout << majors[x] << endl;
    }
    */

    srand(static_cast<unsigned>(time(NULL)));
    int num1 = 0, num2 = 0;
    int answer = 0;
    int first[SIZE];
    int second[SIZE];
    int wrong = 0;

    for(int i = 1; i <= SIZE; i++){
        num1 = (rand() % 99) + 10;
        num2 = (rand() % 99) + 10;

        cout << "Solve these problems: " << endl;
        cout << num1 << "*" << num2 << ": " << endl;
        cin >> answer;

        if(num1 * num2 == answer)
        {
            cout << "Corrrect!\n";
        }
        else
        {
            cout << "WRONG" << endl;
            first[wrong] = num1;
            second[wrong] = num2;
            wrong++;
        }
    }
    cout << "You got " << (10 - wrong) << "correct \n";
    cout <<  "These are the missed problems: \n";
    for(int counter = 0; counter < wrong; counter++)
    {
        cout << first[counter] << " * " << second[counter] << endl;
    }

	return 0;
}
