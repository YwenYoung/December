#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void multiplication();

int main()
{
	srand(time(0));
	multiplication();
	return 0;
}
void multiplication()
{
	int x, y, response = 0;
	cout << "Enter -1 to End." << endl;

	while (response != -1)
	{
		x = rand() % 10;		//x随机产生0至9的整数
		y = rand() % 10;		//y随机产生0至9的整数
		cout << "How much is " << x << " times " << y << " (-1 to End)? ";
		cin >> response;

		while (response != -1 && response != x * y)		//如果response不等于-1或response不等于x和y的乘积，那么就说明乘法计算结果错误
		{
			cout << "No. Please try again." << endl << " ?";
			cin >> response;
		}
		if (response == x * y)							//如果response等于x和y的乘积，就说明输入的结果是正确的
			cout << "Very good!" << endl << endl;
	}
	cout << "That's all for now. Bye." << endl;
}