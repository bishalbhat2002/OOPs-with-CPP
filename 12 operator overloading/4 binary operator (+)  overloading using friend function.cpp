// Binary Operator (+) operator overloading using class fucntion!!

#include <iostream>
using namespace std;
class complex
{
private:
	int real, img;

public:
	complex() // default constructor
	{
		real = 0;
		img = 0;
	}
	complex(int a, int b) // constructor with parameter
	{
		real = a;
		img = b;
	}
	void display()
	{
		if (img < 0)
			cout << real << " - " << (-1) * img << "i" << endl;
		else
			cout << real << " + " << img << "i" << endl;
	}
	friend complex operator+(complex &, complex &); // friend function declared
};
complex operator+(complex &c1, complex &c2) // friend funciton defined.
{
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}
int main()
{
	complex c1(4, -8); // call to parameterized constructor.
	complex c2(5, 7);  // call to parameterized constructor.
	c1.display();
	c2.display();
	cout << endl;

	complex result; // call to default constructor.
	result = c1 + c2;
	cout << "The sum of above complex numbers is: ";
	result.display();
	return 0;
}
