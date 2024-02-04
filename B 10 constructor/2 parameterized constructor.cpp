// Parameterized constructor.
// parameterized constructor are special member function that have the
// same name as the class and takes parameter.

#include <iostream>
using namespace std;
class test
{
public:
    test(int x)
    {
        cout << "Hello, i am parameterized constructor" << endl;
        cout << "The value of x is " << x << endl;
    }
};
int main()
{
    test t = test(10); // parameterized constructor called explicitly.
    cout << endl;
    test d(60); // parameterized constructor called implicitely.
    return 0;
}