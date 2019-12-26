#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main()
{
	//具有表示游戏状态的常量的枚举
	enum Status { CONTINUE, WON, LOST };//所有的常量用大写表示

	//使用当前时间随机化“随机数”
	srand(static_cast<unsigned int>(time(0)));

	unsigned int myPoint = 0;//第一轮不输也不赢，得0分
	Status gameStatus = CONTINUE;//可以包含继续、赢、输三种状态
	unsigned int sumOfDice = rollDice();//第一次掷骰子

	//形成游戏状态和基于第一次掷骰子的点数
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

//掷骰子，计算两次骰子之和，显示结果
unsigned int rollDice()
{
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 2 + rand() % 6;
	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}