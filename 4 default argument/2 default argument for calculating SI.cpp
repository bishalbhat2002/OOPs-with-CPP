// Default argument program.
// program to calculate simple interest.

#include <iostream>
using namespace std;
int simple_interest(int p, int t, int r = 8);
int main()
{
    int principle, time, interest;
    cout << "Enter principle amonut : ";
    cin >> principle;
    cout << "Enter time period in yrs : ";
    cin >> time;
    interest = simple_interest(principle, time);
    cout << "The Simple Interest amount is " << interest << endl;
    return 0;
}
int simple_interest(int p, int t, int r)
{
    int i;
    i = (p * t * r) / 100;
    return i;
}

/*
    In above program, we didnt asked user to enter rate, this is because we have
    set the rate as default argument.
    we assign values from right side to left side in order to declare the default
    arguments.
*/



