#include<stdio.h>
#include<stdlib.h>
//打印1-100的和（能写几种写几种，至少有1种是循环）
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
//2.在一个数组中找出最大值。
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	printf("请输入一个操作数>");
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
//打印出斐波那契数列的前10项
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
//	printf("请输入年份\n");
//	scanf_s("%d", &year);
//	int ret = is_leapyear(year);
//	if (ret == 1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("是平年");
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
//int main()
//{
//	double h = 50.0, i = 2, sum = 50;
//	while (i <= 10)
//	{
//		h = 0.5*h;
//		sum = sum + h * 2;
//		i++;
//	}
//	printf("第十次落地时共经过%lf米\n", sum);
//	return 0;
//}

//#define MAXN 10
//int Sum(int List[], int N)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i<N; i++)
//	{
//		sum = sum + List[i];
//	}
//	return sum;
//}
//int main()
//{
//	int List[MAXN] = { 0 };
//	int N = 0;
//	int i = 0;
//	scanf_s("%d", &N);
//	for (i = 0; i<N; i++)
//	{
//		scanf_s("%d", &List[i]);
//	}
//	printf("%d\n", Sum(List, N));
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1



//

//int main()

//{

//	printf("hehe\n");

//	return 0;

//}





#include <stdio.h>

#include <string.h>



// void my_strcpy(char* dest, char* src)

// {

// 	while(*src)

// 	{

// 		*dest = *src;

// 		dest++;

// 		src++;

// 	}

// 	*dest = *src;

// }

//#include <assert.h>

//

//char* my_strcpy(char* dest, const char* src)

//{

//	char* ret = dest;

//	assert(dest != NULL);//断言

//	assert(src != NULL);//断言

//

//	while(*dest++ = *src++)

//	{

//		;

//	}

//	return ret;

//}

//

//

//int my_strlen(const char* str)

//{

//	int count = 0;

//	assert(str != NULL);

//	while(*str++)

//	{

//		count++;

//	}

//	return count;

//}

//

//int main()

//{

//	char arr1[20] = {0};

//	char arr2[20] = "bit";

//	my_strcpy(arr1, arr2);

//

//	printf("%s\n", arr1);

//	printf("%d\n", my_strlen(arr1));

//	return 0;

//}

//函数调用约定

//



//

//int main()

//{

//	const int num = 10;

//	int n = 0;

//	//num = 20;

//    int *const p = &num;

//	//

//	//const 放在*的左边，修饰的是*p，意思是指针指向的内容不能改变

//	//但是指针变量本身可以被修改

//	//const 放在*的右边，修饰的是p，意思是指针指向的内容可以改变

//	//但是指针变量本身不可以被修改

//	//

//	*p = 20;

//	p = &n;

//

//	printf("%d\n", num);

//

//	return 0;

//}



//int main()

//{

//	//野指针

//	int a = 10;

//	int *p = &a;

//	*p = 20;

//

//	return 0;

//}

//

//



//

//int main()

//{

//	int* p = NULL;

//	if(p != NULL)

//		*p = 10;

//

//	return 0;

//}

//

//char* test()

//{

//	char arr[] = "abcdef";

//	return arr;

//}

//

//int main()

//{

//	char *str = test();

//	printf("%s\n", str);

//

//	return 0;

//}

//

#include <assert.h>



//int main()

//{

//	assert(0 == 1);

//	printf("hehe");

//	return 0;

//}

//

//

//int Add(int x, int y)

//{

//	return x+y;

//}

//

//int main()

//{

//	Add(1, 3);

//	return 0;

//}

//

//void test(void)

//{

//	printf("hehe:100\n");

//}

//

//int main()

//{

//	test(100);

//

//	return 0;

//}



//

//int main()

//{

//	//

//	//00 00 00 14

//	//

//	//整数-二进制

//	//原码-反码-补码

//	//正整数：原码，反码，补码相同

//	//负整数：

//	//

//	int a = 20;

//	//000000000000000000000000 00010100

//	//00 00 00 14

//	//

//	int b = -10;

//	//100000000000000000000000000001010-原码

//	//111111111111111111111111111110101-反码

//	//111111111111111111111111111110110-补码

//	//FFFFFFF6

//

//	return 0;

//}

//

//

//int main()

//{

//	1-1;

//	1+ (-1);

//

//	return 0;

//}

//00000000000000000000000000000001

//11111111111111111111111111111111

//00000000000000000000000000000000



//10000000000000000000000000000001

//11111111111111111111111111111110

//11111111111111111111111111111111

//10000000000000000000000000000010

//



//int check_sys()

//{

//	int a = 1;

//	char* pc = (char*)&a;

//	if(*pc == 1)

//	{

//		return 1;

//	}

//	else

//	{

//		return 0;

//	}

//}

//

//int check_sys()

//{

//	int a = 1;

//	//返回1表示小端

//	//返回0表示大端

//	return *(char*)&a;

//	//char* pc = (char*)&a;

//	//return *pc;

//}

//

//int main()

//{

//	if(check_sys() == 1)

//	{

//		printf("小端\n");
//}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//
//typedef struct s
//{
//	char name[20];
//	short int age;
//	float score[30];
//}stu;
//int main()
//{
//    stu s1  = { "zhangsan", 18, 91.5 };
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);
//	system("pause");
//	return 0;
//}
/*define MAXSIZE 10*/
//typedef struct
//{
//	int elem[MAXSIZE];
//	int length;
//}SeqList;
//SeqList * L;
//void Init_SeqList(SeqList * L)
//{
//	L->length = 0;//长度初始化为0;
//	//L->elem[length];
//}
//
//int main()
//{
//	//初始化顺序表
//	
//	Init_SeqList(&L);
//	for (L->length = 0; L->length < MAXSIZE; L->length++)
//	{
//		printf("%d ", L->elem[L->length]);
//	}
//	return 0;
//}
//int main()
//{
//	int x = 11;
//	printf("%d ", x++ * 1 / 3);
//	return 0;
//}
//int main()
//{
//	int  x = -1;
//	do {
//		x = x * x;
//	} while (x == 0);
//
//	return 0;
//}
//int main()
//{
//	char c1 = 'b';
//	char c2 = 'e';
//	printf("%d,%c\n", c2 - c1, c2 - 'a' + 'A');
//	return 0;
//}
//int main()
//{
//	int a, b;
//	for (a = 1, b = 1; a <= 10; a++)
//	{
//		if (b >= 5)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		b -= 5;
//	}
//	printf("%d", b);
//	return 0;
//}
#define  MA(x, y)  (x)*(y)
int main()
{
	int i = 2;
	i = 3 / MA(i, i + 2) + 5;
	printf("%d\n", i);
	return 0;
}
