//  Purpose/Problem     :   write out bleep to the word that i dont lke 
//  Requirements        :   list of the words the i dont like
//  UI design           :   input prompt    :   enter a word (ctrl + z to end) :  
//                          output prompt   :   Here are your words :
//                                              ...
//                                              ...
//                                              ...
//                                              bleep
//                                              ...
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
#include "../std_lib_facilities.h"
using namespace std;

int main() {
    vector<string>words;
    string disliked_1 = "lazy";
    string disliked_2 = "greed";
    string disliked_3 = "complex";
    
    cout<<"enter a word (ctrl + z to end) : ";
    for(string temp; cin>>temp;)
    {
        words.push_back(temp);
        cout<<"enter a word (ctrl + z to end) : ";
    }
    cout<<"Your words are : "<<endl;
    for (size_t i = 0; i < words.size(); i++)
    {
        if(words[i] != disliked_1 && words[i] != disliked_2 && words[i] != disliked_3)
        {
            cout<<words[i]<<endl;
        }
        else
        {
            cout<<"BLEEP"<<endl;
        }
    }
    
       
    keep_window_alive();
    return 0;
}