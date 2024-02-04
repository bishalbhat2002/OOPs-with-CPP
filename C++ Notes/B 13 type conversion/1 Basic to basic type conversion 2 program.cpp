
// Basic to Basic data type conversion example.

#include <iostream>
using namespace std;

int main()
{
    int a = 5, x, y;
    float b = 7.98f, w;
    char m = 'B', z;
    x = b;     // float 7.98 is converted into int 7 and stored in y.
    y = m;     // character 'B' is converted into its equivalent int value 66 and is stored in Z.
    z = a;     // here, int value 5 is connverted into its equivalent symbol i.e '♣'.
    w = m;     // here, first the character value 'B' is converted into int then float.

    cout << "Displaying the result of conversion !!" << endl;
    cout << "w = " << w << endl; // W = 66
    cout << "x = " << x << endl; // x = 7
    cout << "y = " << y << endl; // y = 66
    cout << "z = " << z << endl; // z = ♣
                                 // here, basic type conversion is happend...

    return 0;
}
