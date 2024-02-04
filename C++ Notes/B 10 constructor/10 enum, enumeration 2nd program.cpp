// enumeration program from note.

#include <iostream>
using namespace std;
int main()
{
    enum color
    {
        Red,
        Green,
        Blue,
        White = 5,
        Orange,
        Purple = 9,
        Pink,
        Gray
        // we can assign values if we want, if values not assigned then
        // values are assigned from 0. But, once a value is assigned
        // the next variable is assigned (value + 1) value in it and
        // process continues if no any other values are assigned. But
        // if again new value is assignd to other variables, conting starts
        // from that assigned value for later varibles.
        // you can check output of this program to understand more about this...
    };
    color c;
    c = Red;
    cout << "The value of Red is :" << Red << endl;
    c = Green;
    cout << "The value of Green is :" << Green << endl;
    c = Blue;
    cout << "The value of Blue is :" << Blue << endl;
    c = White;
    cout << "The value of White is :" << White << endl;
    c = Orange;
    cout << "The value of Orange is :" << Orange << endl;
    c = Purple;
    cout << "The value of Purple is :" << Purple << endl;
    c = Pink;
    cout << "The value of Pink is :" << Pink << endl;
    c = Gray;
    cout << "The value of Gray is :" << Gray << endl;
    return 0;
}