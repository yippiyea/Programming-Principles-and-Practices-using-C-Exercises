//  Purpose/Problem     :   convert user input : yen, euros, pounds, into dollar 
//  Requirements        :   we need conversion rates
//  UI design           :   input prompt    :   please enter your money in Yen :
//                                              please enter your money in euros :
//                                              please enter your money in pounds :
//                          output prompt   :   'input' yen is 'output'dollar
//                                              'input' euros is 'output' dollar
//                                              'input' pounds is 'output' dollar
//                          error prompt    :   'sorry the program doesnt understand you input'
//  Logic               :   get user input in each of currency and divide by its conversion rate to dollar
//                          e.g 1 dollar is 13,325 rupiah. so if user input 20.000 then we will divide it by
//                          13,325 rupiah.
//                          user input/1 dollar corresponding conversion rate
//  Data design         :   double yen, euros, pounds
//                          char c (for user input flag)
//                          double r_yen, r_euros, r_pounds
//  Conlusion           :   This Program works but not as intended design. it just uses another design
//                          it consumes more memory, not use selection as ordered.
#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    // 50 yen = 7.73787
    // 50 euros = 57.23
    // 50 pounds = 64.51358

    constexpr double yen_per_dollar = 113.00454;
    constexpr double euros_per_dollar = 0.87367;
    constexpr double pounds_per_dollar = 0.77503;
    double yen;
    double euros;
    double pounds;
    cout<<"Please enter your money in (Yen) : ";
    cin>>yen;
    cout<<"Please enter your money in (Euro) : ";
    cin>>euros;
    cout<<"Please enter your money in (Pound) : ";
    cin>>pounds;
    
    cout<<yen<<" (Yen) == " <<yen / yen_per_dollar<< " Dollar\n";
    cout<<euros<<" (Euro) == " <<euros / euros_per_dollar<< " Dollar\n";
    cout<<pounds<<" (Pound) == " <<pounds / pounds_per_dollar<< " Dollar\n";

    keep_window_alive();
    return 0;
}