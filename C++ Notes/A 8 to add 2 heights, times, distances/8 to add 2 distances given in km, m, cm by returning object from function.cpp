

// to add to distances given in KM, meter and cm.
// object returing from the function..
#include<iostream>
using namespace std;
class Distance
{
    private:
    int km, meter, cm;
    public:
    void getdistance();
    void showdistance();
    Distance adddistance(Distance);
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
Distance Distance::adddistance(Distance d)
{
    Distance temp;
    temp.cm = cm + d.cm;
    temp.meter = temp.cm/100;
    temp.cm = temp.cm % 100;
    temp.meter = temp.meter + meter + d.meter;
    temp.km = temp.meter / 1000;
    temp.meter = temp.meter % 1000;
    temp.km = temp.km + km + d.km;
    return temp;
}
int main()
{
    Distance d1, d2, result;
    cout<<" --> Enter first distance:"<<endl;
    d1.getdistance();
    cout<<" --> Enter second distance:"<<endl;
    d2.getdistance();
    
    result = d1.adddistance(d2);
    cout<<"The sum of these distances is ";
    result.showdistance();
    return 0;
}

