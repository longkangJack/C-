#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'e'&&ch <= 'q')
//			break;
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}
//continue 跳过下面的命令
//break 跳出循环
//将数组A中的内容和数组B中的内容进行交换
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr2[i]);
	}
	system("pause");
	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
int main()
{
	int i = 0;
	double sum = 0;
	int j = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + j*1.0 / i;
		j = -j;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}