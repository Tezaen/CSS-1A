/***********************
Name: Roober Cruz
Date: 10/17/18
Program Name: EtchaSketch
Description of program: This program allows the user to use key inputs to move a cursor and draw a picture.
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

const int sz = 20;

int main()
{
    char chc = 'y';
    char mov = ' ';
    char board[sz][sz];
    char user = '_';
    char user2 = '|';
    int x = 0, y = 0;
    board[0][0] = user;
    for(int row = 0; row < sz; row++)
        {
            for(int col = 0; col < sz; col++)
            {
                if(row != 0 || col != 0)
                {
                     board[row][col] = '.';

                }
                cout << board[row][col];
            }
            cout << endl;
        }

    while(chc == 'y' || chc == 'Y')
    {
        cout << "Starting at the top left corner: Enter the direction in which you want to move: " << endl;
        cout << "A or a to go left, D or d to go right, W or w to go up, and S or s to go down." << endl;
        cin >> mov;
        mov = toupper(mov);
        if((mov == 'W'))
        {
            if(x > 0){
                x = x - 1;
                board[x][y] = user2;
                cout << "Moved up" << endl;
            }
            else{
                cout << "OUT OF BOUNDS: Enter something else" << endl;
                cin >> mov;
            }
        }
        if((mov == 'S'))
        {
            if(x < sz - 1){
                x = x + 1;
                board[x][y] = user2;
                cout << "Moved down" << endl;
            }
            else{
                cout << "OUT OF BOUNDS: Enter something else" << endl;
                cin >> mov;
            }
        }
        if((mov == 'A'))
        {
            if(y > 0){
                y = y - 1;
                board[x][y] = user;
                cout << "Moved left" << endl;
            }
            else{
                cout << "OUT OF BOUNDS: Enter something else" << endl;
                cin >> mov;
            }
        }
        if((mov == 'D'))
        {
            if(y < sz - 1){
                y = y + 1;
                board[x][y] = user;
                cout << "Moved right" << endl;
            }
            else{
                cout << "OUT OF BOUNDS: Enter something else" << endl;
                cin >> mov;
            }
        }
        for(int row = 0; row < sz; row++)
        {
            for(int col = 0; col < sz; col++)
            {
                cout << board[row][col];
            }
            cout << endl;
        }
        cout << "Try again?" << endl;
        cin >> chc;
    }
	return 0;
}
