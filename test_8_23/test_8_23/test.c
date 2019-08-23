#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//将字符串第一个的字符先复制一份，然后依次将字符串向左移动一位，再将第一个字符赋值到最后。若要左旋K个字符，只需循环K次。
//int my_strlen(char* src)
//{
//	if (*src == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(src + 1);
//	}
//}
//void LeftHanded(char* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int len =my_strlen(str);
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//void Print(char* arr)
//{
//	printf("%s", arr);
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	printf("请输入要旋的个数>");
//	scanf("%d",&k);
//	LeftHanded(arr,k);
//	Print(arr);
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//void LeftHanded(char* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//void RightHanded(char* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int len =strlen(str);
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int is_handed(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < len1 - 1; i++)
//		{
//			char* s = arr1;
//			LeftHanded(s, i);
//			if (strcmp(s, arr2) == 0)
//			{
//				return 1;
//			}
//			s = arr1;
//			RightHanded(s, i);
//			if (strcmp(s, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//	}
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	scanf("%s%s", &arr1, &arr2);
//	int ret = is_handed(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("是旋转之后的字符>");
//	}
//	else
//	{
//		printf("不是旋转之后的字符>");
//	}
//	return 0;
//}

