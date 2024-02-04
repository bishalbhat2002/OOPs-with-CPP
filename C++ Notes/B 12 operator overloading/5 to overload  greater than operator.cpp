// Program to overload " > " operator.

#include <iostream>
using namespace std;
class MyClass
{
private:
    int value;

public:
    MyClass()
    {
        cout << "Enter the value : " << endl;
        cin >> value;
    }
    // Overloading the ">" operator
    bool operator>(MyClass other)
    {
        return (value > other.value);
    }
};

int main()
{

    MyClass obj1;
    MyClass obj2;

    if (obj1 > obj2)
        cout << "obj1  is greater than obj2" << endl;
    else
        cout << "obj1 is not greater than obj2" << endl;

    return 0;
}
