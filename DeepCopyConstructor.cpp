// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;

class Test{
  int *ptr;
    public: 
      Test(int x){
        ptr= new int(x);
      }
      Test(const Test &t){
        // deep copy constructor, using this you create one 
        // specific copy of 
        int val = *(t.ptr);
        ptr = new int (val);
      }
      void set(int x){
        *ptr= x;
      }
      void display(){
        cout<<*ptr<<endl;
      }
};

int main(){
  Test t1(10);
  Test t2(t1);
  t2.set(20);
  t1.display();
  t2.display();

  return 0;

}