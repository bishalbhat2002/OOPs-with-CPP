
/*
    A book shop in mnr sells Book and DVD. 2 class Book and DVD are inherited from
    the base class Media. The media class has common data members such as title and
    publication. The class Book has data member such as no_of_pages and DVD class
    has data member such as duration. Each class members has member function such as
    getdata() and showdata().
    C++ program for modeling the class hierarchy for Book shop and DVD shop. And
    process objects of these classes using pointers of the base class Media.
*/

#include <iostream>
using namespace std;
class Media
{
protected:
    char title[35], publication[50];

public:
    virtual void getdata() = 0;
    virtual void showdata() = 0;
};
class Book : public Media
{
private:
    int no_of_pages;

public:
    void getdata()
    {
        cout << " --> Enter Data for Book:" << endl;
        cout << "Enter Title : ";
        cin.getline(title, sizeof(title));
        cout << "Enter publication : ";
        cin.getline(publication, sizeof(publication));
        cout << "Enter no of pages : ";
        cin >> no_of_pages;
    }
    void showdata()
    {
        cout << endl;
        cout << " --> Displaying Data of Book:" << endl;
        cout << "Title : " << title << endl;
        cout << "Publication : " << publication << endl;
        cout << "No of pages : " << no_of_pages << endl;
    }
};
class DVD : public Media
{
private:
    float duration;

public:
    ;
    void getdata()
    {
        cout << " --> Enter Data for DVD:" << endl;
        cin.ignore(); // because program was not taking title input.
        cout << "Enter Title : ";
        cin.getline(title, sizeof(title));
        cout << "Enter publication : ";
        cin.getline(publication, sizeof(publication));
        cout << "Enter duration in minutes : ";
        cin >> duration;
    }
    void showdata()
    {
        cout << endl;
        cout << " --> Displaying Data of DVD:" << endl;
        cout << "Title : " << title << endl;
        cout << "Publication : " << publication << endl;
        cout << "Duration : " << duration << endl;
    }
};

int main()
{
    Media *ptr[2];
    Book b;
    DVD d;

    ptr[0] = &b;
    ptr[1] = &d;

    ptr[0]->getdata();
    ptr[1]->getdata();

    ptr[0]->showdata();
    ptr[1]->showdata();

    return 0;
}