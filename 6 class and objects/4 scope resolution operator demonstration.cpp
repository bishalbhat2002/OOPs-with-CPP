// scope resolution operator used to access the global variable.

#include <iostream>
using namespace std;
int x = 30;
int main()
{
    int x = 70;
    cout << "The value of x inside main section is " << x << endl;    // ... is 70.
    cout << "The value of x outside main section is " << ::x << endl; // ... is 30.
    return 0;
}