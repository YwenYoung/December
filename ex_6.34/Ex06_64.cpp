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
		x = rand() % 10;		//x�������0��9������
		y = rand() % 10;		//y�������0��9������
		cout << "How much is " << x << " times " << y << " (-1 to End)? ";
		cin >> response;

		while (response != -1 && response != x * y)		//���response������-1��response������x��y�ĳ˻�����ô��˵���˷�����������
		{
			cout << "No. Please try again." << endl << " ?";
			cin >> response;
		}
		if (response == x * y)							//���response����x��y�ĳ˻�����˵������Ľ������ȷ��
			cout << "Very good!" << endl << endl;
	}
	cout << "That's all for now. Bye." << endl;
}