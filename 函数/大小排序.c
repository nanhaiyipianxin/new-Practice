void zhizhenpaixu(int* arr, int len)
{
	//int len = sizeof(arr) / sizeof(arr[0]);        乱码了因为数组被挪用的时候数组变成了数组地址，然后数组地址相除，自然就错误了
	for (int i = 0; i < len - 1; i++)   //从第一个开始i=0
	{
		for (int j = 0; j < len - 1-i; j++)    //限制循环次数，每比较后-i限制比对次数，j++用于数组偏移
		{
			if (*(arr + j) > *(arr + j + 1))   //排序                   从第一个开始然后如果大于就替换，然后替换后还是这个数比对下一个数，如果大于就替换一直向下
			{																//最外层循环是为了防止一个很大的数被替换到最后，其他值还没有被排序高地，想想如果是一个很大的值是第一位
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;

			}

		}

	}return;
}
