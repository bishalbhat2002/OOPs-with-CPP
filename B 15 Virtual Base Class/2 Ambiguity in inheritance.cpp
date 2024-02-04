// Ambiguity in Inheritance.
// In multiple inheritance, when a function with the same name and argument
// appears in more than 1 base class. Then, the compiler gets confused that
// which base class function to call from the derived class.
// this problem can be solved using (::) operator with the function.

#include <iostream>
using namespace std;
class Base1
{
public:
    void display()
    {
        cout << "Hello, i am Base1 class" << endl;
    }
};
class Base2
{
public:
    void display()
    {
        cout << "Hello, i am Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        Base1::display();
        Base2::display();
        // if we dont use (::) operator it will give error.
        // try the below line to check if compilation error occurs or not.

        // display();    // <-- uncomment this display() and check if error occurs or not..
    }
};
int main()
{
    Derived d;
    d.show();
    return 0;
}