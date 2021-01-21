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
    for (size_t i = 2;i <= 20; i++)
    {
       // cout<<"i is :  "<<i<<endl;
        
        // check divide by two 
        if (i % 2 != 0)
        {
            cout<<"i is : "<<i<<" pushed is : "<< i <<endl;
            primes.push_back(i);
            
            // // check based on primes that have been saved
            // // if found that number ()
            for (size_t j = 0; j < primes.size(); j++)
            {   

                 cout<<"[ " <<i<<" ] % ["<< primes[j - 1]<<"]  is : "<<i % primes[j - 1]<<endl;
                // if (i % primes[j - 1] == 0   )
                // {
                //     cout<<"FOUNNNNNNNNNNNNNNNNNNDDDDDDDDDDDDDD  it is   ["<<i<< "] % ["<<primes[j -1]<<"] "<<endl;
                //     primes.pop_back();
                //     break;
                // }
               cout<<"prime now is "<<primes[j]<<endl;
               
            }
           
        }
        //  cout<<"NEXXXXTTTTTTTTTTTTTT LOOPPPPPPP\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ at : "<< i <<endl;
    }    
    return primes;
}

bool isprimes(vector<int> sources)
{
    cout<<"is primes works"<<endl;
    bool isprimes = true;
    vector<int> primenumbers;
    
    // initialize prime numbers
    primenumbers.push_back(2);
    primenumbers.push_back(3);
    primenumbers.push_back(5);
    primenumbers.push_back(7);

    primenumbers.push_back(11);
    primenumbers.push_back(13);
    primenumbers.push_back(17);
    primenumbers.push_back(19);

    primenumbers.push_back(23);
    primenumbers.push_back(29);

    primenumbers.push_back(31);
    primenumbers.push_back(37);

    primenumbers.push_back(41);
    primenumbers.push_back(43);
    primenumbers.push_back(47);

    primenumbers.push_back(53);
    primenumbers.push_back(59);

    primenumbers.push_back(61);
    primenumbers.push_back(67);

    primenumbers.push_back(71);
    primenumbers.push_back(73);
    primenumbers.push_back(79);

    primenumbers.push_back(83);
    primenumbers.push_back(89);

    primenumbers.push_back(97);

    // loop thorough all elements
    for (size_t i = 0; i < sources.size(); i++)
    {
        // if i find even just 1 element not prime
        if (sources[i] != primenumbers[i])
        {
            //  set variable isprimes to false
            isprimes = false;
        }
    }
    
    // (here means if i dont find even 1 element that is not prime) return true
    return isprimes;
}

int main() {
    
    
    vector<int> primes;
    primes = findPrime(100);
    // print_vector_int(primes);
    
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