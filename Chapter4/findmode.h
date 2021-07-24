#include <iostream>
#include <unordered_map>
#include <utility>
#include <chrono>

using namespace std;
using namespace std::chrono;



// output will be just
    // findMode(randomnumber)  e.g 1,4,3,5,6,4,3,2 will display : 3 and 4

// user provides 
    // random number
    // drn variable

// mode algortihm
// 	create distinct number
// 		createDistincNumber (randomnumber) return drn
inline vector<int> createDistincNumber(vector<int> randomnumbers) {
    bool no_same_number_found = false;
    vector<int> distinct_random_numbers;

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
            // cout<<"save ["<<randomnumbers[i]<<"] to drn"<<endl;
            distinct_random_numbers.push_back(randomnumbers[i]);
        }
            // if current i not found in drn. add it to drn
        no_same_number_found = false;
    }

    return distinct_random_numbers;
}

// 	set up map towards drn (this is utility function for findMode)
// 		setUpMappin(drn) maybe passing a reference
// i will prove map first and the pointer, 
// then i will make the drn become key of map
// mode is out mapping
inline unordered_map <int, int> setUpMapping(vector<int> drn,  unordered_map <int, int> mode) {
        // make the value of dnr become key of array mode.
    for (size_t i = 0; i < drn.size(); i++)
    {
        mode[drn[i]] = 0;
    }

    // printing key value map
    //  cout<<"size is : " <<mode.size()<<endl;
    for (auto const& pair: mode) {
    //    cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
    return mode;
}

// 	count the mode 
// 	countTheMode(mapping, randomnumber) return mapping or maybe pass a reference of map
// it will loop each key of map towards randomnumber, if it finds the same
// increment the current value
inline unordered_map <int, int> countTheMode(vector<int> randomnumbers, unordered_map <int, int> mode) {
    // loop each map key towards randomnumbers
    // if current (map key) is the same like current randomnumber, increment current map value
    // OUTER IS LOOPER, INNER IS TOWARDS
    for (auto&  pair: mode) {
        for (size_t j= 0; j < randomnumbers.size(); j++)
        {
            if (pair.first == randomnumbers[j]) ++pair.second;
            // cout<<"key is : "<< pair.first <<" conmpared to : " <<randomnumbers[j]<<endl;
        }
        
    }

    for (auto& pair : mode) 
    {
        // cout <<"key["<<pair.first<<"] -- value ["<<pair.second<<"] "<<endl;
    }

    return mode;
}

// 	count the max mode 
// 		copy mapping value to distinc values
// 			copymapValueToDistincValue(mapping, distinct_values)
//  it return distinc_value vector, so save it to vector distinc_values
inline vector<int> copyMapValueToDistincValue(unordered_map <int, int> mode) {
    vector<int> dv;
     for (auto it = mode.cbegin(); it != mode.cend(); ++it) {
            // std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
            dv.push_back((*it).second);
    }
    return dv;

}

// 		count the max
// 			getMax(distinc_values) return max
inline int getMax(vector<int> distinc_values) {
    int max = 0;
    for (size_t i = 0; i < distinc_values.size(); i++)
    {   
        // check save index
        if ((i + 1) == distinc_values.size())
        {
            // cout<<"OUT OF INDEX"<<endl;
            break;
        }
   

        
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
        
    }
    return max;
}

// 	get the key of max value
// 		getHowManyMode(mapping, max) return array of mode 
inline vector<int> getHowManyMode(int max, unordered_map <int, int> mode) {
        vector<int> mode_numbers;
        for (auto it = mode.cbegin(); it != mode.cend(); ++it) {
        // std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
        if ((*it).second == max) mode_numbers.push_back((*it).first);
    }

    return mode_numbers;
}

inline void modenumbers(vector <int> m, size_t max) {
     if (m.size() > 1)
    {   
        cout<<"we have "<<m.size()<<" mode "<<endl;
        cout<< "THE NUMBERS THAT HAVE WIN THE MODE ARE : "<<endl;
        for (size_t i = 0; i < m.size(); i++)
        {
            cout<<" "<<i + 1<<". "<<m[i]<<" and it appeared :  " << max <<" times"<<endl;
        }
        
    }
    else
    {
        cout<<"we have "<<m.size()<<" mode "<<endl;
        cout<<"THE NUMBER THAT WIN THE MODE IS : "<<endl;
        cout<<" "<<1<<". "<<m[0]<<" and it appeared :  " << max <<" times"<<endl;
    }
    
    keep_window_alive();
}



// getmax from a vector
int getmax(vector<int> v) {
    int max = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] > max ) max = v[i];
    }
    return max;
}
// get min from a vector
int getmin (vector<int> v) {
    double min = getmax(v);
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] < min) min = v[i];
    }
    return min;
}

    //  if next > max then max = next
