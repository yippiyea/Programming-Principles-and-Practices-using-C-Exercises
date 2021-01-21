//  Purpose/Problem     :   guess number
//  Requirements        :   <, <= and if else construct
//  UI design           :   input prompt    :   
//                          output prompt   :   q1: is your number less than 50
//                                              q2: is your number less than 25
//                                              q3: is your number less than 15
//                                              q4: is your number less than 7
//                                              q5: is your number less than 3
//                                              q6: is your number this {number}? 

//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :
//  SUCCKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKkkkkk

#include <iostream>
#include "../utilities.h"

void guessNumber(int base, int up_border, int low_border)
{
    char user_answer = 0;

    cout<<"low_border is : "<<low_border<<endl;
    cout<<"up_border is : "<<up_border<<endl;
    //  case number is 0
    if (base == 0)
    {
        cout<<"your number must be 0"<<endl;
        return;
    }  

    //  main question 
    cout<<"-|-is your number lesser than "<<base<<" ? "<<endl;
    cin>>user_answer;

    if (user_answer == 'y')
    {
    up_border = base;
    base /= 2;
    guessNumber(base, up_border, low_border);
    }

    // case user enter no and the current base is 0 - 2;
    if (user_answer == 'n')
    {
        //  6 - 11
        if(base < 12)
        {
            low_border = base;
            base = up_border;
            cout<<"up_border is : "<<up_border<<endl;
            cout<<"lower_border is : "<<low_border<<endl;
            base /= 2;
            base += 3;
            cout<<"3-5 is your lesser "<<base - 1<<" ? "<<endl;
            cin>>user_answer;
            if (user_answer == 'y')
            {
                cout<<"Your number is "<<base - 1<<endl;
                return;
            }
            else if (user_answer == 'n')
            {
                cout<<"3-5 (3,4) is your number "<<base - 2<<" ? "<<endl;
                cin>>user_answer;
                if (user_answer == 'y')
                {
                    cout<<"Your number is "<<base - 2<<endl;
                    return;
                }
                else
                {
                    cout<<"Your number must be "<<base - 3<<endl;
                }
                
            }
        }
        //  3 - 5
         if (base < 6)
        {   
            low_border = base;
            base = up_border;
            cout<<"up_border is : "<<up_border<<endl;
            cout<<"lower_border is : "<<low_border<<endl;
            cout<<"3-5 is your number "<<base - 1<<" ? "<<endl;
            cin>>user_answer;
            if (user_answer == 'y')
            {
                cout<<"Your number is "<<base - 1<<endl;
                return;
            }
            else if (user_answer == 'n')
            {
                cout<<"3-5 (3,4) is your number "<<base - 2<<" ? "<<endl;
                cin>>user_answer;
                if (user_answer == 'y')
                {
                    cout<<"Your number is "<<base - 2<<endl;
                    return;
                }
                else
                {
                    cout<<"Your number must be "<<base - 3<<endl;
                }
                
            }

            //  1-2
            if (base < 3) 
            {
                low_border = base;
                base = up_border;
                cout<<"up_border is : "<<up_border<<endl;
                cout<<"lower_border is : "<<low_border<<endl;
                cout<<"3-5 is your number "<<base - 1<<" ? "<<endl;
                cin>>user_answer;
                if (user_answer == 'y')
                {
                    cout<<"Your number is "<<base - 1<<endl;
                    return;
                }
                else if (user_answer == 'n')
                {
                    cout<<"3-5 (3,4) is your number "<<base - 2<<" ? "<<endl;
                    cin>>user_answer;
                    if (user_answer == 'y')
                    {
                        cout<<"Your number is "<<base - 2<<endl;
                        return;
                    }
                    else
                    {
                        cout<<"Your number must be "<<base - 3<<endl;
                    }
                    
                }
            }        
        }

    }
}

using namespace std;

int main() {
    char user_answer = 0;
    int number = 0;
    cout<<"type 'y' for yes, type 'n' for no"<<endl;

    guessNumber(25,0,0);

    keep_window_alive();
    return 0;
}