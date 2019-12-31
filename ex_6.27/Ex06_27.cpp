#include <iostream>
using namespace std;

double smallest(double, double, double);

int main()
{
	double x;
	double y;
	double z;

	cout << "Enter three numbers: " << endl;
	cin >> x >> y >> z;

	cout << "The smallest value is " << smallest(x, y, z) << endl;

	return 0;
}

double smallest(double a, double b, double c)
{
	if (a < b&&a < c)
		return a;
	else if (b < a&&b < c)
		return b;
	else
		return c;
}