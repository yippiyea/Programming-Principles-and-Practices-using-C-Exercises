//  Purpose/Problem     :   Write spelled-out number conversion
//  Requirements        :   convert string to number  
//  UI design           :   input prompt    "enter a number : zero "
//                          output prompt   "result : 0 "
//                          error prompt    "not a number i know"
//  Logic               :   perform many if logic
//  Data design         :   user input save in string

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    string val;
    int result;

    cout << "write number in letters : ";

    while (cin>>val)
    {
        if (val == "zero")
        {
        result = 0;
        cout<<"result : " << result <<endl;
        }

        else if (val == "one")
        {
        result = 1;
        cout<<"result : " << result <<endl;
        }

        else if (val == "two")
        {
        result = 2;
        cout<<"result : " << result <<endl;
        }

        else if (val == "three")
        {
        result = 3;
        cout<<"result : " << result <<endl;
        }

        else if (val == "four")
        {
        result = 4;
        cout<<"result : " << result <<endl;
        }

        else if (val == "five")
        {
        result = 5;
        cout<<"result : " << result <<endl;
        }

        else if (val == "six")
        {
        result = 6;
        cout<<"result : " << result <<endl;
        }

        else if (val == "seven")
        {
        result = 7;
        cout<<"result : " << result <<endl;
        }

        else if (val == "eight")
        {
        result = 8;
        cout<<"result : " << result <<endl;
        }

        else if (val == "nine")
        {
        result = 9;
        cout<<"result : " << result <<endl;
        }

        else if (val == "ten")
        {
        result = 10;
        cout<<"result : " << result <<endl;
        }
        else
        {
            cout<<"Not a word i know "<<endl;
        }
        
        
        cout << "write number in letters : ";
    }    
    keep_window_alive();
    return 0;
}