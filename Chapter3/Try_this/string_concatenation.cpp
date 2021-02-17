// concatenate string from user
/*
Firstname 
Lastname
*/

#include <iostream>

using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please press [1] to exit : ";
    cin>>ch;
}

int main() {
    cout<<"Demonstrating concatenating string \n";

    string firstname;
    string lastname;

    cout<<"Enter your firstname : ";
    cin>>firstname;
    cout<<"Enter your lastname : ";
    cin>>lastname;

    string name = firstname + ' ' + lastname;

    cout<<"Hello "<<name<<"\n";
    keep_window_alive();

    return 0;
}
