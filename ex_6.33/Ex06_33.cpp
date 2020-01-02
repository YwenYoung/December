#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip(void);

int main()
{
	int headsCount = 0;
	int tailsCount = 0;
	srand(time(0));

	for (int loop=1;loop<=100;loop++)
	{
		if (flip()==0)
		{
			tailsCount++;
			cout << "Tails ";
		}
		else
		{
			headsCount++;
			cout << "Heads ";
		}
		if (loop % 10 == 0)		//每投硬币10次，进行一次换行
			cout << endl;
	}
	cout << "\nThe total number of Heads was " << headsCount << "\nThe total number of Tails was " << tailsCount << endl;
	return 0;
}

int flip(void)
{
	return rand() % 2;	//rand()%m这个函数是随机产生0到m-1的随机数；比如rand()%10就是随机产生0到9的随机数。
}