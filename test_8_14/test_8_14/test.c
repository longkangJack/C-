#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include"game.h"
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择>");
//		}
//	} while (input);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char password[] = "123456";
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码>\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int  ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch>='A'&&ch<='Z')
		{
			putchar(ch + 32);
		}
		else
		{
			;
		}
	}
	system("pause");
	return 0;
}