#include <iostream>
using namespace std;
bool isEven(int);

int main()
{
	int x;
	for (int i = 1; i <= 3; i++)
	{
		cout << "Enter an integer: ";
		cin >> x;

		if (isEven(x))
			cout << x << " is an odd integer\n\n";
		else
			cout << x << " is an even integer\n\n";
	}
	cout << endl;
	return 0;
}
bool isEven(int a)
{
	return !((a+1) % 2);//（a+1）%2是判断奇数，a%2是判断偶数，记得前面要加叹号
}