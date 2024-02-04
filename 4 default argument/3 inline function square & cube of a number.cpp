// Program to display square and cube of a number
// using inline function.

#include <iostream>
using namespace std;
inline int square(int x)
{
    return (x * x);
}
inline int cube(int x)
{
    return (x * x * x);
}
int main()
{
    int x, sq, cb;
    cout << "Enter any number : ";
    cin >> x;
    sq = square(x);
    cb = cube(x);
    cout << "The square of " << x << " is " << sq << endl;
    cout << "The cube of " << x << " is " << cb << endl;

    return 0;
}


