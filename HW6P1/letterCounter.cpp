/***********************
Name: Roober Cruz
Date: 10/12/18
Program Name: Letter Counter
Description of program: This program counts all letter occurrences.
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
        string st = "";

        cout << "Input a sentence: " << endl;
        getline(cin, st);
        int index = 0;
        int index2 = 0;
        int counters[26] = {0};
        for(int i = 0; i < st.length(); i++)
        {
            int counter = 0;
            index = st.find(st[i],0);
            for(int j = 0; j < st.length(); j++)
            {
                index2 = st.find(st[j]);
                if(index == index2)
                {
                    counter++;
                }
            }
            counters[st[i] - 'a'] = counter;
        }
        for(int k = 0; k < 26; k++)
        {
            char c = 'a' + k;
            if(counters[k] > 0)
                cout << c <<": " << counters[k] << endl;
        }
        cout << "Try again? "; cin >> choice;
        cin.ignore();
    }while(choice == 'y' || choice == 'Y');
	return 0;
}
