#include <iostream>
using namespace std;

int main()
{
    int x;
    char name[25];
    cout << "Enter your full name : ";
    cin.get(name, sizeof(name));

    cout << "Enter any number : ";
    cin >> x;

    cout << "Name : " << name << endl;
    cout << "The number you entered is " << x << endl;
    return 0;
}

/*
    In C++ programming language, we use "cout<<" to display information just like
    we used printf(), "cin>>" to take input from user just like scanf(), and
    "cin.get()" or "cin.getline()" to take string input just like gets() in C programming.
*/

/*
    The syntax for cin.get() or cin.getline() is given below:
    1) This syntax is used to take single line string input from user.
         cin.get(string_variable_name, sizeof(variable_name));
                Example:
                char name[25];
                cout<<"Enter you name."<<endl;
                cin.get(name,25);
                cout<<"Your name is "<<name<<endl;
    2) This syntax is used to take multiple line string input from user.
         cin.get(string_variable_name, sizeof(variable_name),'symbol');
                Example:
                char paragraph[500];
                cout<<"Enter a paragraph."<<endl;
                cin.get(paragraph, 500, '#');
                cout<<"The paragraph you entered is given below."<<endl<<paragraph<<endl;

                Note: --> In syntax 2, there is symbol in single inverted comma, in that symbol
                          place, a symbol should be specified so that the program will only stop
                          taking input after that symbol is pressed from the keyboard. Untill the
                          specified symbol + enter key is pressed, the program will continue to
                          take string input from user irrespective of pressing just enter key.
*/