#include<stdio.h>
#define SIZE 10
int main()


{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("以下是输入数据\n");
	for (int q = 0; q < SIZE; q++)
	{
		printf("%d\n", arr[q]);
	}
	printf("以下是输出数据，最高值\n");

	int max = arr[0];
	for (int e = 1; e < SIZE; e++)
	{
		if (arr[e] > max)
		{
			max = arr[e];
		}
		


	}
	printf("%d\n", max);
	return 0;

	return 0;
}
