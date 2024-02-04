// Exception handeling program for multiple catch blocks..

#include <iostream>
using namespace std;

int main()
{
	char msg[] = "Divide by 0 not allowed !";
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, counter;
	float n;
	// if we create integer variable n, then when dividing, we will get integer number ..
	// data will be lost when performing division so we create divisor variable 'n' as
	// float.
	try
	{
		cout << "Enter a number for divisor : ";
		cin >> n;
		if (n == 0)
			throw msg;
		cout << "Enter how many numbers in the arry to divide" << endl;
		cin >> counter;
		if (counter > 10)
			throw counter;
		for (i = 0; i < counter; i++)
		{
			cout << "The result on dividing " << nums[i] << " by " << n << " is " << nums[i] / n << endl;
		}
	}
	catch (char str[])
	{
		cout << "EXCEPTION : " << str;
	}
	catch (int index)
	{
		cout << "EXCEPTION : " << index << " Index is out of bound !" << endl;
	}
	return 0;
}