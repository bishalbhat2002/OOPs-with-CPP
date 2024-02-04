// Program to find the larger value between 2 using function template.

#include <iostream>
using namespace std;
template <class T>
T larger(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    float m, n;
    char p, q;
    cout << "Enter 2 integers : ";
    cin >> a >> b;
    cout << "Enter 2 fractional numbers : ";
    cin >> m >> n;
    cout << "Enter any 2 characters : ";
    cin >> p >> q;

    cout << endl;
    cout << "The larger integer value is " << larger(a, b) << endl;
    cout << "The larger fractional value is " << larger(m, n) << endl;
    cout << "The larger character value is " << larger(p, q) << endl;

    return 0;
}