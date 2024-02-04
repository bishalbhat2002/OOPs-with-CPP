// program to read name, roll number, and marks in 5 subjects
// from a file named "marks.txt".

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ifstream file("marks.txt");
    while (getline(file, str))
    {
        cout << str << endl;
    }
    file.close();
    return 0;
}

// // same program using fstream class.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    fstream file("marks.txt", ios::in);
    while (getline(file, str))
    {
        cout << str << endl;
    }
    file.close();
    return 0;
}