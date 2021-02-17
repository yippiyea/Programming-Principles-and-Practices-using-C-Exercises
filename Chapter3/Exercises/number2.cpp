//  Purpose :   convert from mile to kilometers
    //  Plan    :   -   prompt user to enter number of mile
    //              -   display "'mile' mile is 'km' kilometer"

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    int mile;
    int kilometers;

    cout<<"Enter a mile : ";
    cin>>mile;

    kilometers = mile * 1609;

    cout<< mile <<" \n mile is "<< kilometers << " kilometer\n";
    
    keep_window_alive();
    return 0;
}