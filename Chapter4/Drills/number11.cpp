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

//                          print smallest
//                          print number of values
//                          print sum of values based on unit so : ...m, ...cm, etcs

//                          reject values without units or illegeal units

//                          convert every values in container into meters 
//                          print those new converted values in meters

//                          sort them asc then print
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
//  Conclusion          :   WOW.. today i got really usefull evidence. its hard to track nan type
//                          i have on output. i tried to see carefully where the bug was at
//                          but i cant find it. then i try to initialize the variable before i use it
//                          then ?  the problem gone away. so the message is : always initialize your
//                          variable if you dont wanna have headache to find an obscure bug
//                          thankyou master Bjarne !

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

    double num = 0;
    string unit = "";
    double smallest_temp;
    double largest_temp;
    vector<double> values;
    vector<string> units;
    vector<double> values_in_meters;

    double cm_total = 0;
    double m_total = 0;
    double inch_total = 0;
    double ft_total = 0;

    // THIS IS ALGORITHM 1
    cout<<"Enter a value : ";
    //  step 1  get user input
    while(cin>>num) 
    {
        cin>>unit;
        if (unit == "cm" || unit == "m" || unit == "ft" || unit == "inch")
        {
            units.push_back(unit);
        }
        else
        {
            cout<<"Please enter a correct unit (value entered : "<<unit<<") "<<endl;
        }
        


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
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Smallest is : "<<smallest_temp<<endl;
    cout<<"Largest is : "<<largest_temp<<endl;
    //  find number of values 
    cout<<"Number of values is : "<<values.size()<<endl;
    //  find sum of values per unit


    for (size_t i = 0; i < units.size(); i++)
    {   
        if (units[i] == "cm") 
        {
            cm_total += values[i];
        }
        else if (units[i] == "inch")
        {
            inch_total += values[i];
            //cout<<"inch total is "<< inch_total<<"value is : "<<values[i]<<endl;
        }
        else if (units[i] == "m")
        {
            m_total += values[i];
        }

        else if (units[i] == "ft")
        {
            ft_total += values[i];
            //cout<<"value of ft is "<<values[i]<<"ft_total is : "<<ft_total<<endl;
        }
        else 
        {
            cout<<"unit is not correct"<<endl;
        }
    }
    
    cout<<"Sum of cm is : "<<cm_total<<endl;
    cout<<"Sum of m is : "<<m_total<<endl;
    cout<<"Sum of inch is : "<<inch_total<<endl;
    cout<<"Sum of ft is : "<<ft_total<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    
    // converting every values into meters
    double temp = 0;
    for (size_t i = 0; i < units.size(); i++)
    {
        if (units[i] == "cm")
        {
            temp = values[i] / cm_per_m;
            values_in_meters.push_back(temp);
        }
        else if (units[i] == "m")
        {
            values_in_meters.push_back(values[i]);
        }
        else if (units[i] == "inch")
        {
            temp = values[i] * cm_per_in;
            temp = temp / cm_per_m;
            values_in_meters.push_back(temp);
        }
        else if (units[i] == "ft")
        {
            temp = values[i] * in_per_ft;
            temp = temp * cm_per_in;
            temp = temp / cm_per_m;
            values_in_meters.push_back(temp);
        }
        else 
        {
            cout<<"no units like this"<<endl;
        }

    }
    
    print_vector(values, units);
    // printing every converted values
/*     for (size_t i = 0; i < values_in_meters.size(); i++)
    {
        cout<<"value is : "<<values_in_meters[i]<<"m"<<endl;
    } */
    
    //  sort it asc then print
    sort(begin(values_in_meters), end(values_in_meters));
    for (size_t i = 0; i < values_in_meters.size(); i++)
    {
        cout<<"value is : "<<values_in_meters[i]<<"m"<<endl;
    }
    keep_window_alive();
    return 0;
}

























