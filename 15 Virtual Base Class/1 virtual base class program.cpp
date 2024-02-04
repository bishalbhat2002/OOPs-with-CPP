// virtual Base class function.
// In multipath inheritance, there are multiple paths from Base class to derived class
// and the derived class inherits the traits of base class from those separate paths.
// and at the end, the derived class contains dublicate sets of the data and functions
// of Base class.
// if derived class will contains the copies of same data and functions then, the program
// will take more memory space, which is not efficient. So to avoid data and funciton
// duplicacy in derived class we use virtual base class.

#include <iostream>
using namespace std;
class Student
{
protected:
    char name[25];
    int roll;

public:
    void getintro()
    {
        cout << "Enter name : ";
        cin.get(name, sizeof(name));
        cout << "Enter roll number : ";
        cin >> roll;
    }
    void displayintro()
    {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
    }
};
class Marks : virtual public Student
{
protected:
    int marks;

public:
    void getmarks()
    {
        cout << "Enter total marks : ";
        cin >> marks;
    }
    void displaymarks()
    {
        cout << "Total marks : " << marks << endl;
    }
};
class Score : virtual public Student
{
protected:
    int score;

public:
    void getscore()
    {
        cout << "Enter score : ";
        cin >> score;
    }
    void displayscore()
    {
        cout << "Score : " << score << endl;
    }
};
class Result : public Marks, public Score
{
private:
    int total_score;

public:
    void displayresult()
    {
        total_score = marks + score;
        displayintro();
        displaymarks();
        displayscore();
        cout << "The total score is " << total_score << endl;
    }
};
int main()
{
    Result r;
    r.getintro();
    r.getmarks();
    r.getscore();

    cout << endl;
    cout << "Now displaying the data of student as." << endl;
    r.displayresult();
    return 0;
}