
// Program to add 2 heights given in feet, and inch by returning object from function.

#include <iostream>
using namespace std;
class height
{
private:
    int feet, inches;

public:
    void getheight();
    void displayheight();
    height addheight(height);
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
    cout << feet << " feet " << inches << " Inches." << endl;
}
height height ::addheight(height h)
{
    height temp;
    temp.inches = inches + h.inches;
    temp.feet = temp.inches / 12;
    temp.inches = temp.inches % 12;
    temp.feet = temp.feet + feet + h.feet;
    return temp;
}
int main()
{
    height h1, h2, result;
    cout << "Enter first height:" << endl;
    h1.getheight();
    cout << "Enter second height:" << endl;
    h2.getheight();
    cout << "The first entered height is " << endl;
    h1.displayheight();
    cout << "The second entered height is " << endl;
    h2.displayheight();

    result = h1.addheight(h2);
    cout << "The sum of these 2 heigts is ";
    result.displayheight();
    return 0;
}
