#include<iostream>
using namespace std;

class Player{
    public:
        static int count;
        Player(){count++;}
        ~Player(){count--;}
        
        // static member functions can access only the static variables and not anything else. 

        static int getCount(){return count;}
        
};

int Player :: count = 0;

int main()
{
    Player p1, p2;
    cout << Player :: getCount() << " ";
    // calling of a static funtion is similar to the calling of
    // static variables. 
    // this is the preffered way to access a static integer. 
    // Use the class name and then :: to access instead of p1.count, tho that works too
    
    return 0;
    
}