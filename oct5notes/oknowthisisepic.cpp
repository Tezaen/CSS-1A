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

using namespace std;

int main()
{
    //toupper('a') makes char uppercase
    //tolower('a') makes char lowercase
    //isalnum('c') returns true if the char is a letter or number isalnum('_') is false isalnum('D') is true
    //islower and isupper does the same thing as isalnum except it checks lower/uppercase
    //isdigit is the same thing but checks if number is 0-9
    //ispunct is the same but for punctuation

    /**
    string str = "";

    cout << "Enter Sentence\n";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

    cout << "ALL CAPPED: ";
    cout << str << endl;

    if("game" < "gam")
        cout << "game is smaller\n";
    else
        cout << "gam is smaller\n";  **/


    string pword = "";
    int upcounter = 0;
    int lowcounter = 0;
    int punctcount = 0;

    bool foundDigit = false;
    bool foundLower = false;
    bool foundUpper = false;
    bool foundPunct = false;

    cout << "Enter a PASSWORD. Must have at least one uppercase letter, one lowercase, and now punctuation\n";
    getline(cin, pword);

    for(int i = 0; i < pword.length(); i++)
    {
        if(isdigit(pword[i]))
            foundDigit = true;
        else if (islower(pword[i]))
            foundLower = true;
        else if (isupper(pword[i]))
            foundUpper = true;
        else
            foundPunct = true;
    }
    if(foundDigit && foundLower && foundUpper && !foundPunct)
        cout << "Valid PW\n";
    else
        cout << "invalid\n";

    return 0;
}

