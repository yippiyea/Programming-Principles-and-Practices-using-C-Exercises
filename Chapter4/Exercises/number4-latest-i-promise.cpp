//  Purpose/Problem     :   
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   : 
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :   the conclusion is that : 
//                          if you master the way program flow, the way to add components intended to work together.
//                          and the really the resource is enjoy the process, start slow, make fast later,
//                          get the rhytm, have a goal or end picture, design the algorithm

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../utilities.h"
using namespace std;


int main() {

    cout<<"test"<<endl;

    bool number_found = false;
    int max_number = 100;
    int number = 0;
    char user_answer = 'n';
    int scale = 0;
    int up_border = 0;
    int low_border = 0;
    bool no_toggle = false; // indicates we have answered no
    bool found_up_and_low = false;
    int ask_counter = 1;

    number = max_number;
    scale = max_number;
    while (number_found == false)
    {    
        cout<<"ask at : "<<ask_counter<<endl;   
        // int temp_number = number / 2;
        if (no_toggle == false)
        {   
            cout<<"is the number lesser than "<<number / 2<<" ? "<<endl;
        }
        else
        {
            cout<<"is the number lesser than "<<number<<" ? "<<endl;
        }
        
        
        cin>>user_answer;
        //  if we have found up and low
        if (user_answer == 'n' && found_up_and_low == true)
        {   
            low_border = number;
            cout<<"up border "<<up_border<<endl;
            cout<<"low_border is "<<low_border<<endl;

            //  always check scale
            int half_difference = 0;
            scale = up_border - low_border;
            half_difference = scale / 2;
            cout<<"scale is : "<<scale<<endl;
            if (scale < 4)
            {
                cout<<"we will find the number soon"<<endl;
            }
            number = up_border - half_difference;
        }
        else if (user_answer == 'y' && found_up_and_low == true)
        {
            up_border = number;
            cout<<"up border "<<up_border<<endl;
            cout<<"low_border is "<<low_border<<endl;
            int half_difference = 0;
            scale = up_border - low_border;
            half_difference = scale / 2;
            cout<<"scale is : "<<scale<<endl;
            number = up_border - half_difference;
        }
        else    // this is where found_up_and_low is yet false
        {
            up_border = number;
            number /= 2;
            scale = number;
        }
        
        

        if (user_answer == 'n' && found_up_and_low == false)
        {
            low_border = number;
            cout<<"up_border is : "<<up_border<<endl;
            cout<<"low_border is "<<low_border<<endl;

            //  get difference;
            int half_difference = 0;
            scale = up_border - low_border;
            //  get the half difference
            half_difference = scale / 2;
            cout<<"scale is : "<<scale<<endl;
            cout<<"half difference is "<<half_difference<<endl;
            number = up_border - half_difference;
            no_toggle = true;
            found_up_and_low = true;
        }
        

        cout<<"up_border is : "<< up_border <<endl;
        cout<<"scale is : "<<scale<<endl;
        if (scale < 4)
        {
            int asknumber = up_border - 1;
            ++ask_counter;
            while (number_found == false)
            {
                cout<<"ask at : "<<ask_counter<<endl;
                cout<<"up_border is "<<up_border<<endl;
                cout<<"low_border is "<<low_border<<endl;

                cout<<"is the number "<<asknumber<<endl;
                cin>>user_answer;
                if (user_answer == 'y')
                {
                    number_found = true;
                }
                --asknumber;
                ++ask_counter;
            }
        }
        ++ask_counter;
    }
    cout<<"Yeahh we made it"<<endl;
    keep_window_alive();
    return 0;
}