// static data members and static member functions.
/*
--> The value of static data members is by default set to 0 when first object of
    its class is created. Only one copy of static member is created for the entire
    class no matter how many objects are created. Static variables are used to maintain
    the values common to the entire class.
--> Static member function is independent of the class objects and it is associated 
    with the class not its objects. It is invoked as a member of the class using scope
    resolution operator with the class_name.
    Static member function can only access the static members or other static member
    functions declared in the same class.
*/
#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    static int count;
public:
    void displaydata()
    {
        count++;
        cout << "Hello, i am object no. " << count << endl;
    }
    static void displaycount()
    {
        cout << "The value of static data member count in this object is " << count << endl;
    }
};
int Employee ::count; // Here default value is 0.
// int Employee :: count = 1000;  // <-- this is also valid.. we can assign starting value here.
int main()
{
    int i;
    Employee e[5];
    for (i = 0; i < 5; i++)
    {
        e[i].displaydata();
        Employee::displaycount();
        cout<<endl;
    }
    return 0;
}
