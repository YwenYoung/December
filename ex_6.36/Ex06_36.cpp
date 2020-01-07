#include <iostream>
using namespace std;
long power(long, long);

int main()
{
	long b;
	long e;

	cout << "Enter a base and an exponent: ";
	cin >> b >> e;

	cout << b << " raised to the " << e << " is " << power(b, e) << endl;

	return 0;
 }

long power(long base, long exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}