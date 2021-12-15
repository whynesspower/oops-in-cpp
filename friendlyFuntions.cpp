#include<iostream>
using namespace std;

class Employee;

class Printer{
public:
    void printEmp(const Employee & e);  
};

class Employee{
private:
    int id;
    string name;
public:
    friend class Printer;
    Employee(int i, string n) : id(i), name(n){}
};

void Printer::printEmp(const Employee & e){
    // as Printer has been appointed as  a friendly class
    // you can easily access the members like id and name in the printEmp function. Even tho 
    // those data members were private. 
    cout << e.id << ' ' << e.name << '\n';
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}