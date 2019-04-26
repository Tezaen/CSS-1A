/***********************
Name: Roober Cruz
Date: 10/11/2018
Program Name: Counting program
Description of program: This program takes a user inputted sentence and counts the words and sentences.
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
        int counter = 0;
        int sentCount = 0;
        cout << "Enter a sentence: " << endl;
        getline(cin, input);

        for(int i = 1; i < input.length(); i++)
        {
            i = input.find(" ", i);
            counter++;
            if(i == string::npos)
            {
                break;
            }
        }

        for(int x = 1; x < input.length(); x++)
        {
            if(input[x] == '.')
                sentCount++;
            if(input[x] == '!')
                sentCount++;
            if(input[x] == '?')
                sentCount++;
        }

        cout << "Number of words: " << counter << endl;
        cout << "Number of sentences: " << sentCount << endl;
        cout << "Try again? Press Y or y: "; cin >> choice;
        cin.ignore();
    }while(choice == 'y' || choice == 'Y');

	return 0;
}
