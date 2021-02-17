//  Purpose :   produce simple form letter based on user input
    //  Plan    :   -   get user input
    //              -   change prompt user input to : "Enter the name of the person you want to write to"
    //              -   customize it to display : "Dear ---,"

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    string user_input;

    cout<<"Enter the name of the person you want to write to : ";
    while(cin>>user_input)
    {
        cout<<"Dear "<<user_input<<",\n";
        cout<<"Enter the name of the person you want to write to : ";
    }
    keep_window_alive();
    return 0;
}