

// another program.. of multilevel inheritance.

#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void getx()
    {
        cout << "Enter value of x : ";
        cin >> x;
    }
};
class B : public A
{
protected:
    int y;

public:
    void gety()
    {
        cout << "Enter the value of y : ";
        cin >> y;
    }
};
class C : public B
{
private:
    int z;

public:
    void getz()
    {
        cout << "Enter the balue of z : ";
        cin >> z;
    }
    void displaysum()
    {
        cout << "The sum of x, y, z is " << (x + y + z) << endl;
    }
};
int main()
{
    C c1;
    c1.getx();
    c1.gety();
    c1.getz();
    c1.displaysum();

    return 0;
}