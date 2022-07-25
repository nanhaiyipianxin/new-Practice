#include<stdio.h>

int main13()
{
	char ch1[] ="hello";
	char ch2[] = "world";
	char cha3[20];
	int i = 0; int j = 0;
	while (ch1[i]!='\0')
	{
		cha3[i] = ch1[i];
		i++;
	}
	while (ch2[j] != '\0')
	{
		cha3[i + j] = ch2[j];
		j++;
	}
	cha3[i+j] = 0;
	printf("%s\n", cha3);






	return 0;
}