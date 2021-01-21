//  Purpose/Problem     :   Write out table of characters with their corresponding integer value
//  Requirements        :   I need loop to display each of characters
//  UI design           :   input prompt    :   no
//                          output prompt   :   a -> 97 ans so on
//                          error prompt    :
//  Logic               :   to process to the next loop, i need to increment the counter
//                          to end the loop i need to check if the current character is < than z
//  Data design         :
//  conclusion          :   Analyze and tryout the problem first and after you've found the solution    
//                          write the real code !

#include <iostream>
#include "../utilities.h"
using namespace std;

int main() {

    //cout<<"a is " << 'z' <<endl;   
    cout<<char(97)<<endl; 
    if ('y' > 'z') 
    {
        cout<<'y'<<"is bigger than "<< 'z'<<endl;
    }else
    {
        cout<<'y'<<"is lesser than "<< 'z'<<endl;
    }
    
    int counter = 256;

     while(char('a' + counter) <= 'z')
    {
        cout<<char('a' + counter)<<"\t"<<counter<<endl;
        ++counter;
    } 
    
    keep_window_alive();
    return 0;
}