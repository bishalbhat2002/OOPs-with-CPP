// Function template for displaying any 2 values.

#include <iostream>
using namespace std;
template <class T>
void show(T a, T b)
{
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
}
int main()
{
    int a = 3, b = 4;
    char c = 'M', d = 'N';
    float e = 8.6f, f = 5.3f;
    cout << "Displaying integer value:" << endl;
    show(a, b);
    cout << "Displaying character value:" << endl;
    show(c, d);
    cout << "Displaying Float value:" << endl;
    show(e, f);
    return 0;
}

// In above program, we displayed different type of data using show() template function