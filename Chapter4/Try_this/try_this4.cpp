//  Purpose/Problem     :   Write out table of characters a-z and A-Z
//                          with their corresponding integer value in for loop 
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
    //////////////////////////////////////////////////////////////////
    for (size_t i = 256; i <= 281; i++)
    {
        cout<<char('a' + i)<<"---"<<i<<"\t"<<char(('a' + i) - 32)<<"---"<< i - 32 <<endl;
    }
    //////////////////////////////////////////////////////////////////
/*     for (size_t i = 224; i <= 248; i++)
    {
        cout<<char('a' + i)<<"\t"<<i<<endl;
    } */
    cout<<int('a')<<endl; 
    cout<<(int)'a'<<endl;   // convert char to int
    cout<<(char)97<<endl;   // convert int to char. or narrowing
    keep_window_alive();
    return 0;
}