/*
	Virtual function program.
	Virtual function is a member function whose functionality can be overriden
	in its derived classes. we declare virtual functions using virtual keyword
	in the base class.
	when we use virtual function, then we have to acess those function using pointer
	variable of base class..
*/
#include <iostream>
using namespace std;
class Base
{
public:
	virtual void show()
	{
		cout << "This is base class (using show function)" << endl;
	}
	void display()
	{
		cout << "This is base class (using display function)" << endl;
	}
};
class derived1 : public Base
{
public:
	void show()
	{
		cout << "This is derived1 class (using show function)" << endl;
	}
	void display()
	{
		cout << "This is derived1 class (using display function)" << endl;
	}
};
class derived2 : public Base
{
public:
	void show()
	{
		cout << "This is derived2 class (using show function)" << endl;
	}
	void display()
	{
		cout << "This is derived2 class (using display function)" << endl;
	}
};
int main()
{
	Base *ptr, b;
	derived1 d1;
	derived2 d2;

	cout << endl;
	ptr = &d1;
	ptr->show();
	ptr->display();
/*
	even though ptr pointer has adress of d1 object, display()
	of derived1 class will not be called. The display() from
	base class will be called by ptr -> display();
	it is because display() in base class is not declared as
	virtual in base class.
	where as show() function is declared as virtual there.
*/
	cout << endl;
	ptr = &d2;
	ptr->show();
	ptr->display();
/*
	even though ptr pointer has adress of d2 object, display()
	of derived2 class will not be called. The display() from
	base class will be called by ptr -> display();
	it is because display() in base class is not declared as
	virtual in base class.
	where as show() function is declared as virtual there.
*/
	cout << endl;
	ptr = &b;
	ptr->show();
	ptr->display();

	return 0;
}
