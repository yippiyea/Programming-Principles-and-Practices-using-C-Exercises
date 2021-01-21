//  Purpose/Problem     :   create game rock, paper, scissor
//                          user try to 
//  Requirements        :
//  UI design           :   input prompt    : 
//                          output prompt   : 
//                          error prompt    :
//  Logic               :
//  Data design         :
//  Conclusion          :

#include <iostream>
#include "../utilities.h"
using namespace std;

    enum deal 
    {
        scissor = 1,
        rock = 2,
        paper = 3
    };




int main() {

    const int game_limit = 5;
    string username = "";
    string comname = "";

    deal realdeal;
    realdeal = scissor;

    int userinput = 0;
    int com_random_answer = 0;
    int randomdriver = 0;

    int userpoint = 0;
    int compoint = 0;

    //  tes randomnes using vector
    vector<int> comanswer;
    comanswer.push_back(1);
    comanswer.push_back(2);
    comanswer.push_back(3);

    vector<string> dealname;
    dealname.push_back("");
    dealname.push_back("scissor");
    dealname.push_back("rock");
    dealname.push_back("paper");    

    // print_vector_string(dealname);

    // print_vector_int(comanswer);
    cout<<"Please enter your username : ";
    cin>>username;
    comname = "com-";
    comname.append(gen_random(3));
    cout<<"============================="<<endl;    
    cout<<"Welcome to the game "<< username <<endl;
    cout<<"You will face a com with the name : " << comname <<endl;
    cout<<"============================="<<endl;    
    
    size_t counter = 1; 
    do
    {
        cout<<"whats your guess "<< username << " ? (1 or scissor, 2 or rock, 3 or paper) "; 
    cin>>userinput;
    // cout<<"user input is "<< userinput <<endl;
    
    cout<<"provide randomness value for "<< comname <<" : ";
    cin>>randomdriver;
    // cout<<"randomdriver is : "<<randomdriver<<endl;

    // if randomdriver = 5, means loop 5 times in that vector
    com_random_answer = random_number_generator(randomdriver, comanswer);
    // cout<<"com_random_answer is : " <<com_random_answer<<endl;
    

    cout<< username <<" is : "<< dealname[userinput]<< " "<< comname <<" answer is : "<<dealname[com_random_answer]<<endl;
    if (userinput == scissor && com_random_answer == scissor)
    {
        cout<<"draw"<<endl;
        ++userpoint;
        ++compoint;
    }
    else if (userinput == scissor && com_random_answer == rock)
    {
        cout<<"you lose, com win"<<endl;
        ++compoint;
    }
    else if (userinput == scissor && com_random_answer == paper)
    {
        cout<<"you win, com lose"<<endl;
        ++userpoint;
    }


    else if (userinput == rock && com_random_answer == scissor)
    {
        cout<<"you win, com lose"<<endl;
        ++userpoint;
    }
    else if (userinput == rock && com_random_answer == rock)
    {
        cout<<"draw"<<endl;
        ++userpoint;
        ++compoint;
    }
    else if (userinput == rock && com_random_answer == paper)
    {
        cout<<"you lose, com win"<<endl; 
        ++compoint;    
    }


    else if (userinput == paper && com_random_answer == scissor)
    {
        cout<<"you lose, com win"<<endl;    
        ++compoint; 
    }
    else if (userinput == paper && com_random_answer == rock)
    {
        cout<<"you win, com lose"<<endl;
        ++userpoint;
    }
    else if (userinput == paper && com_random_answer == paper)
    {
        cout<<"draw"<<endl;
        ++userpoint;
        ++compoint;
    }
    else {
        cout<<"no goes here"<<endl;
    }

    cout<<username<<" point is "<<userpoint<<"----" << comname<<"point is "<<compoint<< "----game remaining : "<<game_limit - counter<<endl;
    cout<<"==================================================================="<<endl;
    ++counter;
    } while (counter <= game_limit);
    
    if (userpoint > compoint)
    {
        cout<<"the winnder is : " << username<<endl;
    }
    else if (compoint > userpoint)
    {
        cout<<"the winnder is : " <<comname<<endl;
    }
    else
    {
        cout<<"the game is draw"<<endl;
    }
    
    
    keep_window_alive();
    return 0;
}