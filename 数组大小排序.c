#include<stdio.h>

int main()
{
	int arr[10] = { 1,5,2,3,4,9,6,7,8,10 };
	//外层控制行
	//外层执行元素个数-1次
	for (int i = 0; i < 10 - 1; i++)
	{


		//内层控制列与列的比较
		//内层执行元素个数-1-执行的次数
		for (int j = 0; j < (10 - 1) - i; j++)
		{
			//比较两个元素 满足条件交换
			//通过控制符号排血
			if(arr[j]<arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//在其中循环打印
	for (int i = 0; i < 10; i++) {


		printf("%d\n",arr[i]);
	}
}
