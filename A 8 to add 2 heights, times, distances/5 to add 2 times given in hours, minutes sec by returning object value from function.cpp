
// Program to add 2 times given in hr, min, seconds.
//-- -- -- -- > returning object from function.
#include <iostream>
              using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void getTime();
    void displayTime();
    Time addTime(Time);
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
Time Time::addTime(Time t)
{
    Time temp;
    temp.sec = sec + t.sec;
    temp.min = temp.sec / 60;
    temp.sec = temp.sec % 60;
    temp.min = temp.min + min + t.min;
    temp.hour = temp.min / 60;
    temp.min = temp.min % 60;
    temp.hour = temp.hour + hour + t.hour;
    return temp;
}
int main()
{
    Time t1, t2, result;
    cout << " --> Enter first time:" << endl;
    t1.getTime();
    cout << " --> Enter second time:" << endl;
    t2.getTime();
    result = t1.addTime(t2);
    cout << "The sum of these 2 times is ";
    result.displayTime();
    return 0;
}
