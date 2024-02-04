// c++ program to demonstrate basic to basic type conversion !!
// c++ converts the basic data types automatically when '=' operator is used.

#include <iostream>
using namespace std;

int main()
{
    int a = 89;
    char c = 'A';
    float b = 90.6f;
    /*
    By default c++ assumes float variable as double variable
    so if we want to use float variable then need to use
    'F' or 'f' letter after tht value
    */

    cout << "value of 'A' in integer = " << int(c) << endl; // value = 65
    /* converts the char data into int data*/
    cout << "c = " << c << endl;

    cout << "value of '90.6f' in character = " << char(b) << endl; // value = Z
    /* first converts the float into int type and then gives the
       equivalent character value to the integer */

    cout << "value of '90.6f' in integer = " << int(b) << endl; // value = 90
    /* this converts the float type data into int type */

    cout << "value of '89' in character = " << char(a) << endl; // value = Y

    return 0;
}
