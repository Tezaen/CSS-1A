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
    /*
    string s = "sample text";

    s.erase(s.find("a",0),1);
    s.insert(0,"A ");
    cout << s;
	return 0;
    */

    /**
	string str1 = "Sample text level eleven";
	unsigned int index = 0;
	cout << str1 << endl;

    for(unsigned int i = 0; i < str1.length() && index != string::npos; i++){
        index = str1.find("le", i);
        if(index != string::npos)
        {
            str1.erase(index, 2);
            str1.insert(index, "el");
        }
    }
    cout << str1 << endl;
    **/

    char tictactoe[3][3]{{'','',''}},
                        {{'','',''}},
                        {{'','',''}};

    for(int i = 0; i < 10; i++)
    {
        tictactoe[i][i] = 'x';
        cout << tictactoe[i][i] << endl;
    }

    return 0;
}
