#include<stdio.h>
int main22()
{
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j< 3; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		int ee = 0;
		for (int j = 0; j < 3; j++)
		{
			ee += arr[i][j];
				
		}
		printf("老%d总成绩为:%d\t平均成绩为:%d\n", i + 1, ee, ee / 3);

	}
	for (int i = 0; i < 3; i++)
	{
		int ee = 0;
		for (int j = 0; j < 5; j++)
		{
			ee += arr[j][i];

		}
		printf("第%d门功课的总成绩为:%d\t平均成绩为%d\n", i + 1, ee, ee /5);

	}
	










	return 0;
}