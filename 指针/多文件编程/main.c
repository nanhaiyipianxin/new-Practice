#include<stdio.h>
#include"heat.h"

int main(void)
{
	int qq[9] = { 1,46,6,8,4,5,7,15,5 };
	 zhizhenpaixu(qq,9);
	for(int w=0;w<9;w++)
	{
		printf("%d\n", qq[w]);
	}
	return 0;

}
