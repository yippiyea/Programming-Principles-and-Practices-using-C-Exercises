// detect repeated string and where it is occured
#include <iostream>
using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please enter [1] to exit or [Ctrl + z] : ";
    cin>>ch;
}

int main() {

    cout<<"Demonstrate Repeated String Detection Program Advanced \n";

    int counter = 1;
    string previous = " ";
    string current;

    while (cin>>current) {
        if (current == previous) {
            cout<<"Hey thats the same input as before at : "<<counter<<"\n";
        }
        previous = current;
        counter++;
    }
    keep_window_alive();
    return 0;
}