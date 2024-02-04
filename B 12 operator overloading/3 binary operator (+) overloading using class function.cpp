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
	complex operator+(complex);
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
int main()
{
	complex c1(4, -8);
	complex c2(5, 7);
	c1.display();
	c2.display();
	cout << endl;

	complex result;
	result = c1 + c2;
	cout << "The sum of above complex numbers is: ";
	result.display();
	return 0;
}
