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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��>");
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
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
//		printf("����������>\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�˳�����\n");
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