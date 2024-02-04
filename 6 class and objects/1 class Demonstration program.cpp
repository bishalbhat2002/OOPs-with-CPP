// first class and objects program..
// Program to enter name and roll number of student and display it.

#include <iostream>
using namespace std;
class student
{
private:
    char name[25];
    int roll;

public:
    void getdata()
    {
        cout << "Enter name : ";
        cin.get(name, sizeof(name));
        cout << "Enter roll number : ";
        cin >> roll;
    }
    void showdata()
    {
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
    }
};
int main()
{
    student s; // s object created of student class.
    s.getdata();
    s.showdata();
    return 0;
}

/*
    This program will ask user to enter name and rollnumber of student and
    display the information entered.
*/