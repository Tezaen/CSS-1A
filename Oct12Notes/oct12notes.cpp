#include <iostream>

using namespace std;

int main(){

    char tictactoe[3][3]{{'_','_','_'},
                        {'_','_','_'},
                        {'_','_','_'}};
    char user1_icon = 'X',
         user2_icon = 'O';
    int r_move = 0,
        c_move = 0;
    int move_cnt = 0;
    bool is_gameover = false;
    //print all elements in 2D array
    do{
        cout << " 0   1   2\n";
        for(int row = 0; row < 3; row++)
        {
            for(int col = 0; col < 3; col++)
            {
                cout << row << " " << tictactoe[row][col] << " ";
            }
            //add new line after row is printed
            cout << endl;
        }
        //player1
        cout << "Player 1: Enter a row and column\n";
        cin >> r_move >> c_move;
        while(tictactoe[r_move][c_move] != '_')
        {
            cout << "SPOT IS TAKENNNN AHHHHHHHHHHHHHHHHHHH" << endl;
            cout << "Player 1: Enter a row and column\n";
            cin >> r_move >> c_move;
        }
        tictactoe[r_move][c_move] = user1_icon;
        move_cnt++;
        //checks rows
        for(int row = 0; row < 3; row++)
        {
            if(tictactoe[row][0] == user1_icon &&
               tictactoe[row][1] == user1_icon &&
               tictactoe[row][2] == user1_icon)
            {
                cout << "Player 1 wins\n";
                is_gameover = true;
            }
        }
        //checks columns
        for(int c = 0; c < 3; c++)
        {
            if(tictactoe[c][0] == user1_icon &&
               tictactoe[c][1] == user1_icon &&
               tictactoe[c][2] == user1_icon)
            {
                cout << "Player 1 wins\n";
                is_gameover = true;
            }
        }
        //checks diags

        if(tictactoe[0][0] == user1_icon &&
           tictactoe[1][1] == user1_icon &&
           tictactoe[2][2] == user1_icon && !is_gameover)
        {
            cout << "Player 1 wins\n";
            is_gameover = true;
        }

        if(tictactoe[0][2] == user1_icon &&
           tictactoe[1][1] == user1_icon &&
           tictactoe[2][0] == user1_icon && !is_gameover)
        {
            cout << "Player 1 wins\n";
            is_gameover = true;
        }


        cout << " 0   1   2\n";
        for(int row = 0; row < 3; row++)
        {
            for(int col = 0; col < 3; col++)
            {
                cout << row << " " << tictactoe[row][col] << " ";
            }
            //add new line after row is printed
            cout << endl;
        }
        if(move_cnt < 9 && !is_gameover){
            //player2
            cout << "Player 2: Enter a row and column\n";
            cin >> r_move >> c_move;
            while(tictactoe[r_move][c_move] != '_')
            {
                cout << "SPOT IS TAKENNNN AHHHHHHHHHHHHHHHHHHH" << endl;
                cout << "Player 2: Enter a row and column\n";
                cin >> r_move >> c_move;
            }
            tictactoe[r_move][c_move] = user2_icon;
            move_cnt++;
        }
        for(int row = 0; row < 3; row++)
        {
            if(tictactoe[row][0] == user2_icon &&
               tictactoe[row][1] == user2_icon &&
               tictactoe[row][2] == user2_icon)
            {
                cout << "Player 2 wins\n";
                is_gameover = true;
            }
        }
        //checks columns
        for(int c = 0; c < 3; c++)
        {
            if(tictactoe[c][0] == user2_icon &&
               tictactoe[c][1] == user2_icon &&
               tictactoe[c][2] == user2_icon)
            {
                cout << "Player 2 wins\n";
                is_gameover = true;
            }
        }
        //checks diags

        if(tictactoe[0][0] == user2_icon &&
           tictactoe[1][1] == user2_icon &&
           tictactoe[2][2] == user2_icon && !is_gameover)
        {
            cout << "Player 2 wins\n";
            is_gameover = true;
        }

        if(tictactoe[0][2] == user2_icon &&
           tictactoe[1][1] == user2_icon &&
           tictactoe[2][0] == user2_icon && !is_gameover)
        {
            cout << "Player 2 wins\n";
            is_gameover = true;
        }

    }while(move_cnt < 9);
    return 0;
}
