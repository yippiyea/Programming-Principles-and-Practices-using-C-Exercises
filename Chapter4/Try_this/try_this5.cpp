//  Purpose/Problem     :   Implement square function by using repeated addition
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

int square(int x) {
    return x * x;
}
int squareUsingAddition(int x) {
    int r = x;

    // add x to x times
    // e.g add 6 to 6 times
    for (size_t i = 1; i < x; i++)
    {
        r = r + x;
    }
    return r;
}
int main() {
    for (size_t i = 0; i < 10; i++)
    {
        cout<<" square("<<i<<") is :\t"<<squareUsingAddition(i)<<endl;
    }
        
    keep_window_alive();
    return 0;
}