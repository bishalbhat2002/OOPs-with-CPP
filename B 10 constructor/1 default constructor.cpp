// default constructor program..
// default constructor are special member function that have the
// same name as the class and takes no parameter.
#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "Hello, i am default constructor" << endl;
    }
};
int main()
{
    test t;
    return 0;
}
