// Program to add 3 numbers.
// --> User defined function : taking no argument and return type.
#include <iostream>
using namespace std;
int sum();
int main()
{
    int total;
    total = sum();
    cout << "The sum of 3 numbers is " << total << endl;
    return 0;
}
int sum()
{
    int a, b, c;
    cout << "Enter any 3 numbers." << endl;
    cin >> a >> b >> c;
    return (a + b + c);
}