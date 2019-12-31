#include <iostream>
#include <cmath>
using namespace std;

unsigned seconds(unsigned, unsigned, unsigned);

int main()
{
	int hours;
	int minutes;
	int secs;
	double first;
	double second;
	double difference;

	cout << "Enter the first time as three integers: ";
	cin >> hours >> minutes >> secs;
	first = seconds(hours, minutes, secs);

	cout << "Enter the second time as three integers: ";
	cin >> hours >> minutes >> secs;
	second = seconds(hours, minutes, secs);
	difference = fabs(first - second);

	cout << "The difference between the time is " << difference << " seconds" << endl;
	return 0;
}

unsigned seconds(unsigned h, unsigned m, unsigned s)
{
	return 3600 * (h >= 12 ? h - 12 : h) + 60 * m + s;
}