#include <iostream>

using namespace std;

inline void keep_window_open() {
    char ch;
    cout<<"please enter a character to exit : ";
    cin>>ch;
}

int main() {
    cout<<"Hello World\n";
    keep_window_open();
    return 0;
}
