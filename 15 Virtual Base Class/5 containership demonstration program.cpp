// containership.
// when a class contains the object of another class,
// or, a class within class is called containership.

// Program to illustrate the containership...

#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    char name[25];

public:
    void getinfo()
    {
        cout << "Enter name : ";
        cin.get(name, sizeof(name));
        cout << "Enter Roll number : ";
        cin >> roll;
    }
    void displayinfo()
    {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
    }
};
class Age
{
private:
    int age;

public:
    Student s;
    void getdata()
    {
        s.getinfo();
        cout << "Enter age : ";
        cin >> age;
    }
    void displaydata()
    {
        s.displayinfo();
        cout << "Age : " << age << endl;
    }
};
int main()
{
    Age a;
    a.getdata();

    cout << endl;
    cout << "Displaying the data of student as." << endl;
    a.displaydata();
    return 0;
}
