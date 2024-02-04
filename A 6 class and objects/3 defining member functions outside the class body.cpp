// member functions outside the class body.
// member function are declared inside the class body
// and defined outside the class using scope resolution (::)
// operator shown in example below.

#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    void getx();
    void showx();
};

// Here, functions are defined oustide the class body.
void A ::getx()
{
    cout << "Enter value of x : " << endl;
    cin >> x;
}
void A ::showx()
{
    cout << "The value of x : " << x << endl;
}

int main()
{
    A a1;
    a1.getx();
    a1.showx();
    return 0;
}
