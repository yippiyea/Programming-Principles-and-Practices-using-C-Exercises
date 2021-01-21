//  Purpose/Problem     :   Write a program that reads two integer each time around the loop and directly
//                          prints them, 
//                          display smaller and larger number
//                          display "the numbers are equal" if the numbers are equal
//                          uses double
//                          display "the numbers are almost equal" if the numbers differ by less than 100
//                          change input to read only one double input, 
//                          display the smallest or largest so far after the input number

//                          add unit 
//                          get user input
//                          add unit conversion constant 

//                          reject values without units or illegeal units
//  Requirements        :
//  UI design           :   input prompt    :   enter a value;
//                          output prompt   :   e.g : (value entered) 5 is the smallest value so far
//                          error prompt    :
//  Logic               :  1 get user input
//                         2 save every input in container
//                         3 search for lowest value in container and assign it to smallest variable
//                         4 search for largest value in container and assign it to largest variable
//                         5 write the value entered
//                         6 (compare)if its the largest so far append "The largest so far"
//                         7 (compare)if its the smallest so far append "The smallest so far"

//  New Logic           :   1 get user inpust
//                          2 search for lowest value in container and assign it to smallest variable
//                          3 search for largest value in container and assign it to largest variable
//                          4 compare to user input
//                          5 write the value entered
//                          6 if its the largest so far append "The largest so far"
//                          7 if its the smallest so far append "The smallest so far"

//  Data design         :   use vector to keep track of all entered input
//                          use two variables to keep track smallest and largest value
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    
    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;

    double num;
    string unit;
    vector<double> values;
    vector<string> units;

    // THIS IS ALGORITHM 1
    cout<<"Enter a value : ";
    //  step 1  get user input
    while(cin>>num) 
    {
        cin>>unit;
        if (unit == "cm" || unit == "m" || unit == "ft" || unit == "in")
        {
            units.push_back(unit);
        }
        else
        {
            cout<<"Please enter a correct unit (value entered : "<<unit<<") "<<endl;
        }
        
        double smallest_temp;
        double largest_temp;

        if (num == '|') break;
        //  step 2  put input to container
        values.push_back(num);
        
        print_vector(values, units);
        //  step 3 find lowest value then save it to smallest
        smallest_temp = *min_element(begin(values), end(values));
        //  step 4 find the largest then save it to largest
        largest_temp = *max_element(begin(values), end(values));
        //  step 5  write the value entered
        cout<<" value entered : "<<num <<" smallest : "<< smallest_temp<< " largest : "<< largest_temp<<endl;
        //  step 6  compare with the smallest then display "smallest so fat"
        if (num <= smallest_temp)
        {
            cout<<"it is the smallest number so far "<< endl;
        }
        //  step 7   compare with the largest then display "largest so far"
        if (num >= largest_temp)
        {
            cout<<"it is the largest number so far "<<endl;
        }
        cout<<"enter a value : ";
    }
    keep_window_alive();
    return 0;
}