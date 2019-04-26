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

int showQuestion(int x, int y);

string getResult(int x, int y, int ans);

int genNum();

void record(ofstream& outfile, int x, int y, int answer, string result);

int main()
{
    /** srand(time(NULL));

    ofstream outfile;
    outfile.open("randNumbs.txt");

    for(int i = 0; i < 10; i++)
    {
        int random = (rand() % 100000);
        outfile << random << endl;
    }
    outfile.close();
    **/
    /////////////
    /*
    int random, random2, answerInput;
    string answer;
    char choice = 'y';
    ofstream out;
    out.open("multi.txt");
    do{
    cout << "Try this: " << endl;
    random = (rand() % 5) + 1;
    random2 =  (rand() % 5) + 1;
    cout << "What is: " << random << " * " << random2 << "? " << endl;
    cin >> answerInput;
    if(random * random2 == answerInput)
    {
        answer = "Correct";
    }
    else
    {
        answer = "Wrong";
    }
    out << random << "\t" << random2 << "\t" << answerInput << "\t" << answer << endl;
    cout << "Try again?" << endl;
    cin >> choice;

    }while(toupper(choice) == 'Y');\
    out.close();
    */
    /// Different way of ^^^problem with functions:
    srand(static_cast<unsigned>(time(NULL)));
    int n1 = 0, n2 = 0, ans = 0;
    char repeat = 'n';
    ofstream out;
    out.open("multiplyfunction.txt");
    do{
        n1 = genNum();
        n2 = genNum();
        ans = showQuestion(n1, n2);
        record(out, n1, n2, ans, getResult(n1, n2, ans));
        cout << "DO you want to try again?\t";
        cin >> repeat;
    }while(tolower(repeat) == 'y');
    out.close();
	return 0;
}

int showQuestion(int x, int y)
{
    int answer = 0;
    cout << "Multiply: " << x << " * " << y << "?" << endl;
    cin >> answer;
    return answer;
}

string getResult(int x, int y, int answer)
{
    if(x * y ==  answer)
    {
        return "correct";
    }
    else{
        return "wrong";
    }
}

int genNum()
{
    int randomNum = (rand() % 10)+ 1;
    return randomNum;
}

void record(ofstream& outfile, int x, int y, int answer, string result)
{
    outfile << x << "\t" << y << "\t" << answer << "\t" << result << endl;
}
