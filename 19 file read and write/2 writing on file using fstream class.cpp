
// Program to write a message "My name is King Khan !" in a file
// named "welcome.txt" using fstream.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("kingkhan.txt", ios::out);
    file << "My name is King Khan !";
    file.close();
    cout << "Data writing to file successfully completed !" << endl;
    return 0;
}
