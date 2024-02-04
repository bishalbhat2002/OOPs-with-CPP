// Single Inheritance
// Here, one base class, 1 or more Intermediate  derived classes,
// and 1 derived class.
// A is Base class, B is intermediate derived class and, C is
// derived class.

#include <iostream>
using namespace std;
class A // Base class
{
protected:
    int x = 10;

public:
    void displayx()
    {
        cout << "Hello, I am Base class A and value of x = " << x << endl;
    }
};
class B : public A // Intermediate derived class
{
public:
    void displayy()
    {
        cout << "Hello, I am Intermediate Derived class B and value of x = " << x << endl;
    }
};
class C : public B // Derived class
{
public:
    void displayz()
    {
        cout << "Hello, I am Derived class C and value of x = " << x << endl;
    }
};
int main()
{
    C c;
    c.displayx();
    c.displayy();
    c.displayz();
    return 0;
}