double getmax(double * arr, size_t size) {
    double max = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}


    //  min = getmax
    //  if next < min then min = next
double getmin(double * arr, size_t size) {
    double min = getmax(arr, size);
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min ) min = arr[i];
    }
    return min;
}

inline vector<int> generateRandomNumbers(size_t size){
    vector<int> randomnumbers;
    srand (time(NULL));
    for (size_t i = 0; i < size; i++)
    {
        randomnumbers.push_back(rand() % 10 + 1);
    }
    return randomnumbers;
}

// make it as one unit function just call 1 function
inline void findMode(vector<int> randomnumbers) {

    // cout<<"GENERATING RANDOM NUMBERS"<<endl;
    // print_vector_int(randomnumbers);
    // cout<<"END GENERATING RANDOM NUMBERS"<<endl;

    // cout<<"CREATE DISTINCT NUMBERS"<<endl;
    vector<int> distinct_random_numbers = createDistincNumber(randomnumbers);
    // print_vector_int(distinct_random_numbers);
    // cout<<"END CREATE DISTINCT NUMBERS"<<endl;

    // cout<<"CREATE MAPPPING"<<endl;
    unordered_map <int, int> mode;
    mode = setUpMapping(distinct_random_numbers,  mode);
    // cout<<"END CREATE MAPPPING"<<endl;

    // cout<<"COUNT THE MODE" <<endl;
    mode = countTheMode(randomnumbers, mode);
    // cout<<"END COUNT THE MODE" <<endl;

    // cout<<"COPY MAP VALUE TO DISTINCT VALUE"<<endl;
    vector<int> distinc_values = copyMapValueToDistincValue(mode);
    // print_vector_int(distinc_values);
    // cout<<"END COPY MAP VALUE TO DISTINCT VALUE"<<endl;

    // cout<<"GET MAX "<<endl;
    int max = getMax(distinc_values);
    // cout<<"MAX IS : " <<max<<endl;
    // cout<<"END GET MAX "<<endl;
    
    // cout<<"GET HOW MANY MODE"<<endl;
    vector<int> mode_numbers = getHowManyMode(max, mode);
    // print_vector_int(mode_numbers);
    // cout<<"END GET HOW MANY MODE"<<endl;
    
    // cout<<"GET HOW MANY NUMBERS"<<endl;
    modenumbers(mode_numbers, max);
    // cout<<"GET HOW MANY NUMBERS"<<endl;s
}

// save all the function in one file and call it from here



//////////////////////////
// from internet
#define N 100
void mode (double x[],int n)
{
    int y[N]={0};//Sets all arrays equal to 0
    int i,j,k,m,cnt,max=0,no_mode=0,mode_cnt=0;
    double num;

    for(k=0; k<n; k++)//Loop to count an array from left to right
    {
        cnt=0;
        num=x[k];//Num will equal the value of array x[k]

        for(i=k; i<n; i++)//Nested loop to search for a value equal to x[k]
        {   
            if(num==x[i])
            cnt++;//if a number is found that is equal to x[k] count will go up by one
        }
        y[k]=cnt;//The array y[k] is initialized the value of whatever count is after the nested loop
        if(cnt>=2)//If cnt is greater or equal to two then there must be atleast one mode, so no_mode goes up by one
        {
            no_mode++;
        }
    }
    
    if(no_mode==0)//after the for loops have excuted and still no_mode hasn't been incremented, there mustn't be a mode
    {
        //Print there in no mode and return control to main
        cout<<"This data set has no modes\n"<<endl;
        return;
    }


    for(j=0; j<n; j++)
    //A loop to find the highest number in the array
    {   
        if(y[j]>max)
        max=y[j];
    }

    for(m=0; m<n; m++)//This loop finds how many modes there are in the data set
    {
        //If the max is equal to y[m] then that is a mode and mode_cnt is incremeted by one
        if(max==y[m])
            mode_cnt++;
    }

    cout<<"This data set has "<<mode_cnt<<" mode(s)"<<endl;//Prints out how many modes there are
        for(m=0; m<n; m++)
        {
            if(max==y[m])//If max is equal to y[m] then the same sub set of array x[] is the actual mode
            {

                cout<<"The value "<<x[m]<<" appeared "<<y[m]<<" times in the data set\n"<<endl;
            }
        }
    return;
}

double *  generateRandomNumbersArray(double * randomnumbers,size_t size) {
    srand (time(NULL));
    for (size_t i = 0; i < size; i++)
    {
        randomnumbers[i] = (rand() % 10) + 1;
    }
    return randomnumbers;
}


	
  
