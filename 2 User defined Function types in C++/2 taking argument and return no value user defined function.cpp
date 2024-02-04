// Program to add 3 numbers.
// --> User defined function : taking argument and no return type.
#include <iostream>
using namespace std;
void sum(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter any 3 numbers." << endl;
    cin >> a >> b >> c;
    sum(a, b, c);
    return 0;
}
void sum(int n1, int n2, int n3)
{
    int total;
    total = n1 + n2 + n3;
    cout << "The sum of " << n1 << ", " << n2 << " and " << n3 << " is " << total << endl;
}