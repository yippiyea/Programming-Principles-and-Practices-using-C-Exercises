//  Make it Correct
//  Make it Simple
//  Make it Efficient


//  Purpose/Problem     :   
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   : 
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

#include <iostream>
#include <algorithm>
#include "../utilities.h"
#include "../findmode.h"


using namespace std;

int main() {

    vector <int> randomnumbers = generateRandomNumbers(10);
    print_vector_int(randomnumbers); 
    cout<<"min is : "<<*    min_element(randomnumbers.begin(), randomnumbers.end())<<endl; 
    cout<<"max is : "<<*    max_element(randomnumbers.begin(), randomnumbers.end())<<endl; 

    cout<<"get min : " << getmin(randomnumbers)<<endl;
    cout<<"get max : "<<getmax(randomnumbers)<<endl;
    
    keep_window_alive();
    return 0;
}