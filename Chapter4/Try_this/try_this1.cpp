//  Purpose/Problem     :   convert user input : yen, euros, pounds, into dollar 
//  Requirements        :   we need conversion rates
//  UI design           :   input prompt    :   please enter your money in followed by the unit (Y,E,P):
//                          output prompt   :   'input' yen is 'output'dollar  or
//                                              'input' eorus is 'output'dollar or
//                                              'input' pounds is 'output'dollar
//                          error prompt    :   'sorry the program doesnt understand you input'
//  Logic               :   get user input in each of currency and divide by its conversion rate to dollar
//                          e.g 1 dollar is 13,325 rupiah. so if user input 20.000 then we will divide it by
//                          13,325 rupiah.
//                          user input/1 dollar corresponding conversion rate
//  Data design         :   double length
//                          constexpr double yen_per_dollar, euros_per_dollar, pounds_per_dollar 
//                          char unit (for user input flag)
//                          double result

// Conclusion           :   I think this program is more simple, faster (cz consume less memory), clearer
//                          and answer the problem with correct program design

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    constexpr double yen_per_dollar = 113.00454;
    constexpr double euros_per_dollar = 0.87367;
    constexpr double pounds_per_dollar = 0.77503;
    double length = 1.0;
    char unit = ' ';

    cout<<"Please enter your money : ";
    cin>>length;
    cout<<"\nPlease enter the currency Y(Yen), E(Euros) P(Pounds): ";
    cin>>unit;

    if (unit == 'Y')
    {
        cout<< length << " Yen == "<< length / yen_per_dollar << " dollar\n";
    }
    else if (unit == 'E')
    {
        cout<< length << " Euros == "<< length / euros_per_dollar << " dollar\n";
    }
    else if(unit == 'P')
    {
        cout<< length << " Pounds == "<< length / pounds_per_dollar << " dollar\n";
    }
    else{
        cout<<"Sorry program doesnt understand Your input "<<endl;
    }

    keep_window_alive();
    return 0;
}