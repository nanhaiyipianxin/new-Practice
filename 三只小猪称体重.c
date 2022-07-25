#include<stdio.h>

int main2()
{
	int a;
	int b;
	int c;
	printf("请输入三只机体的重量:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("A机体重\n");
		}
		else {
			printf("C机体是最重的\n");
		}
	}
	else
	{
		if (a > b)
		{
			printf("B最重");
		}
		else
		{
			printf("c是最重的");
		}




	}

	return 0;



}