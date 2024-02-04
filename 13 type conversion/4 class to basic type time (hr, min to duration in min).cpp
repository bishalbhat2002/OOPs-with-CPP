// Class to Basic type conversion...
// In this type conversion, the source is class
// type and destination is basic type.
// That means, the class type is converted into
// basic type...

// --> It requires special casting operator function
//      for class type to basic type conversion.
//      such functio is known as conversion function.

/*
    The syntax is:
    operator typename()
    {
        --code--
        and at the end
        return (..);
    }
*/

// program to covert class type into basic type...
// Program to assign time in hours and minutes in the
// form og total time in minutes into one integer variable
// "duration" by using type conversion..

#include <iostream>
using namespace std;
class Time
{
    int hours, minutes;

public:
    Time(int h, int m) // parameterized constructor...
    {
        cout << "Constructor with 2 parameter is called" << endl;
        hours = h;
        minutes = m;
    }
    operator int() // conversion function...
    {
        cout << "Class to basic type conversion in progress..." << endl;
        return ((hours) * 60 + minutes);
    }
    ~Time()
    {
        cout << "Destructor is called !" << endl;
    }
};
int main()
{
    int duration, hr, min;
    cout << "Enter Time:" << endl;
    cout << "Hours : ";
    cin >> hr;
    cout << "Minutes : ";
    cin >> min;
    Time t(hr, min);
    duration = t;
    cout << "The duration is " << duration << " in minutes" << endl;
    cout << "Class to basic type conversion completed !" << endl;
    return 0;
}
