/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int user = 0;
    int comp = 0;
    char choice = 'y';
    int userWin = 0;
    int compWin = 0;

    srand(static_cast<unsigned>(time(NULL)));
    while(choice == 'y' || choice == 'Y')
    {
        cout << "Let's play RPS. 1 for Rock. 2 for Paper. 3 for Scissors. Choice? "; cin >> user;
        switch(user)
        {
            case 1:
                comp = (rand() % 3) + 1;
                if(user == comp){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " It's a tie!\n";
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 2){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You LOSE!\n";
                    compWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 3){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You WIN!\n";
                    userWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                break;
            case 2:
                comp = (rand() % 3) + 1;
                if(user == comp){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " It's a tie!\n";
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 1){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You WIN!\n";
                    userWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 3){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You LOSE!\n";
                    compWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                break;
            case 3:
                comp = (rand() % 3) + 1;
                if(user == comp){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " It's a tie!\n";
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 1){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You LOSE!\n";
                    compWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                if(comp == 2){
                    cout << comp << " is the Computer's choice\n";
                    cout << "You chose " << user;
                    cout << " You WIN!\n";
                    userWin++;
                    cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;
                }
                break;
            default:
                cout << "Invalid. Try again: "; cin >> user;
        }
        cout << "Play again? "; cin >> choice;
    }
    if(choice != 'y' || choice != 'Y')
        cout << "Thanks for playing!" << endl;
        cout << "User wins: " << userWin << " Comp wins: " << compWin << endl;

	return 0;
}
