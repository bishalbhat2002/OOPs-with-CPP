// // to add to distances given in KM, meter and cm.
// // no object returing from the function..
#include<iostream>
using namespace std;
class Distance
{
    private:
    int km, meter, cm;
    public:
    void getdistance();
    void showdistance();
    void adddistance(Distance, Distance);
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
void Distance::adddistance(Distance d1, Distance d2)
{
    cm = d1.cm + d2.cm;
    meter = cm/100;
    cm = cm % 100;
    meter = meter + d1.meter + d2.meter;
    km = meter / 1000;
    meter = meter % 1000;
    km = km + d1.km + d2.km;
}
int main()
{
    Distance d1, d2, result;
    cout<<" --> Enter first distance:"<<endl;
    d1.getdistance();
    cout<<" --> Enter second distance:"<<endl;
    d2.getdistance();
    result.adddistance(d1,d2);
    cout<<"The sum of these distances is ";
    result.showdistance();
    return 0;
}



