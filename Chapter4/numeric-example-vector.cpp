//  Purpose/Problem     :   Grow vector, and use the value to find average or mean and median
//  Requirements        :   
//  UI design           :   input prompt    :   enter a floating value
//                          output prompt   :   the values entered are : ..,..,..
//                                              the average is : 
//                                              the median is :
//                          error prompt    :
//  Logic               :   average : sum of all elements of vector / length of vector 
//  Data design         :   
//  Conclusion          :

#include <iostream>
#include "utilities.h"
#include "std_lib_facilities.h"
using namespace std;

int main() {

    vector<double> temps;
    cout<<"enter a floating value (z to exit): ";
    for(double temp; cin>>temp;)
    {
        if (temp == 'z') 
        {
            break;
        }
        temps.push_back(temp);  
        cout<<"\nenter a floating value (z to exit): ";
    }
    cout<<"The values entered are : "<<endl;
    for (size_t i = 0; i < temps.size(); i++)
    {
        cout<<i<<" is : "<<temps[i]<<endl;
    }

    // finding average
    double sum = 0;
    for (size_t i = 0; i < temps.size(); i++)
    {
        sum += temps[i];
    }
    cout<<"Average is : "<< sum/temps.size()<<endl;
    
    // finding median
    
    sort(temps);    // sort it 
    cout<<"Sorted values are : "<<endl;
    for (size_t i = 0; i < temps.size(); i++)
    {
        cout<<i<<" is : "<<temps[i]<<endl;
    }
    cout<<"Median is : "<< temps[temps.size()/2]<<endl;

    keep_window_alive();
    return 0;
}