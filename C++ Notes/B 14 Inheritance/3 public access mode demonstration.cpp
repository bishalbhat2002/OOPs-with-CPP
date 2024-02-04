
// --> program demonstrating private access specifier.

#include <iostream>
using namespace std;
class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    Base()
    {
        x = 10;
        y = 20;
        z = 30;
    }
};
class derived1 : public Base
{
public:
    void showdata()
    {
        cout << "Here, x is not accessible here in derived1 class !" << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        // y is derived into protected & z is derived into public section of
        // derived1 class.
    }
};
class derived2 : public Base
{
public:
    void showdata()
    {
        cout << "Here, x is not accessible here in derived2 class !" << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        // y is derived into protected & z is derived into public section of
        // derived1 class.
        // same output
    };
};
int main()
{
    derived1 d1;
    derived2 d2;
    cout << "Data of derived1 class:" << endl;
    d1.showdata();
    cout << "Data of derived2 class:" << endl;
    d2.showdata();
    return 0;
}
