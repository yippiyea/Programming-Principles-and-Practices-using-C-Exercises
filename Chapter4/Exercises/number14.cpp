//  Make it Correct
//  Make it Simple
//  Make it Efficient


//  Purpose/Problem     :   modify the previous program to take an input value max and then the program should
//                          find all the primes from 1 to max
//  Requirements        :
//  UI design           :   input prompt    : enter max number : 
//                          output prompt   : the prime numbers from 1 to max are : 
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

inline vector<int>  generate_list_of_numbers(size_t max)
{
    
    const size_t starting_point = 0;
        // hold all numbers
    vector<int> numbers;

    // hold crossed status of numbers
    vector<char> crossednumbers;

    // values to be inserted 
    size_t value = 2;
    for (size_t i = starting_point; i <= max; i++, ++value)
    {
        // exit loop if value is larger than max
        if (value > max) break;
       
        numbers.push_back(value);
        // cout<<"n["<<i<<"] \t : "<< numbers[i]<<endl;
    }
    
    return numbers;
}

inline vector<char> generate_list_of_crossed(size_t max)
{
    vector<char> crossed;

    for (size_t i = 0; i < max; i++)
    {
        crossed.push_back('o');
    }
    return crossed;
}

// return index
inline int check_next_not_crossed(vector<int> n, vector <char> cn)
{
    for (size_t i = 0; i < cn.size(); i++)
    {
        if (cn[i] == 'o')
        {
            return i;
        }
    }
    
}

inline vector<char> cross_every_multiplies(vector<int> n, vector<char> cn, size_t multiplyon, size_t indexstart, bool &iscrossing)
{
    size_t countcrossing = 0;
    // indexstart += multiplyon is to pass the first index so that it wont be crossed
    // mark current index to p : means have been first index
    cn[indexstart] = 'p';
    indexstart += multiplyon;
    for (size_t i = indexstart; i <= n.size(); i += multiplyon)
    {
        // check crossed or not
        if (cn[i] == 'o')
        {
            cn[i] = 'x';
            ++countcrossing;
            // cout<<"CROSSING AT index["<<i<<"] ---- "; 
        }
        // cout<<"n["<<i<<"] \t is "<<n[i]<< "and is "<<cn[i]<<endl;
    }

    // cout<<"CROSSING ["<<countcrossing<<"] TIMES"<<endl;
    if (countcrossing < 1) 
    {
        iscrossing = false;
        // cout<<"YEAAAHHH WE MADE IT"<<endl;
    }
    else
    {
        iscrossing = true;
    }
    
    return cn;
}

inline void crossed_or_not(vector <int> n, vector <char> cn)
{
    for (size_t i = 0; i < n.size(); i++)
    {
        // cout<<"number["<<i<<"] is "<<n[i]<<"\t\t status : "<<cn[i]<<endl;
    }
    
}

inline void print_prime_numbers(vector<int> n, vector<char> cn)
{
    for (size_t i = 0; i < n.size(); i++)
    {
        if (cn[i] == 'p' || cn[i] == 'o')
        {
            // cout<<"n["<<i<<" is "<< n[i] <<endl;
        }
    }
    
}

// now im on resetting vector index
inline vector<int> resetindexvector(vector<int> source)
{
    vector <int> newindexvector;

    for (size_t i = 0; i < source.size(); i++)
    {
        // cout<<"source : "<<i<<endl;
    }
    
}

// remake prime numbers container
    // if there is p or o then save the value (the index of number)

inline vector<int> getPrimeNUmbers(vector<int> n, vector<char> cn)
{
    vector<int> primenumbers;
    for (size_t i = 0; i < cn.size(); i++)
    {
        if (cn[i] == 'p' || cn[i] == 'o')
        {
            // cout<<"its "<< i <<" | the value is "<<n[i]<<endl;
            primenumbers.push_back(n[i]);
        }
    }
    return primenumbers;
}
int main() {

    // hold all numbers
    vector<int> numbers;

    // hold crossed status of numbers
    vector<char> crossednumbers;

    // to hold the next not crossed number
    size_t indexnow = 0;

    // to keep status of crossing action
    bool iscrossing = true;


    size_t max_number = 0;

    // prompt user input
    cout<<"Enter max number of prime : ";
    cin>>max_number;

    // output value

    // generate list of numbers
    numbers = generate_list_of_numbers(max_number);
    crossednumbers = generate_list_of_crossed(numbers.size());
    
    // // print_vector_int(numbers);
    while (iscrossing == true)
    {
        indexnow = check_next_not_crossed(numbers, crossednumbers);
        crossednumbers = cross_every_multiplies(numbers, crossednumbers, numbers[indexnow], indexnow, iscrossing);
    }
    
    vector<int> primenumbers = getPrimeNUmbers(numbers, crossednumbers);


    if (isprimes(primenumbers))
    {
        cout<<"The numbers are primes"<<endl;
    }
    else
    {
        cout<<"The numbers are not primes"<<endl;
    }

    print_vector_int(primenumbers);

    keep_window_alive();
    return 0;
}