

// Program to demonstrate the Constructor in Derived class.

#include <iostream>
using namespace std;
class Alpha
{
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "Hello, I'm alpha." << endl;
    }
    void show_x()
    {
        cout << "x = " << x << endl;
    }
};
class Beta
{
    float y, z;

public:
    Beta(float j, float k)
    {
        y = j;
        z = k;
        cout << "Hello, I'm beta." << endl;
    }
    void show_yz()
    {
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};
class Gamma : public Alpha, public Beta
{
    int m, n;

public:
    Gamma(int a, float b, float c, int d, int e) : Alpha(a), Beta(b, c)
    {
        m = d;
        n = e;
        cout << "Hello, I'm Gamma." << endl;
    }
    void show_mn()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};
int main()
{
    Gamma g(5, 10.6, 2.6, 6, 9);
    cout << endl;
    g.show_x();
    cout << endl;
    g.show_yz();
    cout << endl;
    g.show_mn();

    return 0;
}

/*

    derived class has constructor that distributes values of constructors to its base class..
    we give the value to the derived constructor during the object cration of derived class.
    ---> order of constructor execution...
        1) the base class constructor is invoked first. then only the derived class constructor
           is invoked at last.
        2) if there are multiple base classes, then first base class's constructor in order is
           is invoked in first, then other base class in order.. and at last the derived class one.
        3) if there exist any virtual base classes then their constructor is executed first in order.
           after that other base class constructor is executed in order.. and at last the derived
           class one..

        example:
        1) class derived : public base1 { first base1() and then derived() constructor is invoked. }
        2) class derived : public base1, public base2, public base3 { first base1(), second base2(),
            third base3, and at last derived() constructor is invoked. }
        3) class derived : public base1, public virtual base2 { first base2(), second base1(), and
           at last derived() class constructor is invoked. }



        syntax of derived consturtor::

        derived(int a, int b, int c, int d): base1(a), base2(b)
        {
            x = c;   // x and y are variables of derived class.
            y = d;   // c and d initialized the variables of derived class.

        }
*/