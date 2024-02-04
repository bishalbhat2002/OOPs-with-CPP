// Another program to demonstrate this keyword.

#include<iostream>
using namespace std;
class Salary
{
    private:
    int basic;
    public:
    void getsalary(int);
    void displaysalary();
};
void Salary::getsalary(int b)
{
    // basic = b;
    this -> basic = b;
    /*
        both the above 2 statements are same. 
    */
}
void Salary::displaysalary()
{
    cout<<"salary without using this keyword : "<<basic<<endl;
    cout<<"salary using this keyword : "<<this->basic<<endl;
}
int main()
{
    Salary s;
    s.getsalary(20000);
    s.displaysalary();
    return 0;
}