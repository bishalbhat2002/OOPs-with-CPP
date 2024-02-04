/*
    A class that contains atleat one pure virtual function is
    called an Abstract Class. We cannot create the object of
    Abstract class. We can access the function of abstract class
    using the object of derived class.
    if we dont override the pure virtual function in the derived
    class, then the derived class also becomes abstract class and
    we cannot create the object of derived class.
*/

// --> Program to demonstrate the Abstract Class:

#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() = 0;
    void display()
    {
        cout << "I am Base class !" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "I am derived clas !" << endl;
    }
};
int main()
{
    // A a;
    /*
        Above line will give error, because A is abstract class and we tried to
        create object of it.
    */
    B x;
    x.display();
    x.show();
    return 0;
}