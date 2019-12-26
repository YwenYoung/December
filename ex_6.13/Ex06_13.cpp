#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void roundToIntegers(void);

int main()
{
	roundToIntegers();
	return 0;
}

void roundToIntegers(void)
{
	double x;
	double y;
	cout << fixed;

	for (int loop = 1; loop <= 3; loop++)
	{
		cout << "Enter a number: ";
		cin >> x;

		y = floor(x + .5);	//该语句的方法也就是我们通常说的“四舍五入”计算方法
		cout << setprecision(4) << x << " rounded is " << setprecision(1) << y << endl;
	}
}