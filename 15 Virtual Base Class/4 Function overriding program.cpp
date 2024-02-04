// when Base class and Derived class have the same function
// name with same argument. Then, when calling the base function
// using the object of derived class, the base class function gets
// overridden by the derived class function.
// To call base calass function using object of derived class, we
// use scope resolution operator. Example is shown below..

#include <iostream>
using namespace std;
class Person
{
protected:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter name : ";
        cin.get(name, sizeof(name));
    }
    void display()
    {
        cout << "Name : " << name << endl;
    }
};
class Student : public Person
{
protected:
    int roll;

public:
    void getdata()
    {
        cout << "Enter roll number : ";
        cin >> roll;
    }
    void display()
    {
        cout << "Roll number : " << roll << endl;
    }
};
int main()
{
    Student s;
    s.Person::getdata();
    s.getdata();
    // --> In s.person::getdata() function, if you dont use (::) operator,
    //      and just called the function as s.getdata() it will always call
    //      the getdata() function of derived class.

    cout << endl;
    cout << "Displaying the information" << endl;
    s.Person::display();
    s.display();
    return 0;
}