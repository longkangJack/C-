#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
//f(x) = 2*x+1;
//f(x, y) = x+y;
//
// strlen()
//
//NULL-空指针-
//null,NUL -- '\0'
//
//
//int main()

//{

//	char arr1[20] = "xxxxxx";

//	char arr2[] = "bit";

//	strcpy(arr1, arr2);

//	printf("%s\n", arr1);

//	return 0;

//}

//

//int main()

//{

//	char arr[] = "hello bit";

//	memset(arr, 'x', 5);

//	printf("%s\n", arr);

//	return 0;

//}

//

//int get_max(int x, int y)

//{

//	return x>y?x:y;

//}

//

//int main()

//{

//	int a = 10;

//	int b = 20;

//	int max = get_max(a, b);

//	//max = get_max(1, 2);

//	//max = get_max(1+7, 2);

//	max = get_max(get_max(2, 3), 1);

//	printf("max = %d\n", max);

//

//	return 0;

//}

//

//void Swap(int x, int y)

//{

//	int tmp = x;

//	x = y;

//	y = tmp;

//}

//

//int main()

//{

//	int a = 10;

//	int b = 20;

//	printf("a = %d b = %d\n", a, b);

//	Swap(a, b);

//	printf("a = %d b = %d\n", a, b);

//

//	return 0;

//}

//

//int main()

//{

//	int a = 10;

//	int* pa = &a;

//	*pa = 20;

//

//	return 0;

//}

//

//

//void Swap1(int x, int y)

//{

//	int tmp = x;

//	x = y;

//	y = tmp;

//}

//

//void Swap2(int* pa, int* pb)

//{

//	int tmp = *pa;

//	*pa = *pb;

//	*pb = tmp;

//}

//int main()

//{

//	int a = 10;

//	int b = 20;

//	printf("a = %d b = %d\n", a, b);

//	

//	Swap1(a, b);//传值调用

//	Swap2(&a, &b);//传址调用

//

//	printf("a = %d b = %d\n", a, b);

//

//	return 0;

//}

//

//int is_prime(int n)

//{

//	int i = 0;

//	for(i=2; i<n; i++)

//	{

//		if(n%i == 0)

//			return 0;

//	}

//	return 1;//素数

//}

////

//TDD-测试驱动开发

//





//

//int is_prime(int n)

//{

//	int i = 0;

//	for(i=2; i<=sqrt(n); i++)

//	{

//		if(n%i == 0)

//			return 0;

//	}

//	return 1;//素数

//}

////

//int main()

//{

//	int i = 0;

//	for(i=100; i<=200; i++)

//	{

//		//判断i是否为素数

//		if(is_prime(i) == 1)

//		{

//			printf("%d ", i);

//		}

//	}

//	return 0;

//}

//

//int is_leap_year(int y)

//{

//	if((y%4==0 && y%100!=0) || (y%400==0))

//		return 1;

//	else

//		return 0;

//}



//

//int is_leap_year(int y)

//{

//	return ((y%4==0 && y%100!=0) || (y%400==0));

//}

//

//int main()

//{

//	int year=0;

//	for(year=1000; year<=2000; year++)

//	{

//		//判断year是否为闰年

//		if(is_leap_year(year)==1)

//			printf("%d ", year);

//	}

//	return 0;

//}



//

////int binary_search(int* arr, )

//int binary_search(int arr[], int k, int sz)

//{

//	int left = 0;

//	int right = sz-1;

//

//	while(left<=right)

//	{

//		//int mid = (left+right)/2;

//		int mid = left+(right-left)/2;

//

//		if(arr[mid] > k)

//		{

//			right = mid-1;

//		}

//		else if(arr[mid] < k)

//		{

//			left = mid+1;

//		}

//		else

//		{

//			return mid;

//		}

//	}

//

//	return -1;

//}

//int main()

//{

//	int arr[] = {1,2,3,4,5,6,7,8,9,10};

//	int sz = sizeof(arr)/sizeof(arr[0]);

//

//	int ret = binary_search(arr, 7, sz);

//	if(-1 == ret)

//	{

//		printf("找不到\n");

//	}

//	else

//	{

//		printf("找到了，下标是：%d\n", ret);

//	}

//	return 0;

//}



// void Add(int* pn)

//{

//	(*pn)++;

//}

//

//int main()

//{

//	int num = 0;

//	Add(&num);

//	printf("%d\n", num);

//	return 0;

//}

//

//int main()

//{

//	int len = strlen("abcdef");

//	printf("%d\n", len);

//

//	printf("%d\n", strlen("abcdef"));

//	return 0;

//}



//int main()

//{

//	printf("%d", printf("%d", printf("%d", 43)));

//	//4321

//	return 0;

//}







//#pragma comment(lib, "add.lib")
//int main()
//
//{
//
//	int a = 10;
//
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("c = %d\n", c);
//
//
//
//	return 0;
//
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int ret = Add(a,b);
//	printf("%d ", ret);
//	system("pause");
//	return 0;
//}
//int main()

//{

//	char *c[] = {"ENTER","NEW","POINT","FIRST"};

//	char**cp[] = {c+3,c+2,c+1,c};

//	char***cpp = cp;

//

//	printf("%s\n", **++cpp);

//	printf("%s\n", *--*++cpp+3);

