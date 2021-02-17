//  Purpose :   Demonstrating logic
    //  Plan    :   -   get user input    
    //              -   change prompt user input to : "Enter the name of the person you want to write to"
    //              -   customize it to display : "Dear ---,"
    //              -   add line "How are you ?"
    //              -   Prompt the user "Enter your friend name : "
    //              -   add line "Have you seen 'friend_name' lately ? "
    //              -   get user input [m,f] to char (initialize char to 0)
    //              -   if user input is m display : "if you see 'friend_name' please ask him to call me"
    //              -   if user input is f display : "if you see 'friend_name' please ask her to call me"


#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    string first_name;
    string friend_name;
    char friend_sex = 0;

    cout<<"Enter the name of the person you want to write to : ";
    while(cin>>first_name)
    {
        cout<<"Enter your friend name : ";
        cin>>friend_name;
        cout<<"Enter your friend sex [m = male, f = female] : ";
        cin>>friend_sex;

        cout<<"Dear "<<first_name<<", How are you ? \n";
        cout<<"Have you seen "<<friend_name<<" lately ?\n";
        if (friend_sex == 'm')
        {
            cout<<"if you see "<< friend_name <<" please ask him to call me\n";
        }
        else if (friend_sex == 'f')
        {
            cout<<"if you see "<< friend_name <<" please ask her to call me\n";
        }
        else
        {
            cout<<"You input wrong value\n";
        }

        cout<<"Enter the name of the person you want to write to : ";
    }

    keep_window_alive();
    return 0;
}