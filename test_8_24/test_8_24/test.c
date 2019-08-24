#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void menu()
//{
//	printf("*********************************\n");
//
//	printf("**********1.Add     2.sub *******\n");
//
//	printf("**********3.mul     4.div ******\n");
//
//	printf("************ 0.exit  ***********\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int iv(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			scanf("%d%d", &x, &y);
//			ret = Add(x,y);
//			break;
//		case 2:
//			scanf("%d%d", &x, &y);
//			ret =sub(x,y);
//			break;
//		case 3:
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case 4:
//			scanf("%d%d", &x, &y);
//			ret = iv(x, y);
//			break;
//		case 0:
//			printf("退出程序");
//			break;
//		default :
//			printf("选择错误，请重新选择>");
//			break;
//		}
//		printf("%d\n", ret);
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 1;
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, iv };
//	while (input)
//	{
//		menu();
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数>");
//			scanf("%d%d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//		{
//			printf("选择错误,请重新选择>");
//		}
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：javascript:;
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
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
void Reserve_string(char* left,char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reserve(char arr[])
{
	//1.逆序整个字符串
	int len = my_strlen(arr);
	char* end = arr;
	Reserve_string(arr, arr + len - 1);
	/*2.单个字符的逆序*/
	  
	while (*end)
	{
		char* start = end;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		Reserve_string(start, end - 1);
		if (*end != '\0')
			end++;
	}
}
void Print(char* str)
{
	printf("%s",str);
}
int main()
{
	char arr[] = "student a am i";
	reserve(arr);
	Print(arr);
	return 0;
}