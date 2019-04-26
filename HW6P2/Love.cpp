/***********************
Name: Roober Cruz
Date: 10/12/18
Program Name: LOVE
Description of program: This program replaces every four letter word with LOVE
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
    char choice = 'Y';
    do{
        string sentence;
        int charCount,charPos;
        char letter;
        charCount = 0;
        cout << "Input a sentence: " << endl;
        getline(cin, sentence);
        cout << sentence << endl;

        for (charPos=0; charPos<sentence.size();charPos++)
            {
                letter = sentence[charPos];
                charCount = charCount + 1;
                if (letter == ' ')
                {
                    if (charCount == 5)
                    {
                        sentence[charPos-4]='L';
                        sentence[charPos-3]='O';
                        sentence[charPos-2]='V';
                        sentence[charPos-1]='E';
                    }
                    charCount=0;
                }
        }
        if (charCount == 4)
            {
                sentence[charPos-4]='L';  //
                sentence[charPos-3]='O';
                sentence[charPos-2]='V';
                sentence[charPos-1]='E';
            }

        cout <<  sentence << endl;
        cout << "Try again??? "; cin >> choice;
        cin.ignore();
}while(choice == 'y' || choice =='Y');
    return 0;
}
