#include <iostream>
#include <stdlib.h>
#include "../utilities.h"
#include "../findmode.h"

using namespace std;

inline void loopme(int size) {
    int x = 0;
    for (size_t i = 0; i < size; i++)
    {
        x = i;
    }
    
}

int main (void)
{
    
    size_t size = 10;
    double randomnumbers[size];
    vector <int> randomnumbersvector;
    double * randomnumbersptr = generateRandomNumbersArray(randomnumbers, size); 
    
    cout<<"THE NUMBERS ARE "<<endl;
    for (size_t i = 0; i < size; i++)
    {
        cout<<"randomnumbers["<<i<<"] is : "<<randomnumbersptr[i]<<endl;
        randomnumbersvector.push_back(randomnumbersptr[i]);
    }

    auto start = high_resolution_clock::now();
  
    // mode(randomnumbersptr, size);//send the values of x[] and n to mode function
    // findMode(randomnumbersvector);
    // loopme(2000000);
    cout<<"max is "<<getmax(randomnumbers, size)<<endl;
    cout<<"min is "<<getmin(randomnumbers, size)<<endl;
    cout<<"mode is : ";
    
    mode(randomnumbers, size);
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;    



    // cout<<"USING MY FUNCTION is : "<<endl;
    // print_vector_int(randomnumbersvector); 
    // findMode(randomnumbersvector);
    
    system ("PAUSE");
    return (0);
}

//function defintion


