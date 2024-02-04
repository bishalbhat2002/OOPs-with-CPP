// Pure virtual function.
// Pure virtual function is a virtual function which has
// no body. The pure virtual function is declared in base
// class using the syntax:
//          virtual return_type function_name() = 0;
// Its meaning is defined in the derived classes.

// --> program to demonstrate the pure virtual function.

#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
class Derived1 : public Base
{
public:
    void show()
    {
        cout << "This is Derived1 class" << endl;
    }
};
class Derived2 : public Base
{
public:
    void show()
    {
        cout << "This is Derived2 class" << endl;
    }
};
int main()
{
    Base *ptr[2];
    Derived1 d1;
    Derived2 d2;

    ptr[0] = &d1;
    ptr[1] = &d2;

    ptr[0]->show(); // call to show() of Derived1 class
    ptr[1]->show(); // call to show() of Derived2 class
    return 0;
}