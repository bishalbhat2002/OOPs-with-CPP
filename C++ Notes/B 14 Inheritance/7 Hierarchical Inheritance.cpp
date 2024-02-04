// In hierarchical inheritance, There is only one base class
// and 2 or more derived classes.

#include <iostream>
using namespace std;
class A // Base class
{
protected:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter x : ";
        cin >> x;
        cout << "Enter y : ";
        cin >> y;
    }
};
class B : public A // Derived class
{
public:
    void displaysum()
    {
        cout << "Sum of x and y is " << (x + y) << endl;
    }
};
class C : public A // Derived class
{
public:
    void displayproduct()
    {
        cout << "Product of x and y is " << (x * y) << endl;
    }
};
int main()
{

    B b;
    cout << "For class B:" << endl;
    b.getdata();
    b.displaysum();
    cout << endl;
    C c;
    cout << "For class C:" << endl;
    c.getdata();
    c.displayproduct();

    return 0;
}