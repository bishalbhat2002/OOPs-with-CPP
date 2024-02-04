// program to demonstrate enumeration...

#include <iostream>
using namespace std;

// here the values of variables start from 0 and then increases by 1 for next variable.
enum levels
{
    low,    // low value is set to 0;
    medium, // medium value is set to 1;
    high    // high value is set to 1;
};

// here the values start with 1(because 1 is given), and then increases by 1 for next variable.
enum days
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    enum levels l = low;
    cout << "The low value is: " << l << endl;
    l = medium;
    cout << "The medium value is: " << l << endl;
    l = high;
    cout << "The high value is: " << l << endl
         << endl;

    enum days d = sunday;
    cout << "the day number of sunday is: " << d << endl;
    d = monday;
    cout << "the day number of monday is: " << d << endl;
    d = wednesday;
    cout << "the day number of wednesday is: " << d << endl;
    d = saturday;
    cout << "the day number of saturday is: " << d << endl
         << endl;
    return 0;
}

/*
   Enumerations provide a convenient way to work with sets of related constants, and
   to associate constant values with names
   enums are very easy to use and represented as strings but processed as integers..
   they increase the code readability..

*/