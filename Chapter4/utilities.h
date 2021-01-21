#include <iostream>
#include <vector>
#include <ctime>
#include <unistd.h>

using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please press [1] or [Ctrl+z] to terminate program :";
    cin>>ch;
}

inline void print_vector(vector<double> v, vector<string> u)
{   
    cout<<"PRINTING VALUES OF V"<<endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<"v["<<i<<"] is ["<<v[i]<<"] ---\t unit is : "<<u[i]<<endl;
    }
    cout<<"END PRINTING VALUES OF V"<<endl;
}

inline void print_vector_string(vector <string> v)
{
    cout<<"PRINTING VALUES OF V"<<endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<"v["<<i<<"] is ["<<v[i]<<"]"<<endl;
    }
    cout<<"END PRINTING VALUES OF V"<<endl;
}
inline void print_vector_int(vector <int> v)
{
    cout<<"PRINTING VALUES OF V"<<endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<"v["<<i<<"] is ["<<v[i]<<"]"<<endl;
    }
    cout<<"END PRINTING VALUES OF V"<<endl;
}
inline int random_number_generator(int seeder, vector <int> container)
{
    size_t j = 0;
    size_t com_random_answer = 0;
    // cout<<"size of container is : "<<container.size()<<endl;
    for (size_t i = 0; i < seeder; i++)
    {   
        // cout<<i<< " - "<<container[j] <<endl;
        ++j;
        if (j >= container.size())
        {
            j = 0;
        }        
    }

    com_random_answer = container[j];
    return com_random_answer;
}

// i dont need this for now because i use what is suppesed to do for now
// that is provide a random value from just using vector, and that random value can be predicted

// but this is used not form random number generator, but for com name generator

    string gen_random(const int len) {
    
    string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) * getpid());

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    
    
    return tmp_s;

}