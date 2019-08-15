#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Mul_table(int i, int j,int n)
{
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	printf("请输入要打印的乘法口诀表>");
	scanf("%d", &n);
	Mul_table(i, j,n);
	return 0;
}
void Swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个要交换的数字>");
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
int  Det_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return -1;
}
int main()
{
	int year = 0;
	printf("请输入要判断的年份<");
	scanf("%d", &year);
	int ret = 0;
	ret = Det_leap_year(year);
	if (ret == 1)
	{
		printf("是闰年>");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}
int Jud_prime(int a)
{
	int i = 0;
	for (i = 2; i < a; i++)
	{
		if (a%i == 0)
		{
			return -1;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	printf("请输入你要判断的数字>");
	scanf("%d", &a);
	int ret = Jud_prime(a);
	if (ret == 1)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	return 0;
}
void init(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("数组初始化完成>");
}
void empty(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(arr + i) = 0;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("数组清空完成>");
}
void reverse(int* arr, int sz)
{
	init(arr, sz);
	int tmp = 0;
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("数组逆置完成\n");
}
void menu()
{
	printf("***************************\n");
	printf("********1.初始化数组*******\n");
	printf("********2.清空数组 ********\n");
	printf("********3.逆置数组 ********\n");
	printf("********0.  exit    *******\n");
	printf("***************************\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int i = 0;
	int input = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init(arr, sz);
			break;
		case 2:
			empty(arr, sz);
			break;
		case 3:
			reverse(arr, sz);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}