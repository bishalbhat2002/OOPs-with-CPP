// Class Template
// Program to calculate the area of Rectangle using class Template.

#include <iostream>
using namespace std;
template <class T>
class Rectangle
{
private:
    T length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(T x, T y)
    {
        length = x;
        breadth = y;
    }
    T area()
    {
        return (length * breadth);
    }
};
int main()
{
    Rectangle<int> reci(5, 10);
    Rectangle<float> recf(3.5, 4.5);

    cout << "The area with integer dimension is " << reci.area() << endl;
    cout << "The area with float dimension is " << recf.area() << endl;

    return 0;
}