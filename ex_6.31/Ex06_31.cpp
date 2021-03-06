#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
	int a;
	int b;

	for (int j=1;j<=3;j++)
	{
		cout << "Enter two integers: ";
		cin >> a >> b;

		cout << "The greatest common divisor of " << a << " and " << b << " is ";

		cout << gcd(a, b) << endl;
	}
	return 0;
}

int gcd(int x, int y)
{
	int greatest = 1;
	for (int i = 2; i <= ((x < y) ? x : y);i++)
	{
		if (x%i == 0 && y%i == 0)
			greatest = i;
	}
	return greatest;
}