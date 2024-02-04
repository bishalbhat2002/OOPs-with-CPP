// Program to write name, roll no, marks in 5 subjects,
// store the info in a file named "marks.txt".

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20];
    int rollno;
    float phy, chem, cpp, math, eng;
    cout << "Enter name : ";
    cin.getline(name, sizeof(name));
    cout << "Enter roll : ";
    cin >> rollno;
    cout << "Enter marks in phy, chem, cpp, math, eng:" << endl;
    cin >> phy >> chem >> cpp >> math >> eng;
    cout << endl;

    ofstream file("marks.txt");
    file << "Name : " << name << endl;
    file << "Roll number : " << rollno << endl;
    file << "Marks in 5 subjects are:" << endl;
    file << "\t Physics : " << phy << endl;
    file << "\t Chemistry : " << chem << endl;
    file << "\t C++ : " << cpp << endl;
    file << "\t Math : " << math << endl;
    file << "\t English : " << eng << endl;
    file.close();

    cout << "Writing data on file sucessfully completed.." << endl;

    return 0;
}