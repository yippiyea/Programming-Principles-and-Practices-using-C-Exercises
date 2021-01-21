//  Purpose/Problem     :   make simple calculator
//  Requirements        :
//  UI design           :   input prompt    : e.g 36.5 25.1 + 
//                          output prompt   : The sum of 35.6 and 24.1 is 59.7
//                          error prompt    :
//  Logic               :   
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {    

    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char op = 0;
    string word = "";

    cout<<"input (-1) to exit: ";
    do
    {
    cin>>num1;
    cin>>num2;
    cin>>op;


    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    cout<<"op : "<<op<<endl;

    if (op == '+')
    {
        word = "sum";
        result = num1 + num2;
    }
    else if (op == '-')
    {
        word = "substract";
        result = num1 - num2;
    }
    else if (op == '*')
    {
        word = "multiply";
        result = num1 * num2;
    }
    else if (op == '/')
    {
        word = "divide";
        result = num1 / num2;
    }
    else 
    {
        cout<<"bad input"<<endl;
    }

    cout<<"The "<<word<<" of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    cout<<"input (z) to exit: ";
    } while (1);
    
    keep_window_alive();
    return 0;
}