// member function of one class as friend function of another class.
// Program to add values from 2 different classes by making member 
// function of one class to the friend function of other.

#include <iostream>
using namespace std;

class classA;

class classB
{
private:
    int y = 5;

public:
    void display()
    {
        cout << "y : " << y << endl;
    }
    void sum(classA &);
};
class classA
{
private:
    int x = 4;

public:
    void display()
    {
        cout << "x : " << x << endl;
    }
    friend void classB::sum(classA &);
};

void classB ::sum(classA &a)
{
    int sum;
    sum = a.x + y;
    cout << "Displaying the sum : " << sum << endl;
}
int main()
{
    classA a;
    classB b;
    a.display();
    b.display();
    b.sum(a);
    return 0;
}