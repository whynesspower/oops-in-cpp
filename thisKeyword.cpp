#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int x, int y){
            this -> x = x;
            // 'this -> x' indicates the class member x and the '= x' indicates the argument given as x
            this -> y = y;
        } 
        Point &setX(int x){
            this -> x = x;
            return *this;
        }
        Point &setY(int y){
            this -> y = y;
            return *this;
        }
};

int main()
{
    Point p1(10, 10);
    p1.setX(5).setY(5);
    // chaining of functions. p1.setX(5) returns a data type of point object. 
    // which is inturn used by setY to set its value 5
    return 0;
}