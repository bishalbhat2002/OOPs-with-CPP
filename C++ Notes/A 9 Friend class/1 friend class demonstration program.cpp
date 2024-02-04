// friend class
// one class be also declared as a friend of some another class.
// When one class ABC declares class XYZ as its friend, that means,
// friend class XYZ can access all the private and protected data
// members of class ABC. To declare a friend class, we should follow
// following syntax:
// class ABC { ... public: friend class XYZ; };
// class XYZ {... public: fun1(ABC a){} ...}

#include <iostream>
using namespace std;
class ABC
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter value of 2 numbers:" << endl;
        cout << "a : ";
        cin >> a;
        cout << "b : ";
        cin >> b;
    }
    friend class XYZ;
};
class XYZ
{
public:
    void display(ABC c)
    {
        cout << "Displaying value from friend class:" << endl;
        cout << "a : " << c.a << endl;
        cout << "b : " << c.b << endl;
    }
};
int main()
{
    ABC a;
    a.getdata();
    XYZ x;
    x.display(a);
    return 0;
}