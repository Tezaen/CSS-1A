//
//  main.cpp
//  LabWork
//
//  Created by Miguel Espitia and Roober Cruz on 9/4/18.
//  Copyright © 2018 nothing. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int choice1 = 0;
    int choice2 = 0;
    int choice3 = 0;

    cout << "There once was a little hobbit by the name of Bartholomew. His little hobbit village was being terrorized by a giant dragon named Humphrey. He grows the courage to go after the dragon and free his people, but there are two ways of getting to the dragon. Will he take path 1, through the treacherous dark jungle, or path 2 that leads to a raging river." << endl;

    cin >> choice1;

    switch(choice1){
        case 1:
            cout << "As he goes through the jungle he encounters a wizard cannibal hobbit that tries to eat him. Will he fight the cannibal(1), or run out of the jungle.(2)" << endl;

            cin >> choice2;

            switch(choice2){
                case 1:
                    cout << "As he fights the cannibal, he realizes that the cannibal doesn't know how to use his magical staff because all of those years of canibalism have made him crazy, so our hero hobbit inevitably beats him. Although he beat him, he took damage while fighting the cannibal. Will he rest for the night(1), or will he go straight to the dragon's den?(2)" << endl;
                case 2:
                    cout << "Bartholomew chickens out and runs out of the jungle only to be greeted by Humphrey feeding on some other cannibals and he's about to go eat some baby cannibals. Will he try and help the baby cannibals(1), or will he say screw this and dip out of there?(2)" << endl;
                    cin >> choice3;

                    switch(choice3){
                        case 1:
                            cout << "He decides to go help the baby cannibals and then the adult cannibals see him and decide to attack him instead of the dragon. Bartholomew is eaten." << endl;
                            break;
                        case 2:
                            cout << "He decides to say screw the babies and runs the other way only to stumble into a cannibal's well, where he lands in a bunch of dead hobbit bodies. Bartholomew tries everything he can to get out but it's useless. He calls out for help but everyone is dead around him for miles. He gets hungry and has to resort to eating his own kind's flesh making him a cannibal now. Eventually, Bartholomew dies alone and traumitized for what he's done." << endl;
                            break;
                        default:
                            cout << "Invalid." << endl;
                            break;
                    }
                    break;
            }
        case 2:
            cout << "Bartholomew decides to go down towards a raging river where he finds a younger dragon, most likely the baby of Humphrey. Will he go down and try to make friends with the younger dragon(1), or will he make his way out of there.(2)" << endl;

            cin >> choice2;

            switch(choice2){
                case 1:
                    cout << "Bartholomew asks the dragon what its name is and it replies, Theobald. Bartholomew bursts out laughing hurting the dragon's feelings. Will he try apologizing(1), or keep laughing at him?(2)" << endl;
                    cin >> choice3;

                    switch(choice3){
                        case 1:
                            cout << "He apologizes but Theobald begins to cry. Humphrey comes down from its den and obliterates Bartholomew." << endl;
                            break;
                        case 2:
                            cout << "Bartholomew keeps on laughing at Theobald causing Theobald to get angry and rips Bartholomew to shreds." << endl;
                            break;
                        default:
                            cout << "Invalid." << endl;
                            break;
                            }
                    break;
                case 2:
                    cout << "Bartholomew turns around and walks the other way. Will he go and inform his higher ups of another dragon being around(1), or will he just get a weapon to try and kill the younger dragon himself?(1)" << endl;
                    cin >> choice3;

                    switch(choice3){
                        case 1:
                            cout << "He informs his higher ups about the existence of another dragon but they think he's crazy and is trying to scare everyone. So, they decide to burn him at the stake while his loved ones watch." << endl;
                            break;
                        case 2:
                            cout << "He returns to the village for a weapon and heads back towards the younger dragon. As he approaches the river again, the younger dragon spots him and uses his sent to trace it back to his village and destroys the village before his eyes. The dragon only leaves him alive." << endl;
                            break;
                        default:
                            cout << "Invalid." << endl;
                            break;
                    }
                break;
            }
    }
    return 0;
}
