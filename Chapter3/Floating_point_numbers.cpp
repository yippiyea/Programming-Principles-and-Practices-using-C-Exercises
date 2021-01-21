// write floating point of these
/*
n + 1
n three times
n twice
n squared
n shalf of n
n square root of n
*/

#include <iostream>
#include <math.h>

using namespace std;

inline void keep_window_open() {
    int ch;
    cout<<"Please Press [1] to exit : ";
    cin>>ch;
}

int main() {
    cout<<"Floating Point Conversion \n";

    double f;
    cout<<"Please anter a floating point value : ";
    cin>>f;

    cout<<"n + 1 : "<<f + 1<<"\n";
    cout <<"n three times :"<<f * 3<<"\n";
    cout <<"n twice :"<<f + f<<"\n";
    cout <<"n squared : "<<f * f<<"\n";
    cout << "n shalf of n : "<<f / 2<<"\n";
    cout << "n square root of n : "<<sqrt(f)<<"\n";

    keep_window_open();
    sq

    return 0;
}














