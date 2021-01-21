// Output a list of step to tell computer 
//to go to bathroom

#include <iostream>

using namespace std;

inline void keep_window_open() {
    char ch;
    cout<<"please enter a key to exit : ";
    cin>>ch;
}

inline void go_to_bathroom() {
    cout<<"5 steps forward \n";
    cout<<"5 steps right \n";
    cout<<"10 steps left \n";
    cout<<"open the door \n";
    cout<<"enter to the bathroom\n";
}

int main() {

    cout<<"My position is :  (in the guest room)";
    go_to_bathroom();
    cout<<"Congratulations my Friend, \n";
    cout<<"You've made it ";

    keep_window_open();
    return 0;
}