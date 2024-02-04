// Recursion in C++
// Program to calculate the factorial of a number and display it.

#include <iostream>
using namespace std;
long fact(int n)
{
    if (n == 0 || n == 1) // Base condition
        return 1;
    return (n * fact(n - 1)); // Recursive function call
}
int main()
{
    int num;
    cout << "Enter a positive number." << endl;
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num);
    return 0;
}