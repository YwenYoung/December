#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double);

int main()
{
	double hour;
	double currentCharge;
	double totalCharges = 0.0;
	double totalHours = 0.0;
	int first = 1;

	cout << fixed;
	/*
		cout<<fixed
		表示用一般的方式输出浮点数
			//参考代码如下：
			//做到前后标签匹配
						#include "iostream"
						#include "stdlib.h"
						#include "math.h"
						using namespace std;
							int main()
							{
								 double num=0.00001;
								 cout<<num<<endl;
								 cout<<fixed;
								 cout<<num;
								 return 0;
							}

			运行结果：
					1e-005
					0.000010
	*/
	cout << "Enter the hours parked for 3 cars: ";

	for (int i = 1; i <= 3; i++)		//三辆车分别计费的一个循环语句块
	{
		if (first)
		{
			cout << "\n";
			cout << setw(5) << "Car" << setw(15) << "Hours" << setw(15) << "Charge\n\n\n";
			first = 0;
		}
		cout << "The hours: ";
		cin >> hour;
		totalHours += hour;

		currentCharge = calculateCharges(hour);
		totalCharges += currentCharge;

		cout << setw(3) << i << setw(17) << setprecision(1) << hour << setw(14) << setprecision(2) << currentCharge << "\n";
	}
	cout << "\n\n\n";
	cout << setw(7) << "TOTAL" << setw(13) << setprecision(1) << totalHours << setw(14) << setprecision(2) << totalCharges << endl;
	return 0;
}

double calculateCharges(double hours)
{
	double charge;

	if (hours < 3.0)
		charge = 2.0;
	else if (hours < 24.0)
		charge = 2.0 + 0.5 * ceil(hours - 3.0);
	else
		charge = 10.0;

	return charge;
}