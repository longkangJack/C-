#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j+1]>arr[j])
//			{
//				int tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void Print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr,sz);
//	system("pause");
//	return 0;
//}
//void move(int n, char a, char b, char c)
// {
//	    if (n == 1)
//	        printf("\t%c->%c\n", a, c);    //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c
//	    else
//		     {
//		       move(n - 1, a, c, b);            //��n-1��Ҫ��aͨ��c�ƶ���b
//		       printf("\t%c->%c\n", a, c);
//		       move(n - 1, b, a, c);            //n-1���ƶ�����֮��bͨ��a�ƶ���c
//		    }
//}
//
//int main()
//{
//	int n = 0;
//	printf("������Ҫ�ƶ��Ŀ�����");
//	scanf("%d", &n);
//	move(n, 'a', 'b', 'c');
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ�Ƚϵ�����>");
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//	
//		