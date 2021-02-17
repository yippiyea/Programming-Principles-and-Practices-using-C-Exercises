// Purpose : squeezing large value to small

#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    
    int a = 10;
    char c = a;
    int b =c;
    
    if (a != b) 
    {
        cout<<a<<" != "<< b << "\n";
    }
    else
    {
        cout<<"ow we have large character\n";
    }

    keep_window_alive();
    return 0;
}