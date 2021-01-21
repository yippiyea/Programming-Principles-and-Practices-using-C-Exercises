// Purpose  :   see the conversion between double, int, and chars
    // plan :   -   get input from user to double
                // -   convert it to int, int to char, char back to int
                // -   display them all (double, int1, int2,char) 

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    double d;   // i dont initialize it cz i know it will be used as input soon

    cout << "Provide a double value : ";
    while(cin>>d) {
        int i = d;
        char c = i;
        int i2 = c;

        cout<<" d is : " << d << "\n";
        cout<<" i is : " << i << "\n";
        cout<<" c is : " << c << "\n";
        cout<<" i2 is : " << i2 << "\n";

        cout << "Provide a double value : ";
    }
    keep_window_alive();
    return 0;
}