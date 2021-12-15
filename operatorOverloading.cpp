#include<iostream>
using namespace std;

class Complex{
private:
    int r, i;
public:
    Complex(int r = 0, int i = 0){
        this->r = r;
        this->i = i;
    }
    Complex operator + (const Complex &c){
        Complex ans;
        ans.r = this->r + c.r;
        ans.i = this->i + c.i;
        return ans;
    } 
    void print(){
        cout << this->r << " + " << this->i << "i \n";
    }
};
int main()
{
    Complex c1(2,3), c2(3,4);
    Complex sum = c1 + c2;
    sum.print();
    return 0;
    
    // If your class has dynamacally alloted memory or pointers you need to 
/*    1. write copy constructor to use deep Complex
    2. write your own destructor for memory to get free
    3. write your own assignment opearator overloading so that shallow copy doesn't happen. 
    and program works fine 
*/


}

