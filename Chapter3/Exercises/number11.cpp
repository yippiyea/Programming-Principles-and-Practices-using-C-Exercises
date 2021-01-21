//  Purpose/Problem     :   money reporting program in small units
//  Requirements        :   input of : pennies, nickels, dimes, quarters, half dollars, one dollar
//  UI design           :   input prompt    :   prompt user to enter the units
//                          output prompt   :   display every units
//                                              display total in cents gramatically true
//                                              display report in dollar and cents
//                          error prompt    :
//  Logic               :
//  Data design         :

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {

    int pennies{0};
    int nickels{0};
    int dimes{0};
    int quarters{0};
    int half_dollars{0};
    double cents{0};
    double dollars{0};

    string unit_pennies;
    string unit_nickels;
    string unit_dimes;
    string unit_quarters;
    string unit_half_dollars;
    string unit_cents;
    string unit_dollars;

    cout<<"How many pennies do you have ? ";
    cin>>pennies;
    cout<<"How many nickels do you have ? ";
    cin>>nickels;
    cout<<"How many dimes do you have ? ";
    cin>>dimes;
    cout<<"How many quarters do you have ? ";
    cin>>quarters;
    cout<<"How many half_dollars do you have ? ";
    cin>>half_dollars;
    
    // determine units
    if (pennies <= 1)
    {
        unit_pennies = "penny";
    }
    else
    {
        unit_pennies = "pennies";
    }

    if (nickels <= 1) 
    {
        unit_nickels = "nickel";
    }
    else
    {
        unit_nickels = "nickles";
    }

    if (dimes <= 1)
    {
        unit_dimes = "dime";
    }
    else
    {
        unit_dimes = "dimes";
    }

    if (quarters <= 1)
    {
        unit_quarters = "quarter";
    }
    else
    {
        unit_quarters = "quarters";
    }

    if (half_dollars <= 1)
    {
        unit_half_dollars = "half dollar";
    }
    else
    {
        unit_half_dollars = "half dollars";
    }
    
    cout<<"You have [" << pennies<< "] "<< unit_pennies <<endl;
    cout<<"You have [" << nickels<< "] "<< unit_nickels <<endl;
    cout<<"You have [" << dimes<< "] "<< unit_dimes <<endl;
    cout<<"You have [" << quarters<< "] "<< unit_quarters <<endl;
    cout<<"You have [" << half_dollars<< "] "<< unit_half_dollars <<endl;

    // determine sum of cents
    cents = pennies;
    cents = cents + (nickels * 5);
    cents = cents + (dimes * 10);
    cents = cents + (quarters * 25);
    cents = cents + (half_dollars * 50);
    dollars = cents / 100;

    // determine cent and dollar units
    if (cents <= 1)
    {
        unit_cents = "cent";
    }
    else
    {
        unit_cents = "cents";
    }
    

    if(dollars <= 1)
    {
        unit_dollars = "dollar";
    }
    else
    {
        unit_dollars = "dollars";
    }
    
    cout<<"The value of all your coins is $" << dollars << " "<< unit_dollars;
    cout<<" or "<< cents <<" "<< unit_cents <<endl;


    keep_window_alive();
    return 0;
}