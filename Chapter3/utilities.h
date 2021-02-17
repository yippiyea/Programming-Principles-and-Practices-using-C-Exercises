#include <iostream>
using namespace std;

inline void keep_window_alive() {
    int ch;
    cout<<"Please press [1] or [Ctrl+z] to terminate program :";
    cin>>ch;
}