/***********************
Name: Roober Cruz
Date: 9/18/2018
Program Name: Riddler Problem
Description of program: This program uses loops in order to find the Riddler's address.
***********************/

#include <iostream>

using namespace std;

int main()
{
    cout << "WE HAVE TO FIND THE RIDDLER'S NEXT LOCATION!" << endl;
    for(int thousand = 0; thousand < 10; thousand++){
        for(int hund = 0; hund < 10; hund++){
            for(int tens = 0; tens < 10; tens++){
                for(int one = 0; one < 10; one++){
                    if(thousand + hund + tens + one == 27){
                        if((tens * 3 == thousand)){
                            if ((thousand != hund) &&(thousand != tens) && (thousand!= one)){
                                if(one % 2 != 0){
                                    cout << "My computer says that the address to the Riddler's next target is: " << thousand << hund << tens << one << " Pennsylvania Ave!" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}


