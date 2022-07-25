#include<stdio.h>
#define SIZE 10
int main8()


{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	int max = arr[0];
	for (int e = 0; e < SIZE; e++)
	{
		if (arr[e] > max)
		{
			max = arr[e];
		}
		printf("%d\n", max);
	
	
	}
	return 0;











	return 0;
}