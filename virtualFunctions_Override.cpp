#include<iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "In Base \n";
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "In Derived \n";
    }
};
int main()
{
    Base b;
    b.print();
    Derived d;
    d.print();
    
    // a base class type reference or pointer can refer to a derived class object
    Base *bp = &d;
    bp -> print();
    return 0;
    
    // by using the virtual keyword you give the instruction to decide the behaviour of the funtion
    // to be decided by the object type and not by the class type of the call. 
    // for eg. line 30 prints In base, In derived, In derived and not In base as virtaul keywrod was used. 
}