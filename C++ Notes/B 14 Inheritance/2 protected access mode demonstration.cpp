
// --> program demonstrating protected access specifier.

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
class derived1 : protected Base
{
public:
    void showdata()
    {
        cout << "Here, x is not accessible here in derived class1 !" << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        // y & z are derived into the protected section of derived1 class
    }
};
class derived2 : protected Base
{
public:
    void showdata()
    {
        cout << "Here, x is not accessible here in derived class1 !" << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        // y & z are derived into the protected section of derived1 class
        // same output as above
    };
};
int main()
{
    derived1 d1;
    derived2 d2;
    cout << "Data of derived1 class:" << endl;
    d1.showdata();
    cout << "Data of derived class:" << endl;
    d2.showdata();
    return 0;
}
