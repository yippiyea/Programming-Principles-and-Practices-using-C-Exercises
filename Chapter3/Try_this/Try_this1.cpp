// display user name and age
#include <iostream>

using namespace std;

inline void keep_window_open() {
    int ch;
    cout<<"please enter 1 to exit : ";
    cin>>ch;
}

int main() {
    cout<<"Program to display user name and age (enabled double)\n";
    string name;
    double age;

    cout<<"enter a your name : ";
    cin>>name;
    cout<<"\n";

    cout<<"enter your age (IN YEAR): ";
    cin>>age;
    cout<<"\n";

    cout<<"Your name is : "<<name<<"\n";
    cout<<"Your age is : "<<age<<"\n";

    keep_window_open();
    return 0;
}