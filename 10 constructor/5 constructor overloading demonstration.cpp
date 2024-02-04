// constructor overloading...
// if a class contains multiple constructors where each type of the
// constructor have different parameters list is called constructor
// overloading.

// program to show the use of constructor overloading.

#include <iostream>
using namespace std;
class complex
{
private:
    float x, y;

public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex &, complex &);
    friend void show(complex &);
};
complex sum(complex &c1, complex &c2)
{
    complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}
void show(complex &c)
{
    if (c.y < 0)
        cout << c.x << " - " << (-1) * c.y << "i" << endl;
    else
        cout << c.x << " + " << c.y << "i" << endl;
}
int main()
{
    complex A(2.7, -3.5); // <-- change the numbers inside brackets if you want to do experiment with code.
    complex B(1.6);       //  <-- change the numbers inside brackets if you want to do experiment with code.
    complex result;
    result = sum(A, B);

    cout << " A = ";
    show(A);
    cout << " B = ";
    show(B);
    cout << " Sum of these complex numbers = ";
    show(result);
    return 0;
}
