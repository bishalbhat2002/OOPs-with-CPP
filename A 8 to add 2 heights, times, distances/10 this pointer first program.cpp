// this pointer, 
// 'this' is the keyword to represent an object within a member that invokes it.
// 'this' keyword is a pointer that points to an object for which that member 
// function is called. 'this' pointer is used to specify memory address of an 
// object, to access data members.

#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b;
    public:
    void displayaddress()
    {
        cout<<"The address of b uing this keyword : "<<this<<endl;
    }

};
int main()
{
    Box b;
    b.displayaddress();
    cout<<"The address of b using & operator : "<<&b<<endl;
/*  Bboth above 2 line print the same address. 
    so we can say that 'this' is a pointer that stores the address of 
    object that invokes the member function in which this keyword is present.
*/
    return 0;
}







