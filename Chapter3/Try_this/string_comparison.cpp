// read and compare string 
/*
compare alphabetically
*/

#include <iostream>

using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please press 1 to exit : ";
    cin>>ch;
}

int main() {

    cout<<"Read and Compare string\n";

    string firstPersonName;
    string secondPersonName;

    cout <<"Enter names (separated by space): ";
    cout<<"\n";
    cin>>firstPersonName>>secondPersonName;

    if(firstPersonName == secondPersonName) {
        cout<<"thats the same name twice \n";
    }
    if(firstPersonName < secondPersonName) {
        cout<<firstPersonName<<" is (Alphabetically before ) "<<secondPersonName<<"\n";
    }
    if (secondPersonName < firstPersonName) {
        cout<<secondPersonName << " is (Alphabetically before) "<< firstPersonName<<"\n";
    }

    keep_window_alive();
    return 0;
}