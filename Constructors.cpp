//Constructors, Default and parameterized. 
#include <iostream>
using namespace std;

class point{
  private: int x, y;
  public:
   point(){
    //   default constructor
      x=0;
      y=0;
  }
   point(int aa, int bb){
    //   parameterized constructor
      x=aa; 
      y=bb;
  }
  void print(){
      cout<<x<< " "<<y<<endl;
  }
};

int main() {
    
    point p1, p2(10, 20);
    p1.print();
    p2.print();
    // dynamically initializing a constructor.  
    point *ptr= new point(10,20);
    ptr->print();
    return 0;
}