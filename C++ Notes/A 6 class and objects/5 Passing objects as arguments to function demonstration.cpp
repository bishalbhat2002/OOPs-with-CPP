// Passing objects as arguments.
// Program to add 2 complex number.

#include <iostream>
using namespace std;
class complex
{
private:
    float real, img;

public:
    void getcomplex();
    void addcomplex(complex, complex);
    void display();
};

// Defining all the functions outside the class because it looks messy
// when we define function inside the class body..

void complex ::getcomplex()
{
    cout << "Enter real part : ";
    cin >> real;
    cout << "Enter img part : ";
    cin >> img;
}
void complex ::display()
{
    cout << "The sum is ";
    if (img > 0)
        cout << real << " + i" << img << endl;
    else
        cout << real << " - i" << (-1) * img << endl;
}
void complex::addcomplex(complex c1, complex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}
int main()
{
    complex first, second, result;
    cout << "--> Enter first complex number :" << endl;
    first.getcomplex();
    cout << "--> Enter second complex number :" << endl;
    second.getcomplex();

    result.addcomplex(first, second);
    result.display();

    return 0;
}