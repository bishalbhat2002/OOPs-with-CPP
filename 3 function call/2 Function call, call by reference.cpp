// function call method : call by Reference.
// Program to swap the value of 2 variables.

#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "Displaying values from inside swap() after calling swap():" << endl;
    cout << "a : " << *x << "\t b : " << *y << endl;
}
int main()
{
    int a = 10, b = 15;
    cout << "Values Before Swapping:" << endl;
    cout << "a : " << a << "\t b : " << b << endl;
    swap(&a, &b);
    cout << "Displaying values from inside main() after calling swap():" << endl;
    cout << "a : " << a << "\t b : " << b << endl;
    return 0;
}

/*
    In call by Reference function call, the memory address of actual parametes is passed
    to the function as argument. Any changes performed inside such function directly
    affects the values of origrinal variables in calling function.
*/
