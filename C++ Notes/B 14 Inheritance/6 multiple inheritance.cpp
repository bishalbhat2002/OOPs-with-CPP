// Multiple Inheritance.
// here, 2 or more Base class and only one derived class

#include <iostream>
using namespace std;
class A // Base class
{
protected:
    int x;

public:
    void getx()
    {
        cout << "Enter x : ";
        cin >> x;
    }
};
class B // Base class
{
protected:
    int y;

public:
    void gety()
    {
        cout << "Enter y : ";
        cin >> y;
    }
};
class C : public A, public B // derived class
{
public:
    void displaysum()
    {
        cout << endl;
        cout << " x : " << x << endl;
        cout << " y : " << y << endl;
        cout << "Sum of x and y is : " << (x + y) << endl;
    }
};
int main()
{
    C c1;
    c1.getx();
    c1.gety();
    c1.displaysum();
    return 0;
}