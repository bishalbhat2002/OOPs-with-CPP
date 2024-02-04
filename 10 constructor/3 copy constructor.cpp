// copy constructor a special member function that is used to copy
// or iniitialize the value of one object into another object.

#include <iostream>
using namespace std;
class test
{
    int x, y;

public:
    test(int a)
    {
        cout << "Parameterized constructor is called !" << endl;
        x = a;
        cout << "The value of x is " << x << endl;
    }
    test(test &t)
    {
        cout << "copy constructor is called, copying values..." << endl;
        y = t.x;
        cout << "The value of y is " << y << endl;
    }
};
int main()
{
    cout << " --> this output is of callling copy constructor using assignment operator:" << endl;
    test t1(5);
    test t2 = t1; // using assignment operator for calling copy constructor.
    // or,
    cout << endl; // for space between the outputs, output looks good to!
    cout << " --> this output is of calling copy constructor using object as argunent:" << endl;
    test t3(10);
    test t4(t3); // using object as argument for calling copy constructor.

    return 0;
}