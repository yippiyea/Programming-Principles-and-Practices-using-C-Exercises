//  Purpose :   get user input, logic, and using function
    //  Plan    :   -   get user age to int (initialize it using c++11 notation)
    //              -   if user age <= 0 or >= 110 call simple_error("You're kidding me")
    //              -   display "I hear you just had a birthday and you are 'age' years old."

#include <iostream>
#include "../utilities.h"
#include "../std_lib_facilities.h"
using namespace std;

int main() {
    int age {0};

    cout<<"Enter your age : ";
    cin>>age;
    
    if (age <= 0 || age >= 110)
    {
        simple_error("You're kidding me");
    }
    else
    {
        cout<<"I hear you just had a birthday and you are "<< age <<" years old.\n";
    }
    
    keep_window_alive();
    return 0;
}