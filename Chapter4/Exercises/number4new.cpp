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
    int low_up_distance = base;
    
    low_up_distance = up_border - low_border;
    cout<<"low_border is : "<<low_border<<endl;
    cout<<"up_border is : "<<up_border<<endl;
    cout<<"low up distance : "<<low_up_distance<<endl;
    low_up_distance = up_border - low_border;

    //  main question 
    cout<<"-|-is your number lesser than "<<base<<" ? "<<endl;
    cin>>user_answer;

    
    if (user_answer == 'y' || low_up_distance >= 3)
    {
    up_border = base;
    base /= 2;
    guessNumber(base, up_border, low_border);
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