
/*
    The process of allocating and freeing memory at runtime is called dynamic memory
    allocation.
*/

// --> for single integer value..

// dynamic memory allocation using new keyword....
// here, memory is allocated during run time using new keyword..

#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;
    cout << "Enter any number" << endl;
    cin >> *ptr;
    cout << "The value is " << *ptr << endl;
    cout << "Size of ptr is = " << sizeof(ptr) << " bytes" << endl; // 8 bytes
    delete ptr;
    return 0;
}
