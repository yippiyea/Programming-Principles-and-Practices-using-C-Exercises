#include <iostream>
using namespace std;



inline void walk_10_steps_to_the_front() {
    cout<<"walk 10 steps to the front \n";
}

inline void walk_50_steps_to_the_left() {
    cout<< "walk 50 steps to the left\n";
}

inline void walk_200_steps_to_the_right() {
    cout<<"walk 200 steps to the right \n";
}

inline void walk_100_steps_to_the_right() {
    cout<<"walk 100 steps to the right \n";
}



inline void keep_walk_on_the_street() {
    cout<<"keep walk on the street\n";
}

inline void walk_on_the_left_street() {
    cout<<"walk on the left street\n";
}



inline void walk_100_steps_to_the_front() {
    cout<<"walk 100 steps to the front \n";
}

inline void walk_7_steps_to_the_left() {
    cout<<"walk 7 steps to the left \n";
}

inline void enter_class() {
    cout<<"enter class \n";
}

inline void go_to_school() {
    cout<<"Im going to school\n\n";
    walk_100_steps_to_the_front();
    walk_50_steps_to_the_left();
    walk_200_steps_to_the_right();
    walk_100_steps_to_the_right();
}

inline void find_my_class() {
    cout<<"I arrive at My Schoold\n\n";
    walk_100_steps_to_the_front();
    walk_7_steps_to_the_left();
    enter_class();
}

void inline keep_window_open () {
    int ch;
    cout <<"please enter a key to exit : ";
    cin>>ch;
}


int main () {

    go_to_school();
    find_my_class();7
    
    keep_window_open();
    return 0;
}