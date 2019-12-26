#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToIntegers(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main()
{
	int count;
	double number;
	cout << "How many numbers do you want to process: " << fixed;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cout << "\nEnter number: ";
		cin >> number;

		cout << setprecision(6) << number << " rounded to the nearest integer is: "
			<< setprecision(0) << roundToIntegers(number) << '\n';
		cout << setprecision(6) << number << " rounded to the nearest integer is: "
			<< setprecision(1) << roundToTenths(number) << '\n';
		cout << setprecision(6) << number << " rounded to the nearest integer is: "
			<< setprecision(2) << roundToHundredths(number) << '\n';
		cout << setprecision(6) << number << " rounded to the nearest integer is: "
			<< setprecision(3) << roundToThousandths(number) << '\n';
	}
	return 0;
}

double roundToIntegers(double n)
{
	return floor(n + .5);
}
double roundToTenths(double n)
{
	return floor(n * 10 + .5) / 10;
}
double roundToHundredths(double n)
{
	return floor(n * 100 + .5) / 100;
}
double roundToThousandths(double n)
{
	return floor(n * 1000 + .5) / 1000;
}