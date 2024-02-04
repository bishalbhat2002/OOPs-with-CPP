// friend function
// Program to calculate the area and perimeter of circle using friend function.
// perimeter of circle = circumference of circle
#include<iostream>
#define pi 3.14
using namespace std;
class circle
{
    private:
    float radius;
    public:
    void getradius();
    friend void Area(circle);
    friend void perimeter(circle);
};
void circle :: getradius()
{
    cout<<"Enter the radius of circle : ";
    cin>>radius;
}
void Area(circle c)
{
    float area;
    area = pi*(c.radius)*(c.radius);
    cout<<"The area of circle is "<<area<<endl;
}
void perimeter(circle c)
{
    float perimeter;
    perimeter = 2*pi*c.radius;
    cout<<"The perimeter of circle is "<<perimeter<<endl; 
}
int main()
{
    circle c;
    c.getradius();
    Area(c);
    perimeter(c);
    return 0;
}