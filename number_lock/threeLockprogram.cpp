#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
    /*int first = 3;

    int second = 2;

    int third = 7;

    cout << "Enter three digits"; cin >> first; cin >> second; cin >> third;

    if (first==3 && second==2 && third==7){
        cout << "Unlocked" << endl;
    }
    else {
        cout << "No" << endl;
    }
    exit(1);
    return 0;
    */
    int guest;
    int room = 50;
    int removeguest;
    cout << "How many guests bro?"; cin >> guest;

    if (guest <= room){
        cout <<"Got room"<< endl;
    }
    else {
        cout <<" no room"<< endl;
        removeguest = guest - room;
        cout << "uninvited " << removeguest << "guests\n";
    }
}
