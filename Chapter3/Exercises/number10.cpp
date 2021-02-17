//  Purpose/Problem     :   Take user input of operation and operands and display result
//  Requirements        :   i need    
//  UI design           :   input prompt    :   "Please enter a operation followed by two operands" 
//                          output prompt   :   "The result is : ''"
//                          error prompt    :   "sorry guys i cant understand that input"
//  Logic               :   -   parse the strings into each part : operator, operand
//                          -   process based on operator
//                              -   if operator is '+' then do sum to the operands
//                              -   and so for the other operators
//  Data design         :   

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    string modifier;
    double operand1;
    double operand2;
    double result;


    cout<<"Please enter a operation followed by two operands : ";
    cin>>modifier;
    cin>>operand1;
    cin>>operand2;
    
    cout << "m-01-02 : " << modifier << "-" << operand1 << "-" << operand2 <<endl;
    //logic
    if (modifier == "+")
    {
        result = operand1 + operand2;
    }
    else if (modifier == "-")
    {
        result = operand1 - operand2;
    }
    else if (modifier == "*")
    {
        result = operand1 * operand2;
    }
    else if (modifier == "/")
    {
        result = operand1 / operand2;
    }
    else
    {
    }
    
    cout<<"Result is : "<<result<<endl;
    keep_window_alive();
    return 0;
}