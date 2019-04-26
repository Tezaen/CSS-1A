/*
Roober Cruz
August 28 2018
Madlibs prototype
This is a madlibs prototype where one can Input words that match the description
*/

#include <iostream>

using namespace std;

int main()
{
    string first;
    string last;
    string yourname;
    string food;
    string adjective;
    int fevernumber;
    string color;
    string animal;

    cout << "Enter the first name of your instructor: "; cin >> first;
    cout << "Enter the last name of your instructor: "; cin >> last;
    cout << "Enter your name: "; cin >> yourname;
    cout << "Enter a food: "; cin >> food;
    cout << "Enter an adjective: "; cin >> adjective;
    cout << "Enter a number between 100 and 120: "; cin >> fevernumber;
    cout << "Enter a color: "; cin >> color;
    cout << "Enter an animal: "; cin >> animal;

    cout << "Dear Instructor " << first << " " << last << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn " << color << " and" << endl;
    cout << "extremely ill. I came down with a fever of " << fevernumber << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains" << endl;
    cout << "of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late." << endl;
    cout << "\n";
    cout << "Sincerely,\n";
    cout << yourname << endl;

    return 0;
}
