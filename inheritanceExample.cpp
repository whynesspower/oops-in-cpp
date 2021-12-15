#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    Base(int a) : x(a) 
    {
        cout<<"Base \n";
    }
};
class Derived : protected Base
{
private:
    int y;
public:
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived \n";
        // we have to explicitely call the Base class contructor function with a parameters, 
        // as if we go by default there is no deault constructor and hence compilation error 
        // 
    }
    void print()
    {
        cout << x << " " << y << '\n';
    }
};
int main()
{
    Derived d (10, 20);
    d.print();
    // cout << d.x; this line gives compile error as x is protected, inaccessible here
    return 0;
}