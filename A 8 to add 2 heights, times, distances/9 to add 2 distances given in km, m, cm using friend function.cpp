

// to add to distances given in KM, meter and cm.
// using friend function..
#include<iostream>
using namespace std;
class Distance
{
    private:
    int km, meter, cm;
    public:
    void getdistance();
    void showdistance();
    friend Distance adddistance(Distance &, Distance &);
};
void Distance::getdistance()
{
    cout<<"Km : ";
    cin>>km;
    cout<<"Meter : ";
    cin>>meter;
    cout<<"cm : ";
    cin>>cm;
}
void Distance :: showdistance()
{
    cout<<km<<" km "<<meter<<" meter "<<cm<<" cm."<<endl;
}
Distance adddistance (Distance &d1, Distance &d2)
{
    Distance temp;
    temp.cm = d1.cm + d2.cm;
    temp.meter = temp.cm/100;
    temp.cm = temp.cm % 100;
    temp.meter = temp.meter + d1.meter + d2.meter;
    temp.km = temp.meter / 1000;
    temp.meter = temp.meter % 1000;
    temp.km = temp.km + d1.km + d2.km;
    return temp;
}
int main()
{
    Distance d1, d2, result;
    cout<<" --> Enter first distance:"<<endl;
    d1.getdistance();
    cout<<" --> Enter second distance:"<<endl;
    d2.getdistance();
    result = adddistance(d1,d2);
    cout<<"The sum of these distances is ";
    result.showdistance();
    return 0;
}