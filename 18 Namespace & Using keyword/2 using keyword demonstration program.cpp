// "using" Keyword is used to acess all the members
// declared within the specified namespace.

// Program to demonstrate the using keyword.

#include <iostream>
using namespace std;
namespace Intro
{
    int roll = 9;
    void display()
    {
        cout << "Name : Bishal Bhat !!" << endl;
    }
}
int main()
{
    int num = 50;
    using namespace Intro;
    display();
    cout << "Roll number = " << roll << endl;
    return 0;
}

/*
    Here, we displayed roll number and name (using function) that are defined in
    namespace Intro using "using" keyword.
*/
