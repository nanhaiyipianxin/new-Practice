#include<stdio.h>

int main2()
{
	int a;
	int b;
	int c;
	printf("��������ֻ���������:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("A������\n");
		}
		else {
			printf("C���������ص�\n");
		}
	}
	else
	{
		if (a > b)
		{
			printf("B����");
		}
		else
		{
			printf("c�����ص�");
		}




	}

	return 0;



}