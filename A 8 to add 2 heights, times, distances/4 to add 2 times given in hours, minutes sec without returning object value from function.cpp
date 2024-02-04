// // Program to add 2 times given in hr, min, seconds.
//--------> no returning object from function.
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void getTime();
    void displayTime();
    void addTime(Time, Time);
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
void Time::addTime(Time t1, Time t2)
{
    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hour = min / 60;
    min = min % 60;
    hour = hour + t1.hour + t2.hour;
}
int main()
{
    Time t1, t2, result;
    cout << " --> Enter first time:" << endl;
    t1.getTime();
    cout << " --> Enter second time:" << endl;
    t2.getTime();
    result.addTime(t1, t2);
    cout << "The sum of these 2 times is ";
    result.displayTime();
    return 0;
}



