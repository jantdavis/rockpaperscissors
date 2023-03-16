//
//  main.cpp
//  Rock Paper Scissors!
//
//  Created by Jordan Davis & David Holguin on March 2, 2023

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to ROCK-PAPER-SCISSORS!! Lets play..."<<endl;
    char keepPlayin;
    int p1, p2;
   
    do
    {
        cout << "Select your character:" << endl; cout << "[1] ROCK!" << endl; cout << "[2] PAPER!" << endl; cout << "[3] SCISSORS" << endl;
        cout << "--------------------------------" << endl; cout << "You've Chosen..." << endl;
        cin>>p1;
        p2 = rand()%3+1;
        cout << "CPU choice: ["<<p2<<"]" << endl;
        if (p1==p2)
            cout << ("==> Tie Game <==");
        else
        {
            switch (p1)
            {
                case 1:
                    switch (p2)
                    {
                        case 2: cout << "Paper Cover Rock ==> You LOSE :( <==";break;
                        default: cout << "Rock Crushes Scissors ==> You WIN! :D <=="; break;
                    }
                    break;
                case 2:switch (p2)
                {
                    case 1: cout << "Paper Covers Rock ==> You WIN! :D <==";break;
                    default: cout<< "Scissor Cuts Paper==> You LOSE :( <=="; break;
                }
                case 3:switch (p2)
                {
                    case 1:cout << "Rock Crushes Scissors ==> You LOSE :( <==";break;
                    default: cout << "Scissor Cuts Paper ==> You WIN :D <=="; break;
                }
                    
                    break;
                default:
                    cout << "Not an Option, plese select an available character."<<endl;
                    break;
            }
        }
        
        cout << endl << endl << "Do you want to keep playing? (type Y or N): ";
        cin >> keepPlayin;
    }
    
    while(keepPlayin=='Y'||keepPlayin=='y');
    
    cout << "Thank you for playing, see you again soon!"<< endl << endl;
    
    return 0;
}
