#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");//static���ξֲ�����ʱ�ı��˾ֲ�������������
//	return 0;
//}
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
//2. ����������ʱ���������������������ݣ������⣩
//3.��10 �����������ֵ��
//4.�����������Ӵ�С�����
//5.�������������Լ����
//����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�� ����ͬ��
//int g_val = 2019;
//int main()
//{
//	printf("%d ", g_val);
//	system("pause");
//	return 0;
//}
//void Exchange(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exchange(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		max = a;
//		a = b;
//		b = max;
//	}
//	if (a<c)
//	{
//		max = a;
//		a = c;
//		c = max;
//	}
//	if (b<c)
//	{
//		max = b;
//		b = c;
//		c = max;
//	}
//	printf("�������Ӵ�С��˳���ǣ�%d, %d, %d", a, b, c);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	system("pause");
//	return 0;
//}
//շת����������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a%b!= 0)
//	{
//		tmp = a%b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
