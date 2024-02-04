// Single Inheritance
// Here, one base class and one derived class.

#include <iostream>
using namespace std;
class Base
{
protected:
    int x = 10;

public:
    void displayBase()
    {
        cout << "Hello, I am Base class and value of x = " << x << endl;
    }
};
class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << "Hello, I am Derived class and value of x = " << x << endl;
    }
};
int main()
{
    Derived d;
    d.displayBase();
    d.displayDerived();
    return 0;
}