// In single inheritance, if there are 2 functions with same name
// and same arguments, one in base class & other in derived class.
// Then, when calling the same name function, the function in derived
// class gets higher priority and overrides the base class function.
// so to access the base class function in case of same same name function,
// we use class_name, (::) operator with the function name.
// this is shown in program below..

#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "Hello, I am base class !" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Hello, I am derived class !" << endl;
    }
};
int main()
{
    Derived d;
    d.display();
    d.Base::display();
    d.Derived::display();
    return 0;
}