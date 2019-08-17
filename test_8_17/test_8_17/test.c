#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//struct s
//{
//	char name[20];
//	int age;
//	char sex[10];
//};
//int main()
//{
//	struct s a = { "张三", 18, "男" };
//	struct s * ps = &a;
//	printf("%s %d %s\n", ps->name,ps->age, ps->sex);
//	return 0;
//}
//int main()
//{
//	//10000000000000000000000000000001
//	//10000000000000000000000000000000
//	//按位与 同时为1 为1 
//	//10000000000000000000000000000000
//	int count = 0;
//	int num = -1;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数器
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//实现斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//非递归实现
//int fib(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	 1 1 2 3 5 8 12
//	while (n > 2)
//	{
//		c = a + b;
//		b = c;
//		a = b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int npowerk(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*npowerk(n,k-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入两个操作数>");
//	scanf("%d %d", &n, &k);
//	int ret = npowerk(n, k);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int my_strlen(char *arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int fac(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int fac(int n)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//void Print(n)
//{
//	if (n < 10)
//	{
//		printf("%d\n", n);
//	}
//	else
//	{
//		Print(n / 10);
//		printf("%d\n", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//int DigitSum(int n)
//{
//	int m = 0;
//	int sum = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数>");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
int main()
{
	char arr1[] = "X I love you forever X";
	char arr2[] = "                      ";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

