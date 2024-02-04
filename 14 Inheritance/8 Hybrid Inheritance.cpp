// Hybrid Inheritance, In this type of inheritance more
// than one type of inheritance are used together.

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
        cout << "Enter roll no : ";
        cin >> roll;
    }
    void showintro()
    {
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
    }
};
class Marks : public Student
{
protected:
    int marks;

public:
    void getmarks()
    {
        cout << "Enter total marks : ";
        cin >> marks;
    }
    void showmarks()
    {
        cout << "Total marks : " << marks << endl;
    }
};
class Score
{
protected:
    int score;

public:
    void getscore()
    {
        cout << "Enter score : ";
        cin >> score;
    }
    void showscore()
    {
        cout << "Score = " << score << endl;
    }
};

class Result : public Marks, public Score
{
private:
    int total_score;

public:
    void display()
    {
        total_score = marks + score;
        showintro();
        showmarks();
        showscore();
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
    cout << "Now, Displaying the information as." << endl;
    r.display();
    return 0;
}