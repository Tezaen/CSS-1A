/***********************
Name: Roober Cruz
Date:9/22/2018
Program Name: Toothpick game
Description of program: The program lets you play with a toothpick game called 23 where you play against the computer.
***********************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int playerChoice;
    int compChoice;
    int tPickNo = 23;

    do{
        if(tPickNo > 4){
            cout << "Human, pick between 1 to 3 toothpicks please. "; cin >> playerChoice;
            if((playerChoice > 0) && (playerChoice < 4)){
                (tPickNo = tPickNo - playerChoice);
                cout << tPickNo << " remains" << endl;
                }
            else{
                cout << "Invalid. Try again\n"; cin >> playerChoice;
            }
            compChoice = (4 - playerChoice);
            cout << "The computer picks: " << compChoice << endl;
                (tPickNo = tPickNo - compChoice);
            cout << tPickNo << " remains" << endl;
        }
        if((tPickNo <= 4) && (tPickNo >= 2)){

            cout << "Human, pick between 1 to 3 toothpicks please. "; cin >> playerChoice;
            if((playerChoice > 0) && (playerChoice < 4)){
                (tPickNo = tPickNo - playerChoice);
                cout << tPickNo << " remains" << endl;
                }
            else{
                cout << "Invalid. Try again\n"; cin >> playerChoice;
            }
            if(tPickNo == 4){
                cout << "The computer picks: 3" << endl;
                tPickNo = tPickNo - 3;}
            if(tPickNo == 3){
                cout << "The computer picks: 2" << endl;
                tPickNo = tPickNo - 2;}
            if(tPickNo == 2){
                cout << "The computer picks: 2" << endl;
                tPickNo = tPickNo - 1;}
        }
        if(tPickNo == 1){
            cout << "COMPUTER LOSES" << endl;
            tPickNo = tPickNo -1;
        }
    }while(tPickNo > 0);

    return 0;
}
