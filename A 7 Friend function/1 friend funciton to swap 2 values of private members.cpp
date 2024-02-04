// modifying the private data using friend function!!
// program to swap the value of 2 variables.

#include<iostream>
using namespace std;
class test
{
    private:
    int x = 50, y = 30;
    public:
    void displaydata()
    {
        cout<<"Value of x : "<<x<<endl
            <<"Value of y : "<<y<<endl;
    }
    friend void swap(test &);
};
void swap(test &a)
{
    int temp = a.x;
    a.x = a.y;
    a.y = temp;
    a.displaydata();
}
int main()
{
    test t;
    t.displaydata();
    cout<<"after swapping"<<endl;
    swap(t);
    cout<<"Inside main after swapping"<<endl;
    t.displaydata();
    return 0;
}