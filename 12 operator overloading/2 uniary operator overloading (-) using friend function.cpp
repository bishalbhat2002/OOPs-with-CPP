// C++ program for Uniary operator (-) overloading using friend function!!

#include <iostream>
using namespace std;
class space
{
private:
    int x, y, z;

public:
    space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }

    friend void operator-(space &s);
};
void operator-(space &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main()
{
    space x(5, 6, 7);
    cout << "Before overloading the values are:" << endl;
    x.display();
    cout << endl;
    -x;
    cout << "After overloading the values are:" << endl;
    x.display();
    return 0;
}
