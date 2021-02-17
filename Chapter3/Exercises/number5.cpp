//  Purpose :   reporting floaing point operations to the user
    //  Plan    :   -   prompt input 2 floating point numbers to user
    //              -   display :   
    //                  -   smaller
    //                  -   larger
    //                  -   sum
    //                  -   difference
    //                  -   product
    //                  -   ratio

#include <iostream>
#include "../utilities.h"
#include "../std_lib_facilities.h"
using namespace std;

int main() {

    double val1{0};    
    double val2{0};
    
    cout<<"Please enter value1 : ";
    while (cin>>val1)
    {
        cout<<"\nPlease enter value2 : ";
        cin>>val2;
        // process input
        // smaller
        if (val1 < val2) 
        {
            cout<<"val1|"<<val1<<"| is smaller than val2|"<<val2<<"| \n";
        }
        else
        {
            cout<<"val2|"<<val2<<"| is smaller than val1|"<<val1<<"| \n";
        }

        // bigger
        if (val1 > val2)
        {
            cout<<"val1 |"<<val1<<"| is bigger than val2 |"<<val2<<"| \n";
        }
        else
        {
            cout<<"val2 |"<<val2<<"| is bigger than val1 |"<<val1<<"| \n";
        }

        double result{0};
        //sum
        result = val1 + val2;
        cout<<"sum of val1|"<<val1<<"| and val2|"<<val2<<"| is "<<result<<"\n";

        //difference
        result = val1 - val2;
        cout<<"difference between val1|"<<val1<<"| and val2|"<<val2<<"| is "<<result<<"\n";

        //product
        result = val1 * val2;
        cout<<"product of val1|"<<val1<<"| and val2|"<<val2<<"| is "<<result<<"\n";

        //ratio
        result = val1 / val2;
        cout<<"ration between val1|"<<val1<<"| and val2|"<<val2<<"| is "<<result<<"\n";

        cout<<"------------------------------------\n";
        cout<<"\nPlease enter value1 : ";
    }
    

    keep_window_alive();
    return 0;
}