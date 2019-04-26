/***********************
Name: Roober Cruz
Date: 11/15/2018
Program Name: Hangman
Description of program: This program utilizes functions to create a hangman game.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

void selectRand(const string a[], int sz, string& randWord);

string dashedWord(string randWord);

bool checkLetter(string& dashedWord, string randWord, char c);

void missed(bool found, int& miss);

void displayBoard(string dashedWord, int miss);

const int sz = 7;

int main()
{
    char choice = ' ';
    int misschar = 0;
    char playAgain = 'y';
    bool checked = false;
    string random = "";
    string dashes = "";
    string a[sz] = {"height", "tree", "skyline", "rotary", "carburator", "impreza", "seep"};
    cout << "Initializing random word\n";
    do{
        int misschar = 0;
        bool checked = false;
        selectRand(a, sz, random);
        dashes = dashedWord(random);
        while(misschar < 6 && dashes != random)
        {
            displayBoard(dashes, misschar);
            cout << "Please input a letter: "; cin >> choice;
            checked = checkLetter(dashes, random, choice);
            missed(checked, misschar);
        }
        if(misschar == 6)
        {
            displayBoard(dashes,misschar);
            cout << endl;
            cout << "You lose!" << endl;
            cout << "Try again?";
            cin >> playAgain;
        }
        if(dashes == random)
        {
            displayBoard(dashes,misschar);
            cout << "You win!" << endl;
            cout << "Try again?" << endl;
            cin >> playAgain;
        }
    }while(toupper(playAgain) == 'Y');
	return 0;
}

void selectRand(const string a[], int sz, string& randWord)
{
    assert(sz >= 7);
    srand(time(NULL));
    int randNum = (rand() % (sz - 1));
    randWord = a[randNum];
}

string dashedWord(string randWord)
{
    string dashes = "";
    for(int i = 0; i < randWord.length(); i++)
    {
        dashes.insert(i, "_");
    }
    return dashes;
}

bool checkLetter(string& dashedWord, string randWord, char c)
{
    bool check = false;
    for(int i = 0; i < dashedWord.length(); i++)
    {
        if(c == randWord[i])
        {
            dashedWord[i] = c;
            check = true;
        }
    }
    return check;
}
void missed(bool found, int& miss)
{
    if(found == false)
    {
        miss++;
    }
}
void displayBoard(string dashedWord, int miss)
{
    cout << dashedWord << "\t Misses: (" << miss << "/6)";
}
