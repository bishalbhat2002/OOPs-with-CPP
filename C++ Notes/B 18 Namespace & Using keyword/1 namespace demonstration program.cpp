// Namespace is a name given to scope or logical groupinh of variables, functions
// and classes in C++.
// Syntax for namespace is::

/*
        namespace namespace_name
        {
            -- code here --
        }
*/

#include <iostream>
using namespace std;
namespace Number
{
    int num = 10;
}
int main()
{
    int num = 50;
    cout << "Inside main num = " << num << endl;          // num = 50;
    cout << "Outside main num = " << Number::num << endl; // num = 10;
    return 0;
}

/*
    Both num have same name but representing different values.
    So, the main purpose of namespace is to prevent the ambiguity that
    may occur when 2 identifiers have same name.

*/