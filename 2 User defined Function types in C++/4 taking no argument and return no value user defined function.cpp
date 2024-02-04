// Program to add 3 numbers.
// --> User defined function : taking no argument and no return type.
#include <iostream>
using namespace std;
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a, b, c, total;
    cout << "Enter any 3 numbers." << endl;
    cin >> a >> b >> c;
    total = a + b + c;
    cout << "The sum of " << a << ", " << b << ", "
         << "and " << c << " is " << total << endl;
}