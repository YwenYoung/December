#include <iostream>
using namespace std;

int quotient(int, int);
int remainder(int, int);

int main()
{
	int number;
	int divisor = 1000;

	cout << "Enter an integer between 1 and 32767: ";
	cin >> number;

	cout << "The digits in the number are:\n";

	while (number >= 1)
	{
		if (number>=divisor)
		{
			cout << quotient(number, divisor) << "  ";
			number = remainder(number, divisor);
			divisor = quotient(divisor, 10);
		} 
		else
		{
			divisor = quotient(divisor, 10);
		}
	}
	cout << endl;
	return 0;
}

int quotient(int a, int b)
{
	return a / b;
}
int remainder(int a, int b)
{
	return a % b;
}