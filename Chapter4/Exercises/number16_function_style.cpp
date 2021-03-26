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
using namespace std;



// output will be just
    // findMode(randomnumber)  e.g 1,4,3,5,6,4,3,2 will display : 3 and 4

// user provides 
    // random number
    // drn variable

// mode algortihm
// 	create distinct number
// 		createDistincNumber (randomnumber) return drn
inline vector<int> createDistincNumber(vector<int> randomnumber);

// 	set up map towards drn (this is utility function for findMode)
// 		setUpMappin(drn) maybe passing a reference
// i will prove map first and the pointer, 
// then i will make the drn become key of map
// mode is out mapping
inline void setUpMapping(vector<int> drn,  unordered_map <int, int> * pmode);

// 	count the mode 
// 	countTheMode(mapping, randomnumber) return mapping or maybe pass a reference of map
// it will loop each key of map towards randomnumber, if it finds the same
// increment the current value
inline void countTheMode(vector<int> randomnumbers, unordered_map <int, int> * pmode);

// 	count the max mode 
// 		copy mapping value to distinc values
// 			copymapValueToDistincValue(mapping, distinct_values)
//  it return distinc_value vector, so save it to vector distinc_values
inline vector<int> copyMapValueToDistincValue(unordered_map <int, int> * pmode);

// 		count the max
// 			getMax(distinc_values) return max
inline int getMax(vector<int> distinc_value);

// 	get the key of max value
// 		getHowManyMode(mapping, max) return array of mode 
inline void getHowManyMode(int max, unordered_map <int, int> * pmode);
	
  


int main() {  

    // generating 10 random numbers
    vector<int> randomnumbers;

    srand (time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        randomnumbers.push_back(rand() % 10 + 1);
    }
    
    // list the 10 random numbers
    
    // cout<<"the mode is "<<1<<endl;
    cout<<"STEP 1  : FIND ALL KIND OF NUMBERS "<<endl;

    print_vector_int(randomnumbers);
    // drn = distinc_random_numbers
    vector<int> distinct_random_numbers;
    bool no_same_number_found = false;
    for (size_t i = 0; i < randomnumbers.size(); i++)
    {
        // save first
        if (i == 0) distinct_random_numbers.push_back(randomnumbers[i]);
        // loop the distinct_rundom_number
        for (size_t j = 0; j < distinct_random_numbers.size(); j++)
        {
            if (randomnumbers[i] != distinct_random_numbers[j])
            {
                no_same_number_found = true;
            }
            else
            {
                no_same_number_found = false;
                break;
            }
            
        }
        
        if (no_same_number_found == true)
        {
            cout<<"save ["<<randomnumbers[i]<<"] to drn"<<endl;
            distinct_random_numbers.push_back(randomnumbers[i]);
        }
            // if current i not found in drn. add it to drn
        no_same_number_found = false;
    }

    print_vector_int(distinct_random_numbers);
    
    

    cout<<"STEP 2 : CREATE MAP ON THE FLY"<<endl;
    unordered_map <int, int> mode;
    unordered_map <int, int> * pmode;


    // make the value of dnr become key of array mode.
    for (size_t i = 0; i < distinct_random_numbers.size(); i++)
    {
        mode[distinct_random_numbers[i]] = 0;
    }

    // printing key value map
    for (auto const& pair: mode) {
       cout << "{" << pair.first << ": " << pair.second << "}\n";
    }


    cout<<"STEP 3 : COUNT THE MODE" <<endl;
    // loop each map key towards randomnumbers
    // if current (map key) is the same like current randomnumber, increment current map value

    // OUTER IS LOOPER, INNER IS TOWARDS
    for (auto& pair: mode) {
        for (size_t j= 0; j < randomnumbers.size(); j++)
        {
            if (pair.first == randomnumbers[j]) ++pair.second;
            // cout<<"key is : "<< pair.first <<" conmpared to : " <<randomnumbers[j]<<endl;
        }
        
    }

    for (auto const& pair : mode) 
    {
        cout <<"key["<<pair.first<<"] -- value ["<<pair.second<<"] "<<endl;
    }

    // convert to array to be able to make comparison to the next element
    vector<int> distinc_values;
    for (auto it = mode.cbegin(); it != mode.cend(); ++it) {
            std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
            distinc_values.push_back((*it).second);
    }

    print_vector_int(distinc_values);
    
    // determine the most have values in map
    int max = 0;
    for (size_t i = 0; i < distinc_values.size(); i++)
    {   
        // check save index
        if ((i + 1) == distinc_values.size())
        {
            // cout<<"OUT OF INDEX"<<endl;
            break;
        }
        cout<<"current is : "<<distinc_values[i]<<"   next is "<< distinc_values[i + 1]<<endl;

        
        if (distinc_values[i] > distinc_values[i + 1])
        {
            if (distinc_values[i] > max)
            {
                max = distinc_values[i];
            }
        }
        else
        {
            if (distinc_values[i + 1] > max)
            {
                max = distinc_values[i + 1];
            }
        }
        cout<<"max now is : "<<max<<endl;
        
    }
    cout<<"MAX IS : " <<max<<endl;
    
    // temukan berapa banyak angka yang menjadi mode
    vector<int> mode_numbers;
    for (auto it = mode.cbegin(); it != mode.cend(); ++it) {
        // std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
        if ((*it).second == max) mode_numbers.push_back((*it).first);
    }

    print_vector_int(mode_numbers);
    if (mode_numbers.size() > 1)
    {
        cout<< "THE NUMBERS THAT HAVE WIN THE MODE ARE : "<<endl;
        for (size_t i = 0; i < mode_numbers.size(); i++)
        {
            cout<<" "<<i + 1<<". "<<mode_numbers[i]<<"  "<<endl;
        }
        
    }
    else
    {
        cout<<"THE NUMBER THAT WIN THE MODE IS : "<<endl;
        cout<<" "<<1<<". "<<mode_numbers[0]<<"  "<<endl;
    }
    
    keep_window_alive();
    return 0;
}