// detect repeated string input

#include <iostream>
using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please press[1] to terminate program : ";
    cin>>ch;
}

int main() {
    cout<<"Demonstrate repeated word detection program \n";

    string previous = " ";
    string current;

    while(cin>>current) {
        if (current == previous) {
            cout<<"You entered same string as before\n";
        }

        previous = current;
    }

    keep_window_alive();
    return 0;
}