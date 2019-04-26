/* =======================================
This program creates a game of TicTacToe
with player versus computer.
User will be 'X' and Computer will be 'O'
==========================================*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cassert>

using namespace std;

// ***************************************************************
void initBoard(char board[3][3]);
// SUMMARY: (Code provided) Initializes board to
// - - -
// - - -
// - - -
// POSTCONDITIONS: Board has been initialized to above values.
// ***************************************************************
//
// ***************************************************************
void displayBoard(char board[3][3]);
// SUMMARY: Displays board with headings (code provided)
// ***************************************************************
//
// ***************************************************************
void playerMove(char board[3][3], int row, int column);
// SUMMARY: This function asks the user for a row and column
// between 0 - 2. It then assigns an X to the board at that location
// if the board at that location is not already an 'X' or an 'O'.
// If the location is taken, then the user is asked for another
// row and column until a usable location is entered.
// PRECONDITIONS: row and column are positive numbers from 0 - 2.
// POSTCONDITIONS: The player's move has been recorded on the board.
// ***************************************************************
//
// ***************************************************************
void computerMove(char board[3][3]);
// SUMMARY: This function creates two random numbers between 0 - 2.
// It then assigns an O to the board at that location only if
// the board at that location is not already an 'X' or an 'O'.
// If there is an 'X' or 'O' at that location then two new
// random numbers are generated. This is continued until a valid
// row and column is generated.
// PRECONDITIONS: Computer moves
// POSTCONDITIONS: The computer's move has been recorded on
// the board.
// ***************************************************************
//
// ***************************************************************
bool checkPlayerWon(char board[3][3]);
// SUMMARY: This function prints "Player Won" if the player won.
// It also returns true if the user has 3 X's in a row, or 3 X's in a column,
// or 3 X's along one of the two diagonals. False otherwise
// PRECONDITIONS: Player manages to put three Xs or Os in a row.
// POSTCONDITIONS: returns true if the user won the game. False
// otherwise.
// ***************************************************************
//
// ***************************************************************
bool checkComputerWon(char board[3][3]);
// SUMMARY: This function returns true if the computer has
// 3 O's in a row, or 3 O's in a column, or 3 O's along one of
// the two diagonals. False otherwise. It also prints "Computer Won"
// if the computer won.
// PRECONDITIONS: Computer manages to put three Xs or Os in a row.
// POSTCONDITIONS: returns true if the computer won the game. False
// otherwise.
// ***************************************************************
//
// ***************************************************************
bool check4CatsGame(char board[3][3]);
// SUMMARY: Checks if the board is full and therefore, no winner.
// If this is the case then it returns true, false otherwise.
// PRECONDITIONS: The board is full and there are no three in a row Xs or Os
// POSTCONDITIONS: returns true if its a tie and false otherwise.
// ***************************************************************
//

// Main is provided - no changes needed here
int main()
{
    srand(static_cast<unsigned>(time(NULL)));

    char ticTacBoard[3][3];
    char again = 'N';
    int userRow, userCol;
    bool winner_p = false, // player won this is set to true
         winner_c = false; // computer won, this is set to true

    // repeat as many times as user wants after game over.
    do{
        initBoard(ticTacBoard);
        displayBoard(ticTacBoard);
        do{
            // Get players move
            playerMove(ticTacBoard, userRow, userCol);
            displayBoard(ticTacBoard);
            winner_p = checkPlayerWon(ticTacBoard);
            // If player did not win then continue with computer's move
            if(!winner_p)
            {
                computerMove(ticTacBoard);
                displayBoard(ticTacBoard);
                winner_c=checkComputerWon(ticTacBoard);
            }
        }while(!winner_p && !winner_c && !check4CatsGame(ticTacBoard));
        cout << "Would you like to play again? Y- yes\n";
        cin >> again;
    }while(toupper(again) == 'Y'); // start new game

    return 0;
}
void initBoard(char board[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            board[row][col] = '-';
        }
    }
}
void displayBoard(char board[3][3])
{
    cout << "   "; // spacing
    for(int i = 0; i <= 2; i++) // display headings
    {
        cout << i << "  ";
    }
    cout << endl;
    // Display board
    for(int row = 0; row < 3; row++)
    {
        cout << row << "|";
        for(int col = 0; col < 3; col++)
        {
            cout <<" " << board[row][col] << "|" ;
        }
        cout << endl;
    }
}

void playerMove(char board[3][3], int row, int column)
{
    cout << "Choose a row: "; cin >> row;
    cout << "Enter a col: "; cin >> column;

    while(board[row][column] != '-')
    {
        cout << "Occupied. Try again: " << endl;
        cin >> row >> column;
    }
    board[row][column] = 'X';
}
void computerMove(char board[3][3])
{
    srand(static_cast<unsigned>(time(NULL)));
    int rand0m = rand() % 3;
    int rand0m2 = rand() % 3;
    while(board[rand0m][rand0m2] != '-'){
        rand0m = rand() % 3;
        rand0m2 = rand() % 3;
    }
    board[rand0m][rand0m2] = 'O';
}
bool checkPlayerWon(char board[3][3])
{
    int row = 0;
    int column = 0;
    for(int column = 0; column < 3; column++)
    {
        if(board[row][column] == 'X' && board[row + 1][column] == 'X' && board[row + 2][column] == 'X')
        {
            cout << "Player won" << endl;
            return true;
        }
    }
    for(int row = 0; row < 3; row++)
    {
        if(board[row][column] == 'X' && board[row][column + 1] == 'X' && board[row][column + 2] == 'X')
        {
            cout << "Player won" << endl;
            return true;
        }
    }
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        cout << "Player won" << endl;
        return true;
    }
    if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        cout << "Player won" << endl;
        return true;
    }

    return false;
}
bool checkComputerWon(char board[3][3])
{
    int row = 0;
    int column = 0;
    for(int column = 0; column < 3; column++)
    {
        if(board[row][column] == 'O' && board[row + 1][column] == 'O' && board[row + 2][column] == 'O')
        {
            cout << "Computer won" << endl;
            return true;
        }
    }
    for(int row = 0; row < 3; row++)
    {
        if(board[row][column] == 'O' && board[row][column + 1] == 'O' && board[row][column + 2] == 'O')
        {
            cout << "Computer won" << endl;
            return true;
        }
    }
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        cout << "Computer won" << endl;
        return true;
    }
    if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        cout << "Computer won" << endl;
        return true;
    }
    return false;
}
bool check4CatsGame(char board[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(board[row][col] == '-')
            {
                return false;
            }
        }
    }
    return true;
}
