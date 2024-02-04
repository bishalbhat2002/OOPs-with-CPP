// --> function overloading with parameter having different type.
// Program to add and display sum of 2 numbers.

#include <iostream>
using namespace std;
void add(float a, float b);
void add(int a, int b);
// --> Here, both add() have Same number of parameters but different parameter type.

void add(float a, float b)
{
    cout << "Sum of 2 floating pointer numbers : " << (a + b) << endl;
}
void add(int a, int b)
{
    cout << "Sum of 2 integer numbers : " << (a + b) << endl;
}
int main()
{
    add(10, 20);
    add(40.5f, 60.5f);
    return 0;
}

/*
    In c++, to represent a floating point number we write 'f' after
    that number, if we dont write letter 'f' after the floating ppoint
    number, the compiler will consider it as double and will give error
    while compiling.
    i.e
    In C++, 4 is integer, 4.5 is double, 4.5f is floating point, and
            4.5l is long double.
*/