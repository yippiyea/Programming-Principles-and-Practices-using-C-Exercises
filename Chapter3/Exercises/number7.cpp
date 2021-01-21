//  Purpose     :   sorting basic program
    //  Plan    :   -   get three string inputs from the user
    //              -   process it to display "numerical sequence separated by commas"
    //              -   e.g user input 10 4 6 display 4 6 10
    //              -       user input 4 5 4 display 4 4 5
    //              -   note : your are not allowed to use arrays and advance logic
   //               -    except basic logic

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {    

    string val1 {0};
    string val2 {0};
    string val3 {0};

    cout<<"Please enter first value : ";
    while (cin>>val1) {
        cout<<"Please enter second value : ";
        cin>>val2;
        cout<<"Please enter third value : ";
        cin>>val3;

        //  logic
        string temp{0};
        //step1
        if (val2 < val1)
        {
            temp = val1;
            val1 = val2;
            val2 = temp;
        }
        
        //step2
        if (val3 < val1)
        {
            temp = val1;
            val1 = val3;
            val3 = temp;
        }
        
        //step3
        if (val3 < val2)
        {
            temp = val2;
            val2 = val3;
            val3 = temp;
        }
            
        cout<<"Result : "<<val1<<"-"<<val2<<"-"<<val3<<"\n";
        cout<<"Please enter first value : ";
    }
    
    keep_window_alive();
    return 0;
}