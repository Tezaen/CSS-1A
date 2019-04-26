#include <iostream>
using namespace std;


/**Function prototypes**/
void printHello();
/**Summary: Prints hello **/
//preconditions:
//postconditions: hello is shown in console
// *************

// *************
void displayNameAge(string name, int age);
//Summary: Prints name and age
//precon: Name not empty
//postcon: Name and age is printed
int main()
{

    char play_again = 'Y';

    do{
        char tictacBoard[3][3] = {{'_','_','_'},
            {'_','_','_'},
            {'_','_','_'}};
            char user1_icon = 'X',
            user2_icon = 'O';
            int r_move = 0,
            c_move = 0;
            bool is_gameover = false;
            int move_cnt = 0;
            do{
            // print all elements in 2D array
            cout << " 0 1 2\n";
            for(int row = 0; row < 3; row++)
            {
                cout << row;
                for(int col = 0; col < 3; col++)
                {
                cout << " " << tictacBoard[row][col]
                << " ";
                }
                // add new line after row is printed
                cout << endl;
            }
            // player 1
            cout << "Player 1: Enter row and column\n";
            cin >> r_move >> c_move;
            while(tictacBoard[r_move][c_move] != '_')
            {
                cout << "Spot is already taken. Try again\n";
                cout << "Player 1: Enter row and column\n";
                cin >> r_move >> c_move;
            }
            tictacBoard[r_move][c_move] = user1_icon;
            move_cnt++;
            // print all elements in 2D array
            cout << " 0 1 2\n";
            for(int row = 0; row < 3; row++)
            {
                cout << row;
                for(int col = 0; col < 3; col++)
                {
                cout << " " << tictacBoard[row][col]
                << " ";
                }
                // add new line after row is printed
                cout << endl;
            }
            if(move_cnt < 9){
                // player 2
                cout << "Player 2: Enter row and column\n";
                cin >> r_move >> c_move;
                while(tictacBoard[r_move][c_move] != '_')
                {
                cout << "Spot is already taken. Try again\n";
                cout << "Player 2: Enter row and column\n";
                cin >> r_move >> c_move;
                }
                tictacBoard[r_move][c_move] = user2_icon;
                move_cnt++;
            }
        }while(move_cnt < 9);
        // reset variables:

        for(int r = 0; r < 3; r++)
        {
            for(int c = 0; c < 3; c++)
            {
                tictacBoard[r][c] = '_';
            }
        }
        move_cnt=0;
        is_gameover = false;
    }while(toupper(play_again) == 'Y');


    /** FUNCTIONS
    pros:
    reusable code
    easier to read
    easier to modify and update code

    1. Definition/Summary -

    2. Preconditions: what is true before my function runs?

    3. Postconditions: what is true after my function runs?

    2 and 3 are contracts that ensure correctness.

    *First we look at the format of a functions prototype:
    return_type function_name(datatype1 input1, datatype2 input2, datatypeN inputN...);

    return_type is the data type of your output.

    datatypeN is the data type of the N input

    ex:

    int add(int n1, int n2);

    int main()
    {
        add(5, 2);
    }
    no return use void

    void printName();


    **/

    /*
    printHello();
    for(int i = 0; i < 5; i++)
       {printHello();}

    displayNameAge("Alice", 16);
    */

    return 0;
}

/**
void printHello()
{
    cout << "Hello\n";
}

void displayNameAge(string name, int age)
{
    cout << name << " (" << age << ")\n";
}
**/
