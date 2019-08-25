#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水。
//编程实现。
//3.模拟实现strcpy
//4.模拟实现strcat
//char* my_strcpy(char* src, const char* dest)
//{
//	assert(dest != NULL);
//	while (*src=*dest)
//	{
//		src++;
//		dest++;
//	}
//}
//void Print(arr2)
//{
//	printf("%s\n", arr2);
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[10] = { 0 };
//	my_strcpy(arr2, arr1);
//	Print(arr2);
//	return 0;
//}
char* my_strcat(char*dest, const char*src)
{
	assert(src != NULL);
	char* end = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return end;
}
int main()
{
	char arr1[10] = "abcde";
	char arr2[10] = "hik";
	char* ret = my_strcat(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}
//int count(int money)
//{
//	int num = money;
//	int empty = num;
//	while (empty >= 2)
//	{
//		num = num + empty / 2;
//		if (empty % 2 == 0)
//		{
//			empty = empty / 2;
//		}
//		else
//		{
//			empty = empty / 2 + 1;
//		}
//	}
//	return num;
//}
//int main()
//{
//	int money = 20;
//	int num = count(money);
//	printf("num = %d\n", num);
//	return 0;
//}
