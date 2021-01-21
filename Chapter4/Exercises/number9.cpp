//  Purpose/Problem     :   how many grains for 64 square ? 
//  Requirements        :
//  UI design           :   input prompt    :  how many square do you need ? 
//                          output prompt   :  grains for ... square is ...
//                          error prompt    :
//  Logic               :   
//  Data design         :
//  Conclusion          : largest number of grains i can calculate using integer is : 1.073.741.842 . its wrong answer hahahaa
//                          i was wrong abot reading the question

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {

    double square = 1;
    double square_ask = 0;
    double grain = 0;

    cout<<"how many square do you need : ";
    cin>>square_ask;

    for ( grain = 1; square < square_ask; grain += grain, ++square)
    {
        cout<<"square is : "<<square<<" - grain is : "<<grain<<endl;
    }

    cout<<"for about "<<square<<" square,  we need "<<grain<<" grain"<<endl;
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