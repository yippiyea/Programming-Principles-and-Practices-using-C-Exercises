//  Make it Correct
//  Make it Simple
//  Make it Efficient

//  Purpose/Problem     :   find all primes from 1 to 100
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   : 
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

vector<int> findPrime(size_t size)
{
    // cout<<"find prime"<<endl;
    vector <int> primes;
    primes.push_back(2);
    // cout<<"prime is " <<primes[0];
    // cout<<"LETSSSSSSSSSSS STARTTTTTTTTT LOOPPP"<<endl;
    //loop until 10
    for (size_t i = 2;i <= size; i++)
    {
       // cout<<"i is :  "<<i<<endl;
        
        // check divide by two 
        if (i % 2 != 0)
        {
            // cout<<"i is : "<<i<<" pushed is : "<< i <<endl;
            primes.push_back(i);
            
            // // check based on primes that have been saved
            // // if found that number ()
            for (size_t j = 0; j < primes.size(); j++)
            {   

                //  cout<<"[ " <<i<<" ] % ["<< primes[j - 1]<<"]  is : "<<i % primes[j - 1]<<endl;
                if (i % primes[j - 1] == 0   )
                {
                    // cout<<"FOUNNNNNNNNNNNNNNNNNNDDDDDDDDDDDDDD  it is   ["<<i<< "] % ["<<primes[j -1]<<"] "<<endl;
                    primes.pop_back();
                    break;
                }
            //    cout<<"prime now is "<<primes[j]<<endl;
               
            }
           
        }
        //  cout<<"NEXXXXTTTTTTTTTTTTTT LOOPPPPPPP\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ at : "<< i <<endl;
    }    
    return primes;
}



int main() {
    
    
    vector<int> primes;
    
    size_t max = 0;
    cout<<"What is max prime number ? ";
    cin>>max;
    primes = findPrime(max);
    print_vector_int(primes);
    
    if ( isprimes(primes)) 
    {
        cout<<"the numbers are prime numbers "<<endl;
    }
    else
    {
        cout<<"the numbers are not prime numbers"<<endl;
    }

    keep_window_alive();
    return 0;
}