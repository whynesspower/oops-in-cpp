#include<iostream>
using namespace std;

class A{
public:
    int x;
};
class B : virtual public A 
{ };
class C : virtual public A 
{ };
class D : public B, public C 
{ };


// Using the virtual keyword before the parenet class name we 
// solved the diamond problem of inherited classes. 
// now the constructor function of A class is called exactly once.  

int main()
{
    D d;
    cout << d.x;
    return 0;
}