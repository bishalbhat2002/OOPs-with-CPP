// Opening a file using member function fopen();
// Program to write a "Welcome to my Domain Expansion !"
// in a file named "anime.txt" using open() function.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("anime.txt");
    file << "Welcome to my Domain Expansion !";
    file.close();

    cout << "Message writing to file successfully completed !" << endl;
    return 0;
}