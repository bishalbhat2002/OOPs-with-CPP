
// Program for class type to basic type conversion
// here, using class to basic type conversion, length in meter is
// converted to length in cm

#include <iostream>
using namespace std;
class Length
{
    int meter, cm;

public:
    Length(int m) // parameterized constructor
    {
        cout << "Parameterized constructor is called !" << endl;
        meter = m;
    }
    operator int() // conversion function
    {
        cout << "class to basic type conversion in progress ..." << endl;
        // this is just a message i want to print....you can write anything here..
        return (meter * 100);
    }
    ~Length() // destructor
    {
        cout << "Destructor is called !" << endl;
    }
};
int main()
{
    int meter, cm;
    cout << "enter length in meter : ";
    cin >> meter;
    Length l(meter); // call to parameterized constructor
    cm = l;          // call to conversion function...
    cout << "The length in meter is " << meter << " meter and in cm is " << cm << " cm" << endl;
    cout << "Class to basic type conversion complete !" << endl;
    return 0;
}