//	printf("%s\n", *cpp[-2]+3);

//	printf("%s\n", cpp[-1][-1]+1);

//	return 0;

//}



#include <stdio.h>

#include <string.h>

#include <assert.h>





//size_t

//int main()

//{

//	if((strlen("abc")-strlen("abcdef"))>0)

//	{

//		printf("呵呵\n");

//	}

//	else

//	{

//		printf("haha\n");

//	}

//	return 0;

//}

//

//char* my_strcpy(char* dest, const char* src)

//{

//	char* ret = dest;

//	assert(dest != NULL);

//	assert(src != NULL);

//

//	while(*dest++ = *src++)

//	{

//		;

//	}

//	return ret;

//}

//

//int main()

//{

//	char arr[20] = {0};

//	const char *p = "hello bit";

//	my_strcpy(arr, p);

//	printf("%s\n", arr);

//	return 0;

//}

//

//

//char* my_strcat(char* dest, const char*src)

//{

//	char* ret = dest;

//	assert(dest && src);

//	//1. 找目的地的'\0'

//	while(*dest)

//	{

//		dest++;

//	}

//	//2. 拷贝

//	while(*dest++ = *src++)

//	{

//		;

//	}

//	return ret;

//}

//int main()

//{

//	char arr[20] = "hello ";

//	my_strcat(arr, "world");

//	printf("%s\n", arr);

//

//	return 0;

//}

//

//int main()

//{

//	char arr[20] = "abcdef";

//	strcat(arr, arr);

//

//	return 0;

//}

//

//int main()

//{

//	int ret = strcmp("abc", "abc");

//	if(ret < 0)

//	{

//		printf("小于\n");

//	}

//	else if(ret == 0)

//	{

//		printf("等于\n");

//	}

//	else if(ret > 0)

//	{

//		printf("大于\n");

//	}

//

//	return 0;

//}



//'\0'  -0

//NULL  -0

//0     -0

//'0'----48

//EOF-end of file  (-1)



/*int my_strcmp(const char* str1, const char* str2)

{

assert(str1 && str2);

while(*str1 == *str2)

{

if(*str1 == '\0')

return 0;

str1++;

str2++;

}

return *str1-*str2;

}





int main()

{

int ret = my_strcmp("abq", "abq");



printf("%d\n", ret);

return 0;

}

*/

//

//strcpy

//strcmp

//strcat

//长度不受限制的字符串函数

//









//int main()

//{

//	char arr[10] = {0};

//	strcpy(arr, "hello world");

//	printf("%s\n", arr);

//

//	return 0;

//}





//长度受限制的字符串函数

//strncpy

//strncat

//strncmp



//int main()

//{

//	char arr[10] = "xxxxxxxx";

//	strncpy(arr, "bit", 5);

//	printf("%s\n", arr);

//	return 0;

//}

//

//int main()

//{

//	char arr[20] = "hello \0xxxxx";

//	strncat(arr, "w", 3);

//	printf("%s\n", arr);

//	return 0;

//}



//int main()

//{

//	int ret = strncmp("abcdef", "abc", 4);

//	printf("%d\n", ret);

//	return 0;

//}



//strchr-字符串中找字符

//strstr-字符串中找字符串

//int main()

//{

//	char arr[] = "hello world";

//	char *ret = strchr(arr, 'q');

//	if(ret != NULL)

//		printf("%s\n", ret);

//	//

//	return 0;

//}



//char* my_strstr(const char* s1, const char* s2)
//
//{
//
//	const char*p1 = s1;
//
//	const char*p2 = s2;
//
//	const char*start = p1;
//
//
//
//	if (*s2 == '\0')
//
//		return s1;
//
//
//
//	while (*start)
//
//	{
//
//		p1 = start;
//
//		p2 = s2;
//
//
//
//		while (*p1 && *p2 && *p1 == *p2)
//
//		{
//
//			p1++;
//
//			p2++;
//
//		}
//
//		if (*p2 == '\0')
//
//		{
//
//			return (char*)start;
//
//		}
//
//		start++;
//
//	}
//
//	return NULL;
//
//}
//
//
//
//int main()
//
//{
//
//	char arr[] = "abbbcdef";
//
//	char*ret = my_strstr(arr, "bbc");
//
//	if (ret != NULL)
//
//	{
//
//		printf("%s\n", ret);
//
//	}
//
//	else
//
//	{
//
//		printf("找不到\n");
//
//	}
//
//	return 0;
//
//}
#define MAXSIZE 10
typedef  int ElemType;
typedef struct s
{
	ElemType elem[MAXSIZE];
	int length;
}SeqList;
void Init_SeqList(SeqList*L)
{
	L->length = 0;
}
int Insert_SeqList(SeqList * L, int i, ElemType x)
{
	int j = 0;
	if (L->length == MAXSIZE - 1)
	{
		printf("表满");
		return 0;
	}
	if (i<1 || i>L->length + 1)
	{
		printf("位置错误");
		return 0;
	}
	for (j = L->length; j >= i; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}
	L->elem[i] = x;
	L->length++;
	return 1;
}
int main()
{
	SeqList Seq;
	//初始化顺序表
	int ret = Insert_SeqList(&Seq,4,5);
	if (ret = 1)
	{
		printf("顺序表插入成功");
	}
	system("pause");
	return 0;
}
