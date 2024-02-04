// --> function overloading with parameter number being different.
// Program to add and display sum of 2 numbers.

#include <iostream>
using namespace std;
void add(int a, int b);
void add(int a, int b, int c);
// both add() have same type of parameters but parameters number is different.

void add(int a, int b)
{
    cout << "The sum of 2 integer numbers is : " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "The sum of 3 integer numbers is : " << (a + b + c) << endl;
}

void add(float a, float b)
{
    cout << "The sum of 2 floating numbers is : " << (a + b) << endl;
}
void add(float a, int b, float c)
{
    cout << "The sum of 3 floating numbers is : " << (a + b + c) << endl;
}

int main()
{
    add(55, 65);
    add(40, 67, 89);
    cout << endl;
    add(44.7f, 33.3f);
    add(23.4, 56.6f, 8.5f);
    return 0;
}