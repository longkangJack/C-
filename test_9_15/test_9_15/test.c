#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ȷ����ð�����������
//	for(i=0; i<sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for(j=0; j<sz-i-1; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//������
//	int arr[10] = { 0 };
//	//sizeof(arr)/sizeof(arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	//printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1. sizeof(arr);//--��������ʾ�������飬���Լ��������������Ĵ�С����λ���ֽ�
//	//2. &arr; //��������Ȼ��ʾ�������飬����ȡ��������������ĵ�ַ
//	//����֮�⣬���������е�������������Ԫ�صĵ�ַ
//	//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int change = 0;
//	int i = 0;
//	int TRUE = 1;
//	int FALSE = 0;
//	int j = 0;
//	for (i = sz - 1, change = TRUE; i > 1 && change; i--)
//	{
//		change = FALSE;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				change = TRUE;
//			}
//		}
//		if (change == 0)
//			break;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 4, 5, 8, 3, 2, 1, 11, 9, 7, 16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 50; i++)
//	{
//		for (j = 0; j <= 50; j++)
//		{
//			for (k = 0; k <= 50; k++)
//			{
//				if (i + j + k == 50 && i + 2 * j + 5 * k == 100)
//					printf("%d %d %d\n", i, j, k);
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 50; i++)
//	{
//		for (j = 0; j <= 50; j++)
//		{
//			
//			k = 50 - i - j;
//				if (i + j + k == 50 && i + 2 * j + 5 * k == 100)
//					printf("%d %d %d\n", i, j, k);
//			
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (k = 0; i <= 20; k++)
//	{
//		for (j = 0; j <= 50; j++)
//		{
//			i = 50 - j - k;
//				if (i + j + k == 50 && i + 2 * j + 5 * k == 100)
//					printf("%d %d %d\n", i, j, k);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i <= 50; i++)
	{
		for (j = 0; j <= 50; j++)
		{
			for (k = 0; k <= 50; k++)
			{
				if (i + j + k == 50 && i + 2 * j + 5 * k == 100)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}

	system("pause");
	return 0;
}