// Destructor program.
// destructor is special member function that is executed when an object of that
// class is destroyed. destructor has same name as that of its class name preceeded
// by tilde(~).

#include <iostream>
using namespace std;
class Box
{
public:
    Box()
    {
        cout << "Hello, i am default constructor !!" << endl;
    }
    ~Box()
    {
        cout << "Hello, i am Destructor !!" << endl;
    }
};
int main()
{
    Box b1;
    return 0;
}