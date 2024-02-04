
// Program to write a message "Welcome to my college !" in a file
// named "welcome.txt" using ofstream.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("welcome.txt");
    file << "Welcome to my college !";
    file.close();
    cout << "Data writing to file successfully completed !" << endl;
    return 0;
}
