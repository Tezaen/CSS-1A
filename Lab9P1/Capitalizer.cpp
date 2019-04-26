/***********************
Name: Roober Cruz
Date: 10/11/2018
Program Name: Capitalizer
Description of program: This app capitalizes every first letter of a sentence.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    char choice = 'y';
    do{
        string input = "";
        cout << "Enter some sentence. Remember to put spaces between the period and your first word of the next sentence: " << endl;
        getline(cin, input);
        input[0] = toupper(input[0]);
        for(int i = 0; i < input.length(); i++)
        {
            if(input[i] == '.')
                input[i + 2] = toupper(input[i + 2]);
            if(input[i] == '?')
                input[i + 2] = toupper(input[i + 2]);
            if(input[i] == '!')
                input[i + 2] = toupper(input[i + 2]);
            if(i == string::npos)
                break;
        }
        cout << "New Sentence: " << input << endl;
        cout << "Try again? Press y or Y"; cin >> choice;
        cin.ignore();
    }while(choice == 'y' || choice == 'Y');

	return 0;
}
