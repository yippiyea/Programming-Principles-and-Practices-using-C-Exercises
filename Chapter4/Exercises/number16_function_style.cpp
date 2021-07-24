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
#include <unordered_map>
#include <utility>
#include "../utilities.h"
#include "../findmode.h"
using namespace std;

int main() {  
    vector<int> randomnumbers = generateRandomNumbers(10);
    findMode(randomnumbers);
    return 0;
}