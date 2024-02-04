
// basic to class type conversion.
// in this program, we pass int value meter by length variable to the
// distance class, and convert the length into cm and km...
// using constructor..

#include <iostream>
using namespace std;

class Distance
{
    int cm, meter;
    float km;

public:
    Distance() {}
    Distance(int d)
    {
        meter = d;
        cm = d * 100;
        km = d / 1000.0f;
        // dividing by float number, forces '/' operator to give result in
        // floating point. if we divide by '1000' then we will get integer
        // value in result and it will not be precise...
    }
    void display()
    {
        cout << "The distance is:" << endl;
        cout << "In Km : " << km << " km" << endl;
        cout << "In Meter : " << meter << " meters" << endl;
        cout << "In cm : " << cm << " cm" << endl;
    }
};
int main()
{
    int length;
    cout << "This is the Basic to class conversion" << endl;
    cout << "Enter length in meters : ";
    cin >> length;

    Distance d;
    d = Distance(length); // constructor called.
    d.display();
    return 0;
}

// --> same program using operator (=) overloading.

#include <iostream>
using namespace std;
class Distance
{
    int cm, meter;
    float km;

public:
    void operator=(int d)
    {
        km = d / 1000.0f;
        meter = d;
        cm = d * 100;
    }
    void display()
    {
        cout << "The distance in KM is : " << km << endl;
        cout << "The distance in Meter is : " << meter << endl;
        cout << "The distance in CM is : " << cm << endl;
    }
};
int main()
{
    int length;
    cout << "This is basic to class type conversion using operator overloading." << endl;
    cout << "Enter Length in meters : ";
    cin >> length;

    Distance d;
    d = length; // operator '=' is called.
    d.display();
    return 0;
}