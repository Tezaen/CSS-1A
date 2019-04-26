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
    //stringVar.find("String", index to start search);
    /**
    string s1 = "And", s2= "aNd", s3 = "anD";

    string s4 = s1 + s2 + s3;
    cout << s4 << endl;

	return 0; **/
    /*
	string s = "Practice sample text";
	unsigned int index_found = 0;

	index_found = s.find("sample", 0);

	cout << "Sample is at: " << index_found << endl;
	for(int i = index_found; i < (index_found + 6); i++)
    {
        s[i] = '-';
    }
    cout << s << endl;
    // Count spaces
    for(int index = 1; index < s.length(); index++)
    {
        index = s.find(" ", index);
        cout << "Space found at " << index << endl;
        if(index == string::npos)// not found
            break;
    } */
    /**
    string input = "";
    int counter = 0;
    cout << "Enter a sentence: " << endl;
    getline(cin, input);


    for(int i = 1; i < input.length(); i++)
    {
        i = input.find(" ", i);
        counter++;
        if(i == string::npos)
        {
            break;
        }
    }
    cout << "Number of words: " << counter << endl;
    **/
    //stringVar.insert(pos, str2); hello = hllello if str2 ll
    //stringVar.erase(pos, length);



	return 0;
}
