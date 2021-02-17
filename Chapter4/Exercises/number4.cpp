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

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    char user_answer = 0;
    int number = 0;
    cout<<"type 'y' for yes, type 'n' for no"<<endl;

    cout<<"is your number less than 50 ? "<<endl;
    cin>>user_answer;
    
    //  first low direction
    if (user_answer == 'y')
    {
        cout<<"is your number less than 25 ? "<<endl;
        cin>>user_answer;

        //  second low direction
        if (user_answer == 'y')
        {
            cout<<"is your number less than 12 ?"<<endl;
            cin>>user_answer;

            //  third low direction
            if (user_answer == 'y')
            {
                cout<<"is your number less than 6 ?"<<endl;
                cin>>user_answer;

                //  fourth low direction
                if (user_answer == 'y')
                {
                    cout<<"is your number less than 3 ?"<<endl;
                    cin>>user_answer;

                    //  fifth low direction
                    if (user_answer == 'y')
                    {
                        cout<<"is your number 2?"<<endl;
                        cin>>user_answer;
                        if (user_answer == 'y')
                        {
                        cout<<"Yeah we made it, your number is 2"<<endl;
                        }
                        else
                        {
                            cout<<"Your number is : 1"<<endl;
                        }                    
                    }
                    else
                    {
                        //  between 3 - 5 upper direction
                         cout<<"is your number less than 5 ?"<<endl;
                         cin>>user_answer;

                         if (user_answer == 'y')
                         {
                             cout<<"is your number 4 ? "<<endl;
                             cin>>user_answer;

                             if (user_answer == 'y')
                             {
                                 cout<<"Yeah we made it your number is 4"<<endl;
                             }
                             else
                             {
                                 cout<<"Your number must be 3"<<endl;
                             }
                             
                         }
                         else
                         {
                             cout<<"your number must be 5"<<endl;
                         }
                         
                    }
                    
                }
                else
                {
                    //  between 6 - 11 upper direction
                    //  low_border = 6
                    //  6 : 2  = 3
                    //  6 + 3 = 9
                    cout<<"is your number less than 9 ? "<<endl;
                    cin>>user_answer;
                    if (user_answer == 'y')
                    {
                        cout<<"is your number less than 8 ?"<<endl;
                        cin>>user_answer;
                        if (user_answer == 'y')
                        {
                            cout<<"is your number 7 ? "<<endl;
                            cin>>user_answer;
                            if (user_answer == 'y')
                            {
                                cout<<"we made it, your number is 7"<<endl;
                            }
                            else
                            {
                                cout<<"your number is 6"<<endl;
                            }
                            
                        }
                        else
                        {
                            cout<<"your number is 8"<<endl;
                        }
                        
                    }
                    else
                    {
                        // low_border = 9
                        // 9 - 11
                        //  12 - 1 = 11
                        //  up_border = 11 (maybe optional to be made recursive)
                        cout<<"is your number less than 11 ?"<<endl;
                        cin>>user_answer;
                        if (user_answer == 'y')
                        {
                            cout<<"is your number 10 ? "<<endl;
                            cin>>user_answer;
                            if (user_answer == 'y')
                            {
                                cout<<"we made it, your number is 10"<<endl;
                            }
                            else
                            {
                                cout<<"your number must be 9"<<endl;
                            }
                            
                        }
                        else
                        {
                            cout<<"your number must be 11"<<endl;
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                //  12 - 24
                // low_border = 12
                // 12 - 1 = 24
                // 12 : 2 = 6
                // 12 + 6 = 18
                // 12 to 17
                cout<<"is your number less than 18 ?"<<endl;
                cin>>user_answer;
                if (user_answer == 'y')
                {

                }
            }
            
        }
    }
    else
    {
        //  first up direction
    }
    






    keep_window_alive();
    return 0;
}