#include<stdio.h>
#include<stdlib.h>
//��ӡ1-100�ĺͣ���д����д���֣�������1����ѭ����
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int sum(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}
//int main()
//{
//	int ret = sum(100);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//2.��һ���������ҳ����ֵ��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	printf("������һ��������>");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//��ӡ��쳲��������е�ǰ10��
//1 1 2 3 5 8 13
//int fib(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	int n = 10;
//	for (i = 1; i <=n; i++)
//	{
//		int ret = fib(i);
//		printf("%d ", ret);
//	}
//	return 0;
//}
//
//int is_leapyear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return -1;
//}
//int main()
//{
//	int year = 0;
//	printf("���������\n");
//	scanf_s("%d", &year);
//	int ret = is_leapyear(year);
//	if (ret == 1)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��ƽ��");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//			for (j = 2; j < i; j++)
//			{
//				if (i%j == 0)
//					break;
//			}
//			if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}
int main()
{
	double h = 50.0, i = 2, sum = 50;
	while (i <= 10)
	{
		h = 0.5*h;
		sum = sum + h * 2;
		i++;
	}
	printf("��ʮ�����ʱ������%lf��\n", sum);
	return 0;
}
	