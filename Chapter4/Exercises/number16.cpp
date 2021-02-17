//  Make it Correct
//  Make it Simple
//  Make it Efficient


//  Purpose/Problem     :   
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   :   Generating 10 random numbers...
                                                // list the numbers
                                                // the mode is : 

//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

// find the mode
    

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {  

    // generating 10 random numbers
    vector<int> randomnumbers;

    srand (time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        randomnumbers.push_back(rand() % 100 + 1);
    }
    
    // list the 10 random numbers
    print_vector_int(randomnumbers);
    
    cout<<"the mode is "<<1<<endl;

    keep_window_alive();
    return 0;
}