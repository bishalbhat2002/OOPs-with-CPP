// member functions inside the class body.

#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    void getx()
    {
        cout << "Enter value of x : " << endl;
        cin >> x;
    }
    void showx()
    {
        cout << "The value of x : " << x << endl;
    }
};
int main()
{
    A a1;
    a1.getx();
    a1.showx();
    return 0;
}
