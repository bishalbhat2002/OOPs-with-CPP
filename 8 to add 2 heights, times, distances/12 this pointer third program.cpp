
// Another program to demonstrate the this keyword..
// to access the variables when variables have same name.

#include <iostream>
using namespace std;
class Experiment
{
private:
    int x;

public:
    void test(int x) // intensionally created same parameter name as the private members.
    {
        this->x = x;
        this->x++;
        cout << "The value of x outside test function is : " << this->x << endl;
        cout << "The value of x inside test function is : " << x << endl;
    }
};
int main()
{
    Experiment e;
    e.test(50);
    return 0;
}

/*
    Her, we have one variable in private section of class named 'x'. and we want to assign some
    value to this private variable x using test(int x) function. But, as we can see, test function
    here has the same variable name as we have in private section. so, Inside the test funciton,
    there becomes 2 variables of same name ( one class variable of private section x, and other
    local variable of test function x). so when ever we use x inside the test funciton local variable
    x will be used and class variable x can only be used using 'this' keyword as shown above.
    because, the compiler gives priority to the local variables so, it will be local variable =
    local variable.
    and the class variables will be left unassigned.
    and when we use the class variable, it will give us garbage value.
*/