// type conversion from class to class type conversion.
// program to convert polar coordinates into rectangular
// coordinates using conversion routine in destination
// class.

#include <iostream>
#include <cmath> // headerfile for using cos, sin math functions
using namespace std;
class Polar // source class
{
private:
    float radius, angle;

public:
    Polar()
    {
        radius = 0;
        angle = 0;
    }
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << ", " << angle << ")" << endl;
    }
    float getr()
    {
        return radius;
    }
    float geta()
    {
        return angle;
    }
};

class Rectangular // destination class
{
private:
    float xco, yco;

public:
    Rectangular()
    {
        xco = 0;
        yco = 0;
    }
    Rectangular(float x, float y)
    {
        xco = x;
        yco = y;
    }
    Rectangular(Polar p) // conversion function
    {
        float r, a;
        r = p.getr();
        a = p.geta();
        xco = r * cos(a);
        yco = r * sin(a);
    }
    void display()
    {
        cout << "(" << xco << ", " << yco << ")" << endl;
    }
};
int main()
{
    Rectangular r;
    Polar p(10.0, 0.7853);
    r = p;
    cout << "The polar coordinates are ";
    p.display();
    cout << "The rectangular coordinates are ";
    r.display();
    return 0;
}