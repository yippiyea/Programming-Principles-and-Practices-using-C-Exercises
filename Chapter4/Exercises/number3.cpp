//  Purpose/Problem     :   print report of distance    
//  Requirements        :   print total distance
//                          smallest and greatest distance between two cities
//                          find and print the average or mean distance between two cities
//  UI design           :   input prompt    :   enter distances of roads between cities
//                          output prompt   :   the total distances of all is : 
//                                              the smallest distance between cities is
//                                              the greatest distance between cities is 
//                                              average distance between two cities
//                          error prompt    :
//  Logic               :   if there are 1 roads means there are 2 cities,
//                          if there are 2 roads means there are 3 cities,
//                          if there are 5 roads means there are 6 cities, and so on
//  Data design         :   i need vector to load roads
//                          i need cities to load cities
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
#include "../std_lib_facilities.h"
using namespace std;

int main() {
    
    vector <double> roads;
    
    cout<<"Please enter a road : ";
    for (double temp; cin>>temp;)
    {
        roads.push_back(temp);
        cout<<"Please enter a road : ";
    }

    //  display roads
    for (size_t i = 0; i < roads.size(); i++)
    {
        cout<<"Road["<<i<<"] is "<<roads[i]<<endl;
    }

    //  make cities;
    cout<<"Creating cities name"<<endl;
    vector <char> cities_name;
    for (size_t i = 0; i < roads.size() + 1; i++)
    {
        cities_name.push_back(97 + i);
    }
    
    // display the cities name
    for (size_t i = 0; i < cities_name.size(); i++)
    {
        cout<<"cities_name["<<i<<"] is "<<cities_name[i]<<endl;
    }
    
    //  create roads name
    cout<<"Creating Roads name "<<endl;
    vector <string> roads_name;
    for (size_t i = 0; i < roads.size(); i++)
    {
        //  create temporary string name
        string temp;
        temp.push_back(cities_name[i]);
        temp.push_back(cities_name[i + 1]);
        //  cout<<"temp is : "<<temp<<endl;
        roads_name.push_back(temp);
    }
    
    //  display roads name
    for (size_t i = 0; i < roads_name.size(); i++)
    {
        cout<<"roads_name["<<i<<"] is "<<roads_name[i]<<endl;
    }
    
    cout<<"-------------------------------------------------------------------"<<endl;
    //  find total distances of all roads
    double total = 0;
    for (size_t i = 0; i < roads.size(); i++)
    {
        total += roads[i];
    }
    cout<<"Total distance is : "<<total<<endl;
    
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"FINDING SMALLEST OF ROAD BETWEEN TWO NEIGHBORING CITIES"<<endl;
    //  find the smallest of road between two neighboring roads
    for (size_t i = 0; i < roads.size() - 1; i++)
    {
        //  cout<<"road["<<i<<"] is "<<roads[i]<<endl;
        //  find smallest
        cout<<"comparing road["<<roads_name[i]<<"]:["<<roads[i]<<"] and road["<<roads_name[i + 1]<<"]:[";
        cout<<roads[i + 1]<<"]"<<endl; 
        if (roads[i] < roads[i + 1])
        {
            cout<<"smallest road is road["<<roads_name[i]<<"]:["<<roads[i]<<"]"<<endl;
        }
        else
        {
            cout<<"smallest road is road["<<roads_name[i + 1]<<"]:["<<roads[i + 1]<<"]"<<endl;
        }
        

    }
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"FINDING LARGEST OF ROAD BETWEEN TWO NEIGHBORING CITIES"<<endl;
    //  find largest of road between two neighboring roads
    for (size_t i = 0; i < roads.size() - 1; i++)
    {
        //  cout<<"road["<<i<<"] is "<<roads[i]<<endl;
        //  find largest
        cout<<"comparing road["<<roads_name[i]<<"]:["<<roads[i]<<"] and road["<<roads_name[i + 1]<<"]:[";
        cout<<roads[i + 1]<<"]"<<endl; 
        if (roads[i] > roads[i + 1])
        {
            cout<<"largest road is road["<<roads_name[i]<<"]:["<<roads[i]<<"]"<<endl;
        }
        else
        {
            cout<<"largest road is road["<<roads_name[i + 1]<<"]:["<<roads[i + 1]<<"]"<<endl;
        }
    }

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"FINDING AVERAGE (MEAN) distance between two cities"<<endl;
    
    for (size_t i = 0; i < roads.size() - 1; i++)
    {
        cout<<"average of road["<<roads_name[i]<<"]:["<<roads[i]<<"] and road["<<roads_name[i + 1]<<"]:[";
        cout<<roads[i + 1]<<"] is :\t "<<(roads[i] + roads[i + 1]) / 2<<endl; 
    }
    
    keep_window_alive();
    return 0;
}