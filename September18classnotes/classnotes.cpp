#include <iostream>
#include <ctime> // time functions
#include <cstdlib> // rand(), srand

using namespace std;

const int TAILS = 1;
const int HEADS = 0;
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
int main()
{
    /**
    srand(static_cast <unsigned>(time(0)));

    for(int i = 1; i<= 5; i++)
    {
        cout << (rand()%5) + 15 << endl;
    }
    **/
    //Coin toss
    /*
    int tosses = 0,
        num_heads = 0,
        num_tails = 0,
        coin = 0;
    char repeat = 'n';

    do{
        cout << "How many tosses do you want?!\n";
        cin >> tosses;
        // do simulation
        num_heads = 0;
        num_tails = 0;
        for(int toss = 1; toss <= tosses; toss++)
        {
            coin = rand() % 2;
            if(coin == HEADS)
            {
                num_heads++;
            }
            else
            {
                num_tails++;
            }
        }
        cout << "Results: " << num_heads << " Heads "
             << " And " << num_tails << " Tails \n";
        cout << "Enter y to run simulation again\n";
        cin >> repeat;
    }while(repeat != 'n' && repeat != 'N');
    */
    int rolls,
        num_one,
        num_two,
        num_three,
        num_four,
        num_five,
        num_six,
        dice;
    char repeat = 'n';
    do
    {
        cout << "How many rolls do you want? \n"; cin >> rolls;
        num_one = num_two = num_three = num_four = num_five = num_six = 0;
        for(int roll = 1; roll <= rolls; roll++){
            dice = ((rand() % 6) + 1);
            if(dice == ONE){
                num_one++;
            }
            else if(dice == TWO){
                num_two++;
            }
            else if(dice == THREE){
                num_three++;
            }
            else if(dice == FOUR){
                num_four++;
            }
            else if(dice == FIVE){
                num_five++;
            }
            else{
                num_six++;
            }
        }
        cout << "One: " << num_one << " Two: " << num_two << " Three: " << num_three << " Four: " << num_four << " Five: " << num_five << " Six: " << num_six << endl;
        cout << "YOU WANNA DO IT AGAIN?!?!??!?!\n";
        cin >> repeat;

    }while(repeat != 'n' && repeat != 'N');

    return 0;
}


