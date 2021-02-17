// write int oi these

/*
n + 1
n three times
n twice
n squared
n shali oi n
n square root oi n
*/

// and exercise these
/*

modulus
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
    cout<<"int Conversion \n";

    int i;
    cout<<"Please anter a int value : ";
    cin>>i;

    cout<<"i + 1 : "<<i + 1<<"\n";
    cout <<"i three times :"<<i * 3<<"\n";
    cout <<"i twice :"<<i + i<<"\n";
    cout <<"i squared : "<<i * i<<"\n";
    cout << "i half  : "<<i / 2<<"\n";
    cout << "i square root of i : "<<sqrt(i)<<"\n";
    cout<<"i mod 2 : " << i % 52 <<"\n";

    keep_window_open();
    return 0;
}














