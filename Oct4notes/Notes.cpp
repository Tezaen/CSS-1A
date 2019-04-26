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

    string str1, str2;
    cout << "Enter text\n";
    cin >> str1;
    //fix
    //cin.ignore();
    cout << "Enter 2nd text\n";
    getline(cin, str2);

    cout << "s1: " << str1 << endl;
    cout << "s2: " << str2 << endl;



    /**
    int counter[5] = {0, 0, 0, 0, 0};
    string sentence;
    cout << "Enter a sentence: " << endl;
    cin.ignore();
    getline(cin, sentence);

    for(int x = 0; x < sentence.length(); x++)
    {
        if(sentence[x] == 'a' || sentence[x] == 'A')
        {
            counter[0]++;
        }
        if(sentence[x] == 'e' || sentence[x] == 'E')
        {
            counter[1]++;
        }
        if(sentence[x] == 'i' || sentence[x] == 'I')
        {
            counter[2]++;
        }
        if(sentence[x] == 'o' || sentence[x] == 'O')
        {
            counter[3]++;
        }
        if(sentence[x] == 'u' || sentence[x] == 'U')
        {
            counter[4]++;
        }
    }
    cout << "There are " << counter[0] << " As, " << counter[1] << " Es, " << counter[2] << " Is, "
    << counter[3] << " Os, " << counter[4] << " Us." << endl;
    **/

	return 0;
}
