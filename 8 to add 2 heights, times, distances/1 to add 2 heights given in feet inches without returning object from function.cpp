// Program to add 2 heights given in feet, and inch without
// returning object from function.

#include <iostream>
using namespace std;
class height
{
private:
    int feet, inches;

public:
    void getheight();
    void displayheight();
    void addheight(height, height);
    // height addheight(height);    
};
void height ::getheight()
{
    cout << "Feet : ";
    cin >> feet;
    cout << "Inches : ";
    cin >> inches;
}
void height::displayheight()
{
    cout << feet << " feet " << inches << " Inches."<< endl;
}
void height::addheight(height h1, height h2)
{
    inches = h1.inches + h2.inches;
    feet = inches / 12;
    inches = inches % 12;
    feet = feet + h1.feet + h2.feet;
}
int main()
{
    height h1, h2,result;
    cout<<"Enter first height:"<<endl;
    h1.getheight();
    cout<<"Enter second height:"<<endl;
    h2.getheight();
    cout<<"The first entered height is "<<endl;
    h1.displayheight();
    cout<<"The second entered height is "<<endl;
    h2.displayheight();
    result.addheight(h1,h2);
    cout<<"The sum of these 2 heigts is ";
    result.displayheight();

    return 0;
}

