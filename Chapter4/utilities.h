#include <iostream>
#include <vector>
#include <ctime>
#include <unistd.h>

using namespace std;

inline void printline(string s)
{
    cout<<s<<endl;
}

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

inline void print_vector_char(vector <char> v)
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

inline bool isprimes(vector<int> sources)
{
    cout<<"is primes works"<<endl;
    bool isprimes = true;
    vector<int> primenumbers;
    
    // initialize prime numbers
    primenumbers.push_back(2);
    primenumbers.push_back(3);
    primenumbers.push_back(5);
    primenumbers.push_back(7);

    primenumbers.push_back(11);
    primenumbers.push_back(13);
    primenumbers.push_back(17);
    primenumbers.push_back(19);

    primenumbers.push_back(23);
    primenumbers.push_back(29);

    primenumbers.push_back(31);
    primenumbers.push_back(37);

    primenumbers.push_back(41);
    primenumbers.push_back(43);
    primenumbers.push_back(47);

    primenumbers.push_back(53);
    primenumbers.push_back(59);

    primenumbers.push_back(61);
    primenumbers.push_back(67);

    primenumbers.push_back(71);
    primenumbers.push_back(73);
    primenumbers.push_back(79);

    primenumbers.push_back(83);
    primenumbers.push_back(89);

    primenumbers.push_back(97);

    // loop thorough all elements
    for (size_t i = 0; i < sources.size(); i++)
    {
        // if i find even just 1 element not prime
        if (sources[i] != primenumbers[i])
        {
            //  set variable isprimes to false
            // cout<<"index found is : "<<i<<endl;
            isprimes = false;
        }
    }
    
    // (here means if i dont find even 1 element that is not prime) return true
    return isprimes;
}