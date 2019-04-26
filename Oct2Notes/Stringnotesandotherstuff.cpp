/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /**
    string str = "LOL";
    cout << str[1]; // outputs O
    cout << endl;
    string s2 = "name";
    cout << s2.length() << endl; //length of string
    **/

    /*
    string str = "apple";
    for(int index = 0; index < str.length(); index++)
    {
        if(index == str.length() - 1)
        {
            cout << str[index] << endl;
        }
        else
        {
            cout << str[index] << '-';
        }
    }
    */

    // character number program:

    /**
    char charac;
    string word;
    char choice = 'y';


    while(choice == 'Y' || choice == 'y'){
        int x = 0;
        cout << "Enter a character: "; cin >> charac;
        cout << "Enter a word: "; cin >> word;
        for(int i = 0; i < word.length(); i++)
        {
            if(charac == word[i])
               {
                   x++;
               }
        }
        cout << "There are " << x << " " << charac << "s in the word: " << word << endl;
        cout << "Press Y or y to try again."; cin >> choice;
    }
    **/
    string str;
    char choice;
    cout << "Enter text\n";
    getline(cin, str);
    cout <<"Continue? "; cin >> choice;// put a cin.ignore if you have a getline after cin

	return 0;
}
