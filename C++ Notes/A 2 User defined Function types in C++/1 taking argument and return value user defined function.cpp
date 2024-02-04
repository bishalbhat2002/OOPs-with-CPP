// Program to add 3 numbers:
// --> User defined function : taking argument and return type.
#include <iostream>
using namespace std;
int sum(int, int, int);
int main()
{
    int a, b, c, total;
    cout << "Enter any 3 numbers : " << endl;
    cin >> a >> b >> c;
    total = sum(a, b, c);
    cout << "The Sum of " << a << ", " << b << " and " << c << " is " << total << endl;
    return 0;
}
int sum(int n1, int n2, int n3)
{
    return (n1 + n2 + n3);
}