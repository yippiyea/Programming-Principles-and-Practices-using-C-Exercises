//  Purpose/Problem     :   always prints median every loop
//  Requirements        :   we need size(), and 2
//  UI design           :   input prompt    :   enter a value : 
//                          output prompt   :   the median is :
//                          error prompt    :   
//  Logic               :   
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
#include "../std_lib_facilities.h"
using namespace std;

int main() {
    
    //  declare container
    vector<double> values;

    //  loop and
    //  get input to container and
    cout<<"Enter a value (non numeric to exit): ";
    for(double temp; cin>>temp;)
    {
        values.push_back(temp);
        //  display the container elements
        for (auto &&i : values)
        {
            cout<<"values is "<<i<<endl;
        }

        //  sort the elements
        sort(values);

        //  display the sorted elements
        for (auto &&i : values)
        {
            cout<<"sorted values is : " << i <<endl;
        }
        
        //  get the median and display
        cout<<"The median is : "<<values[values.size()/2]<<endl;
        
        cout<<"Enter a value (non numeric to exit): ";
    }


    keep_window_alive();
    return 0;
}