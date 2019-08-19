#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
strlen的三种模拟实现
1.利用指针数组
int my_strlen(char* str)
{
	char* end = str;
	while (*end)
	{
		end++;
	}
	return end - str;
}
int main()
{
	char arr[] = "abcdef";
	int ret = 0;
	ret = my_strlen(arr);
	printf("ret = %d\n", ret);
	return 0;
}
2.计数器
int my_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int ret = 0;
	ret = my_strlen(arr);
	printf("ret = %d\n", ret);
	return 0;
}
3.递归调用实现STRLEN
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}
int main()
{
	char arr[] = "abcdef";
	int ret = 0;
	ret = my_strlen(arr);
	printf("ret = %d\n", ret);
	return 0;
}
int count_one_bits(unsigned int value)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bits(n);
	printf("ret = %d\n",ret);
	return 0;
}
void Print(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
	}
	else
	{
		Print(n / 10);
		printf("%d\n", n % 10);
	}
}
int main()
{
	int n = 0;
	printf("请输入操作数>");
	scanf("%d", &n);
	Print(n);
	return 0;
}
int compare(long int n, long int m)
{
	int count = 0;
	long int tmp = m^n;
	while (tmp != 0)
	{
		count++;
		tmp = tmp&(tmp-1);
	}
	return count;
}
int main()
{
	long int n = 0;
	long int m = 0;
	long int ret = 0;
	printf("请输入m,n的值\n");
	scanf("%d", &n, &m);
	ret = compare(n,m );
	printf("ret = %d\n", ret);
	return 0;
}
