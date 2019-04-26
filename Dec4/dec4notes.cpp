/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <fstream> // ofstream
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>
#include <iomanip> // format output

using namespace std;

void getInput(string& input);

bool checkPal(string input);

void print(bool isPalindrome, string word);

int main()
{
    string s;
    getInput(s);
    checkPal(s);
    print(checkPal(s),s);
	return 0;
}

void getInput(string& input)
{
    cout << "ENTER SOMETHING:\t";
    getline(cin, input);
}

bool checkPal(string input)
{
    bool flag = true;
    for(int i = 0; i < input.length()/2; i++)
    {
        if(input[i]!=input[input.length()-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}

void print(bool isPalindrome, string word)
{
    if(isPalindrome)
    {
        cout << word << " is a palindrOMMMMME";
    }
    else
    {
        cout << "NOPEPE" << endl;
    }
}
