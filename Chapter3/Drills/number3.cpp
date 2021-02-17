//  Purpose :   produce simple form letter based on user input
    //  Plan    :   -   get user input
    //              -   change prompt user input to : "Enter the name of the person you want to write to"
    //              -   customize it to display : "Dear ---,"
    //              -   add line "How are you ?"
    //              -   Prompt the user "Enter your friend name : "
    //              -   add line "Have you seen 'friend_name' lately ? "

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    string first_name;
    string friend_name;

    cout<<"Enter the name of the person you want to write to : ";
    while(cin>>first_name)
    {
        cout<<"Enter your friend name : ";
        cin>>friend_name;

        cout<<"Dear "<<first_name<<", How are you ? \n";
        cout<<"Have you seen "<<friend_name<<" lately ?\n";

        cout<<"Enter the name of the person you want to write to : ";
    }
    keep_window_alive();
    return 0;
}