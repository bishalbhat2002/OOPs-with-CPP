// Constructor in Derived class.
/*
    If the base class contains the default constructor, then we dont need to have
    a constructor in a derived class. However, if there is a constructor with one
    or more arguments then it is compulsory to have a constructor in derived class.
    The constructor in derived class passess the arguments to the base class
    constructors.
*/

// constructor in derived class.
#include <iostream>
using namespace std;

class base1
{
protected:
    int x;

public:
    base1(int m)
    {
        x = m;
        cout << "Base1 constructor is invoked !!" << endl;
        cout << "The value of x is " << x << endl;
        cout << endl;
    }
};

class base2
{
protected:
    int y;

public:
    base2(int n)
    {
        y = n;
        cout << "Base2 constructor is invoked !!" << endl;
        cout << "The value of y is " << y << endl;
        cout << endl;
    }
};

class derived : public base1, public base2
{
private:
    int i, j;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        i = c;
        j = d;
        cout << "Derived class constructor is invoked !!" << endl;
        cout << "The value of i is " << i << endl;
        cout << "The value of j is " << j << endl;
        cout << endl;
    }
};

int main()
{
    derived d(1, 2, 3, 4);

    return 0;
}