//  Purpose/Problem     :   write a program that knows how many square there for number of grains
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   : 
//                          error prompt    :
//  Logic               :   1g = 1s, 2g = 2s, 4g = 3s, 8g = 4s, and so on
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {
    
    
    int square = 0;
    int grain_ask = 0;
    int grain = 0;

    cout<<"how much grain is that : ";
    cin>>grain_ask;

    for ( grain = 1; grain <= grain_ask; grain += grain, ++square)
    {
        cout<<"grain is : "<<grain<<" - square is : "<<square<<endl;
    }

    cout<<"for about "<<grain<<" grain,  we need "<<square<<" square"<<endl;
/*     if (grain < grain_ask)
    {
       // ++square;
       cout<<"it works "<<endl;
        grain += grain;
    }
    ++square; */
    

    
    keep_window_alive();
    return 0;
}