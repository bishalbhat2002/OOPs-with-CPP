
// for user defined data types, the type conversion doesnt happen automatically..
// for this, there are 3 types of user defined data type conversion.
// 1. Basic to class type conversion.
// 2. Class to Basic type conversion.
// 3. Class to Class type conversion.

// --> This is Basic to Class type conversion program..

// In this type conversion, the source type is basic type and destination type is
// class type. The conversion of basic to class type can be done in 2 ways:
//     1. using constructor.
//     2. using operator overloading.

// Using Constructor.... Basic to Class type conversion.

/*
    In this program, we will pass int value minutes by integer duration variable  to
    the Class Time, and display the result in hours and minutes...
*/
#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    Time() {}
    Time(int t)
    {
        hours = t / 60;
        minutes = t % 60;
    }
    void display()
    {
        cout << "The time is " << hours << " Hours and " << minutes << " Minutes" << endl;
    }
};
int main()
{
    int duration;
    cout << "This is the example of Basic to Class type conversion" << endl;
    cout << "Enter Time in duration of minutes :";
    cin >> duration;

    Time t;
    t = Time(duration);
    t.display();
    return 0;
}

// same program using operator = overloading...

#include <iostream>
using namespace std;
class Time
{
    int hours, minutes;

public:
    void operator=(int t)
    {
        hours = t / 60;
        minutes = t % 60;
    }
    void display()
    {
        cout << "The time is " << hours << " Hours " << minutes << " minutes" << endl;
    }
};

int main()
{
    int time;
    cout << "Basic to class type conversion" << endl;
    cout << "Enter time in minutes : ";
    cin >> time;
    Time t;
    t = time;
    // or,
    // t.operator=(time);
    t.display();

    return 0;
}
