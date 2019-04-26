/***********************
Name: Roober Cruz
Date: 10/15/2018
Program Name: Number to X program
Description of program: This program changes all standalone numbers to Xs. Ex: 1 to x, 3412 to xxxx, Hello31 to Hello31
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
    char chc = 'y';
    while(chc == 'y' || chc == 'Y'){
        string sent = "";
        int indx = 0;
        int indx2 = 0;
        cout << "Enter a sentence with some numbers: \n";
        getline(cin, sent);
        bool digit = true;

        sent.insert(0," ");
        sent.insert(sent.length(), " ");

        for(int i = 0; i < sent.length(); i++)
        {
            indx = sent.find(" ", i);
            indx2 = sent.find(" ", indx + 1);

            for(int j = indx + 1; j < indx2; j++)
            {
                if(!isdigit(sent[j]))
                {
                    digit = false;
                }
            }
            if(digit)
            {
                for (int n = indx + 1; n < indx2; n++)
                {
                    sent[n] = 'x';
                }
            }
        digit = true;
        i = indx2 - 1;
        }
        sent.erase(0, 1);
        cout << "Here is the new sentence: " << endl;
        cout << sent << endl;
        cout << "Try again? Press Y or y" << endl;
        cin >> chc;
        cin.ignore();

    }

	return 0;
}
