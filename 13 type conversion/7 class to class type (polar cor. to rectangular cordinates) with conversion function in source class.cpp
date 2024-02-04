// type conversion program from class type to class type.
// program to convert polar coordinates into rectangular coordinates..
// conversion routine performed in source class.

#include <iostream>
#include <cmath> // headerfile for using cos, sin math functions
using namespace std;
class Rectangular // Destination Class
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
    void display()
    {
        cout << "The rectangular coordinates are (" << xco << ", " << yco << ")" << endl;
    }
};

class Polar // Source Class
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
        cout << "The polar coordinates are (" << radius << ", " << angle << ")" << endl;
    }
    operator Rectangular()
    {
        float x, y;
        x = radius * cos(angle);
        y = radius * sin(angle);
        return Rectangular(x, y);
    }
};
int main()
{
    Rectangular r;
    Polar p(70.0f, 0.7853f);
    r = p; // call to operator function.

    p.display();
    r.display();
    return 0;
}