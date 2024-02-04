
// Exception handeling program..
// Program for division of 2 numbers using exception handling.

#include <iostream>
using namespace std;
int main()
{
	float num1, num2, result;
	cout << "Enter any 2 positive numbers:" << endl;
	cin >> num1 >> num2;
	try
	{
		if (num2 != 0)
		{
			result = num1 / num2;
			cout << "Dividing " << num1 << " by " << num2 << " we get ";
			cout << "the result = " << result << endl;
		}
		else
			throw(num2);
	}
	catch (float n)
	{
		cout << "Divisible by 0 is not allowed";
	}
	return 0;
}
