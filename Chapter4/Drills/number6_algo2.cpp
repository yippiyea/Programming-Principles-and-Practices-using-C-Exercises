//  Purpose/Problem     :   Write a program that reads two integer each time around the loop and directly
//                          prints them, 
//                          display smaller and larger number
//                          display "the numbers are equal" if the numbers are equal
//                          uses double
//                          display "the numbers are almost equal" if the numbers differ by less than 100
//                          change input to read only one double input, 
//                          display the smallest or largest so far after the input number
//  Requirements        :
//  UI design           :   input prompt    :   enter a value;
//                          output prompt   :   e.g : (value entered) 5 is the smallest value so far
//                          error prompt    :
//  Logic               :  1 get user input
//                         2 save input in container
//                         3 search for lowest value in container and assign it to smallest variable
//                         4 search for largest value in container and assign it to largest variable
//                         5 write the value entered
//                         6 (compare)if its the largest so far append "The largest so far"
//                         7 (compare)if its the smallest so far append "The smallest so far"

//  New Logic           :   1 get user input
//                          2 search for lowest value in container and assign it to smallest variable
//                          3 search for largest value in container and assign it to largest variable
//                          4 compare to user input; if it smaller than smallest or bigger than biggest
//                          5 write the value entered + it is the largest number so far
//                          6 save input in container

//  Data design         :   use vector to keep track of all entered input
//                          use two variables to keep track smallest and largest value
//  Conclusion          :   this algotihm works. and what i like from it is, it describes better the 
//                          way code is written to the algorithm it self

#include <iostream>
#include "../utilities.h"
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    
    double num;
    vector<double> values;

    // THIS IS ALGORITHM 1
    cout<<"Enter a value : ";
    //  step 1  get user input
    while(cin>>num) 
    {
        double smallest_temp;
        double largest_temp;

        if (num == '|') break;
        //  step 2  search for the lowest value
        // save the first input number
        if (values.size() < 1)
        {
            values.push_back(num);
            cout<<"This is the first number "<<endl;
        }
        else
        {
            //  step 2 find the smallest and assign it to smallest variable
            smallest_temp = *min_element(begin(values), end(values));
            //  step 3  find the largest and assign it to largest variable
            largest_temp = *max_element(begin(values), end(values));
            //  step 4  compare to user input
            cout<<"smallest is : "<<smallest_temp<<"---largest is : "<<largest_temp<<endl;
            if (num < smallest_temp)
            {
                //  step 5 
                cout<<"value entered is : "<<num<<" and is the smallest value so far "<<endl;
            }
            //  step 4  compare to user input
            else if (num > largest_temp)
            {
                //  step 5 
                cout<<"value entered is : "<<num<<" and is the largest value so far "<<endl;
            }
            else 
            {
                cout<<"value entered is : "<<num<<endl;
            }
            values.push_back(num);
        }
        
        
        // print_vector(values);
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"enter a value : ";
    }
    keep_window_alive();
    return 0;
}