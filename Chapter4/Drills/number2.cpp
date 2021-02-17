//  Purpose/Problem     :   Write a program that reads two integer each time around the loop and directly
//                          prints them, 
//                          display smaller and larger number
//  Requirements        :
//  UI design           :   input prompt    :   enter two ints;
//                          output prompt   : 
//                          error prompt    :
//  Logic               :   get the two datas by using cin>>data; cin>>data2;
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    int num1;
    int num2;

    cout<<"Enter two ints (type | to exit): ";
    while(cin>>num1)
    {
        if (num1 == '|') break;
        cin>>num2;
        cout<<"\nnum1 : "<<num1<<" \t num2 : "<<num2<<endl;

        //  determine smaller and larger number
        if (num1 > num2)
        {
            cout<<"num1:"<<num1<<" is bigger than num2:"<<num2<<endl;
        }
        else
        {
            cout<<"num2:"<<num2<<" is bigger than num1:"<<num1<<endl;
        }
        
        cout<<"Enter two ints (type | to exit): ";
    }
    keep_window_alive();
    return 0;
}