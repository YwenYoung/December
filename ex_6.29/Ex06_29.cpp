#include <iostream>
#include<iomanip>
using namespace std;

bool isPrime(int);

int main()
{
	int count = 0;
	cout << "The prime numbers from 1 to 10000 are: " << endl;
	count++;
	cout << setw(6) << 2;

	for (int loop = 3; loop < 10000; loop += 2)
	{
		if (isPrime(loop))
		{
			count++;
			cout << setw(6) << loop;

			if (count % 10 == 0)
				cout << '\n';
		}
	}

	cout << endl << "Total of " << count << " prime numbers between 1 and 10000." << endl;
	return 0;
}

bool isPrime(int n)
{
	for (int loop2 = 2; loop2 <= n / 2; loop2++)
	{
		if (n%loop2 == 0)
			return false;
	}
	return true;
}