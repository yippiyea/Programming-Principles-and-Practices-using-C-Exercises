// Program to output a string of : 
// Hello World and
// Here we go

#include <iostream>

using namespace std;

inline void keep_window_open() {
    char ch;
    cout<<"please anter a character to exit : ";
    cin>>ch;
}

int main() {
    cout<<"Hello World \n";
    cout <<"Here we go";
    keep_window_open();
    return 0;
}