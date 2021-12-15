//Initilizer List
#include <iostream>
using namespace std;


class Test{
  public:
    Test(){
      cout<<"This is default constructor\n";
    }
    Test(int x){
      cout<<"This is parameterized constructor\n";
    }
};


class Main{
  Test t;
  public:
    Main(): t(10)
    {
      // at line 20 we used an initilizer list for inilizing 
      // the value for the t object of Test class. 
      // This  initialzes only the parameterized constructor
      
      
      // t = Test(10);
      // instead of initilizer list, if we would have used this way , then first at line 18 default constructor would have been called and then the parameterized one, output would have been
      //  This is default  constructor
      // This is parameterized constructor
      
    }
};


int main(){

  Main m;
  return 0;
}