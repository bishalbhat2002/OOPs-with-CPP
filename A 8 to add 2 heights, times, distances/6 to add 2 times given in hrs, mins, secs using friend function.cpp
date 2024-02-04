
// --> Same qm using friend function..
// returning object from function....
// Program to add 2 times given in hr, min, seconds.

#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void getTime();
    void displayTime();
    friend Time addTime(Time &, Time &);
};

void Time ::getTime()
{
    cout << "Hours : ";
    cin >> hour;
    cout << "Minutes : ";
    cin >> min;
    cout << "Seconds : ";
    cin >> sec;
}
void Time ::displayTime()
{
    cout << hour << " Hour " << min << " Minutes " << sec << " Seconds." << endl;
}
 Time addTime(Time &t1, Time &t2)
{
    Time temp;
    temp.sec = t1.sec + t2.sec;
    temp.min = temp.sec / 60;
    temp.sec = temp.sec % 60;
    temp.min = temp.min + t1.min + t2.min;
    temp.hour = temp.min / 60;
    temp.min = temp.min % 60;
    temp.hour = temp.hour + t1.hour + t2.hour;
    return temp;
}
int main()
{
    Time t1, t2, result;
    cout << " --> Enter first time:" << endl;
    t1.getTime();
    cout << " --> Enter second time:" << endl;
    t2.getTime();
    result = addTime(t1, t2);
    cout << "The sum of these 2 times is ";
    result.displayTime();
    return 0;
}