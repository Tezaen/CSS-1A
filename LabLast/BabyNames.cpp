/***********************
Name: Roober Cruz
Date: November 28 2018
Program Name: Baby Names
Description of program: This program reads in the csv file of baby names.
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

void maleNamesfunc(string arr[], int sz);

void femaleNamesfunc(string arr[], int sz);

void ranking(string arr[], string arr1[], int sz);


int main()
{
    ifstream in;
    in.open("top100BabyNames.csv");

    string babyNames[201];
    string boyName[201];
    string girlName[201];
    bool male = false;
    int stop = 0;
    char choice = 'r';

    for(int i = 0; i < 201; i++)
    {
        in >> babyNames[i];
    }

    for(int ind = 1; ind < 201; ind++){
        for(int jnd = 0; jnd < babyNames[ind].length(); jnd++)
        {
            stop = 0;
            jnd = babyNames[ind].find(',', jnd);
            if(isalpha(babyNames[ind][jnd + 1]))
            {
                stop = babyNames[ind].find(',', jnd + 1);
                if(!male){
                    boyName[ind - 1] = babyNames[ind].substr(jnd + 1, stop - jnd - 1);
                    male = true;
                    jnd = stop;
                }
                else{
                    girlName[ind - 1] = babyNames[ind].substr(jnd + 1, stop - jnd - 1);
                    male = false;
                    break;
                }
            }
        }
    }
    in.close();

    do{
    cout << "Enter: \n m - search for male name \n f - search for female name \n r - display boy and girls name at a particular ranking \n q - quit program \n";
    cin >> choice;

    switch(choice){
    case 'm':
        maleNamesfunc(boyName, 201);
        break;
    case 'f':
        femaleNamesfunc(girlName, 201);
        break;
    case 'r':
        ranking(boyName,girlName, 201);
    default:
        cout << "Try again.\t"; cin >> choice;
        }
    }while(choice != 'q');
	return 0;
}

void maleNamesfunc(string arr[], int sz)
{
    string boyname = "";
    bool cantFindMe = true;
    cout << "Enter a male name: ";
    cin >> boyname;

    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == boyname)
        {
            cout << boyname << " is ranked " << i + 1 << endl;
            cantFindMe = false;
            break;
        }
    }
    if(cantFindMe)
    {
        cout << boyname << " can't be found. ";
    }
}

void femaleNamesfunc(string arr[], int sz)
{
    string girlname = "";
    bool cantFindMe = true;
    cout << "Enter a female name: ";
    cin >> girlname;

    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == girlname)
        {
            cout << girlname << " is ranked " << i + 1 << endl;
            cantFindMe = false;
            break;
        }
    }
    if(cantFindMe)
    {
        cout << girlname << " can't be found. ";
    }
}

void ranking(string arr[], string arr1[], int sz)
{
    int num = 0;

    cout << "Enter a rank number: "; cin >> num;

    for(int i = 0; i < sz; i++)
    {
        if(num == i)
        {
            cout << "Rank " << i << " names are Male: " << arr[i - 1] << " and Female: " << arr1[i - 1] << "." << endl;
            break;
        }
    }
}
