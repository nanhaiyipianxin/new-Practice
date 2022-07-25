#include<stdio.h>

int main155()
{
	int i = 1;
	while (i<200)
	{

	
	
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7 || i%100 == 7)
		{
			printf("敲桌子\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}






	return 0;
}
