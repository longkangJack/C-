#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//���ַ�����һ�����ַ��ȸ���һ�ݣ�Ȼ�����ν��ַ��������ƶ�һλ���ٽ���һ���ַ���ֵ�������Ҫ����K���ַ���ֻ��ѭ��K�Ρ�
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
//	printf("������Ҫ���ĸ���>");
//	scanf("%d",&k);
//	LeftHanded(arr,k);
//	Print(arr);
//	return 0;
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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
//		printf("����ת֮����ַ�>");
//	}
//	else
//	{
//		printf("������ת֮����ַ�>");
//	}
//	return 0;
//}

