#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Ժȶ�����ˮ��
//���ʵ�֡�
//3.ģ��ʵ��strcpy
//4.ģ��ʵ��strcat
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
