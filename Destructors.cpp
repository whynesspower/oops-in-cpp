#include<iostream>
using namespace std;

class Test{
    int x;
    public:
        Test(int i) : x(i){
            cout << "Cons" << x << endl;
        }
        ~Test(){
            cout << "Dest" << x << endl;
        }
};

int main()
{
    Test t1(10);
    Test t2(20);
    return 0;
    
    // Destructors are called when you go out of scope of a perticular object call. 
    // Destructor for t2 will be called before Destuctor of t1
    // ALWAYS CREATE A DESTRUCTOR WHEN YOU ARE DYNAMICALLY ALLOTING VALUES IN YOUR 
    // CONSTRUCTOR. ITS COMPULSORY
}