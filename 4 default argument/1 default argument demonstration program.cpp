// Program to demonstrate the default arguments.

#include <iostream>
using namespace std;
void total(int m1 = 10, int m2 = 20, int m3 = 30);
int main()
{
    cout << "Program to demonstrate use of default arguments." << endl;
    total();        // 10+20+30 --> sum = 60
    total(7);       // 7+20+30  --> sum = 57
    total(6, 5);    // 6+5+30   --> sum = 41
    total(4, 5, 6); // 4+5+6    --> sum = 15
    return 0;
}
void total(int a, int b, int c)
{
    cout << "sum = " << a + b + c << endl;
}


