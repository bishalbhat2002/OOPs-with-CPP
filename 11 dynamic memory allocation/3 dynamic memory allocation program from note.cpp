// dynamic memory allocation program from note.
// program to enter total marks of n students and display the average marks
// using dynamic memory allocation.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i;
    float *p, sum = 0, avg;
    cout << "How many students are there ?" << endl;
    cin >> n;
    cout << "Enter the total marks of each students" << endl;
    p = new float[n];
    for (i = 0; i < n; i++)
    {
        cin >> *(p + i);
        sum = sum + *(p + i);
    }
    avg = sum / n;
    cout << "The marks you entered are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(4) << *(p + i);
    }
    cout << endl;
    cout << "The average marks of students are : ";
    cout << endl
         << avg;
    delete[] p;
    return 0;
}