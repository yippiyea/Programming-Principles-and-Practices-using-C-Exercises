//  Purpose/Problem     :   make simple calculator with spelled out feature
//  Requirements        :   input only 1 digit (means 1 - 9)
//  UI design           :   input prompt    :   1 3 + or one three + 
//                          output prompt   :   4   or  4
//                          error prompt    :   validasi 2 digit
//  Logic               :   take number 5 code, add 1 digit validation, add number 6 spelled number capability
//  Data design         :   
//  Conclusion          :

#include <iostream>
#include "../utilities.h"


using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    string spelled_operand1 = "";
    string spelled_operand2 = "";
    vector <string> digit_words;
    char op = 0;
    string word = "";
    char cmd_mode = 0;
    bool is_error = false;
    vector<string> error_messages;

    // initialize container
    digit_words.push_back("one");
    digit_words.push_back("two");
    digit_words.push_back("three");
    digit_words.push_back("four");
    digit_words.push_back("five");
    digit_words.push_back("six");
    digit_words.push_back("seven");
    digit_words.push_back("eight");
    digit_words.push_back("nine");
    digit_words.push_back("ten");

    cout<<"Enter command mode (d - digit, s - spelled, z - exit ) : ";
    cin>>cmd_mode;
    while (cmd_mode != 'z')
    {
        if (cmd_mode == 's')
        {
            cout<<"enter spelled out calculation : ";
            cin>>spelled_operand1;
            cin>>spelled_operand2;
            cin>>op;

            /////////////////////////////////////////////////////////////////////////
            cout<<"lets turn this into num and calculate it "<<endl;
            for (size_t i = 0; i < digit_words.size(); i++)
            {
                if (spelled_operand1 == digit_words[i])
                {
                    num1 = i + 1;
                }               
                if (spelled_operand2 == digit_words[i])
                {
                    num2 = i + 1;
                }
            }
        }

        if (cmd_mode == 'd')
        {
            cout<<"enter digit calculation : ";
            cin>>num1;
            cin>>num2;
            cin>>op;
            //  validate one digit input
            if (num1 > 9)
            {
                is_error = true;
                error_messages.push_back("error num1 input must be one digit");
            }
            if (num2 > 9)
            {
                is_error = true;
                error_messages.push_back("error num2 input must be one digit");
            }           
        }   
        
        //  calculation
        if (is_error == false)
        {
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
        }
        else
        {
            cout<<"oops there are errors "<<endl;
            for (size_t i = 0; i < error_messages.size(); i++)
            {
                cout<<error_messages[i]<<endl;
            }
            
        }
        
        //  clear error message
        error_messages.clear();

        cout<<"Enter command mode (d - digit, s - spelled, z - exit ) : ";
        cin>>cmd_mode;
    }

    
    keep_window_alive();
    return 0;
}