// program to demonstrate all 3 constructors.

#include <iostream>
using namespace std;
class code
{
private:
    int id;

public:
    code() {}
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    int display()
    {
        return id;
    }
};
int main()
{
    code p1(50);  // call to parameterized constructor.
    code p2(p1);  // call to copy constructor using object as argument.
    code p3 = p2; // call to copy constructor using '=' operator.
    cout << "Displaying the result:" << endl;
    cout << "Code p1 id = " << p1.display() << endl;
    cout << "Code p2 id = " << p2.display() << endl;
    cout << "Code p3 id = " << p3.display() << endl;
    return 0;
}