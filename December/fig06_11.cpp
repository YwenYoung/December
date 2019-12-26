#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main()
{
	//���б�ʾ��Ϸ״̬�ĳ�����ö��
	enum Status { CONTINUE, WON, LOST };//���еĳ����ô�д��ʾ

	//ʹ�õ�ǰʱ����������������
	srand(static_cast<unsigned int>(time(0)));

	unsigned int myPoint = 0;//��һ�ֲ���Ҳ��Ӯ����0��
	Status gameStatus = CONTINUE;//���԰���������Ӯ��������״̬
	unsigned int sumOfDice = rollDice();//��һ��������

	//�γ���Ϸ״̬�ͻ��ڵ�һ�������ӵĵ���
	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
		break;
	}
	while (CONTINUE == gameStatus)
	{
		sumOfDice = rollDice();

		if (sumOfDice = myPoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sumOfDice == 7)
			{
				gameStatus = LOST;
			}
		}
	}

	if (WON == gameStatus)
	{
		cout << "Player wins" << endl;
	}
	else
	{
		cout << "Player loses" << endl;
	}
}

//�����ӣ�������������֮�ͣ���ʾ���
unsigned int rollDice()
{
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 2 + rand() % 6;
	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}