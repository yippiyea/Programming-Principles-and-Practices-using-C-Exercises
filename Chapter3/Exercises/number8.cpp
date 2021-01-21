//  Purpose     :   determine if a number is odd or even
    //  Plan    :   -   get user input
    //              -   display "The value '4'is even number"
    //                  -   logic : input % 2 (because if there is a reuslt then the input is odd number)

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {

    int val{0};
    cout<<"Please enter an integer value : ";
    while (cin>>val)
    {
        //  logic
        if ((val % 2) == 1) {
        cout<<"The value " << val << " is an odd number "<<endl;
        }
        else 
        {
        cout <<"The value " << val << " is an even number " <<endl;
        }
        cout<<"Please enter an integer value : ";
    }
    
    
    keep_window_alive();
    return 0;
}