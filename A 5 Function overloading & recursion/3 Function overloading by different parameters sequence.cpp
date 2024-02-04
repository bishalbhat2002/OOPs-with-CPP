// --> function overloading with parameters having different sequence.
// Program to add and display sum of 2 numbers.

#include <iostream>
using namespace std;
void add(int a, float b);
void add(float a, int b);
// --> Here, the function have same number of parameter but different sequence of parameters.

void add(int a, float b)
{
    cout << " --> Function of sequence (int, float) called !!" << endl;
    cout << "The sum of 2 integer numbers is : " << (a + b) << endl;
}

void add(float a, int b)
{
    cout << " --> Function of sequence (float, int) called !!" << endl;
    cout << "The sum of 2 floating numbers is : " << (a + b) << endl;
}
int main()
{
    add(44, 4.6f);
    cout << endl;
    add(4.6f, 44);
    return 0;
}

/*
    In c++, to represent a floating point number, we must use 'f' letter after the number.
    example: 7.6f is float type.
             7.6 is double type.
*/