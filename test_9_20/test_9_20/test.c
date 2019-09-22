#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个操作数");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("you are stupid\n");
//	}
//	else
//	{
//		printf("you are beautiful\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	i = ((a = 2 * 3, a * 5), a + 6);
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}
//int MaxNum(int a, int b)
//{
//	if (a > b)
//	{
//		while (a%b)
//		{
//			int tmp = a%b;
//			a = b;
//			b = tmp;
//		}
//		return b;
//	}
//	else
//	{
//		while (b%a)
//		{
//			int tmp = b%a;
//			b = a;
//			a = tmp;
//		}
//		return a;
//	}
//}
//int MinNum(int x, int a, int b)
//{
//	return (a*b / x);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个操作数>");
//	scanf_s("%d %d", &a, &b);
//	int ret = MaxNum(a, b);
//	int rex = MinNum(ret, a, b);
//	printf("ret = %d\n", ret);
//	printf("rex = %d\n", rex);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int sum = 0;
//	printf("请输入三个整数\n");
//	scanf_s("%d %d %d", &a, &b, &c);       
//	printf("sum = %d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float h = 0;
//	float sum = 0;
//	float s = 0;
//	scanf_s("%f,%f,%f", &a, &b, &h);
//	sum = a + b;
//	s = sum*h / 2.0;
//	printf("%f\n", s);
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1)); //表示计算第二个元素地址的大小
//	printf("%d\n", sizeof(*(a[0] + 1))); //第二个元素的大小
//	printf("%d\n", sizeof(a + 1)); //表示第二行的地址 即第二行第一个元素地址的大小
//	printf("%d\n", sizeof(*(a + 1))); //表示第二行第一个元素的大小
//	printf("%d\n", sizeof(&a[0] + 1)); //还是第二个元素地址的大小
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//}
int main()
{
	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';
	char c4 = '\101';
	char c5 = '\116';
	printf("a%cb%c\tc%c\tabc\n", c1, c2, c3);
	printf("\t\b%c%c", c4, c5);
	return 0;
}