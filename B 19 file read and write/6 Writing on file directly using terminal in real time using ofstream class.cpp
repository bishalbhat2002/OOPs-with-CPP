// giving commands directly from terminal..
// opening file using open() member function.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ofstream file;
    file.open("experiment.txt", ios::app);
    cout << "Write what you want to write here:" << endl;
    while (1)
    {
        getline(cin, str);
        if (str == "-1")
            break;
        file << str << endl;
    }
    file.close();

    return 0;
}