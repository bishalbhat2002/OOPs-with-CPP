
// --> for array integer values

#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int[3];
    cout << "The size of pointer is " << sizeof(ptr) << endl;
    cout << "Enter 3 values for the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> *ptr;
        ptr = ptr + 1; // ptr ++ ;
    }
    ptr = ptr - 3;
    // -3 subtracted because, in above loop ptr pointer is incremented 3 times
    // and for accessing the values from first it is necessary to reset the pointer
    // varible ptr..
    for (int i = 0; i < 3; i++)
    {
        cout << "The value at " << i + 1 << " position is " << *ptr << endl;
        ptr++;
    }
    delete[] ptr;
    return 0;
}