#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	int a = 1;
//	char* pc = (char*)&a;
//	if (*pc == 1)
//	{
//		printf("小端存储");
//	}
//	else
//	{
//		printf("大端存储");
//	}
//	return 0;
//}
//char* my_strcpy(char*dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* first = src;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return first;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + (b - a) / 2;
//	printf("%d\n", c);
//	return 0;
//}
//正确方法1:联合体形式
//union my_union
//{
//	int a;
//	char b;
//};
//int is_little_endian1()
//{
//	union my_union u1;
//	u1.a = 1;
//	return u1.b;
//}
//正确方法2:指针形式
//int is_little_endian()
//{
//	int a = 1;
//	char b = *((char *)&a);
//	return b;
//}
//int main()
//{
//	int i = is_little_endian();//方法1、2都正确
//	if (i = 1)
//	{
//		printf("小端模式\n");   //GCC经测试为小端模式
//	}
//	else
//	{
//		printf("大端模式\n");   //keil51经测试为大端模式（用keil uvision 4）
//	}
//}
//int is_smallend()
//{
//	int a = 1;
//	return *((char*)&a);
//}
//int main()
//{
//	int ret = is_smallend();
//	if (ret == 1)
//	{
//		printf("是小端存储\n");
//	}
//	else
//	{
//		printf("是大端存储\n");
//	}
//	return 0;
//}
//void reserve_string(char* src)
//{
//	int len = strlen(src);
//	char* str = src;
//	*src = *(src + len - 1);
//	*(src + len - 1) = '\0';
//	*(src + len - 1) = *str;
//	if ((src + len - 1) >= 2)
//	reserve_string(src + 1);
//}
//int my_strlen(char* dest)
//{
//	assert(dest != NULL);
//	char* end = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	return dest - end;
//}
//void reserve_string(char* src)
//{
//	int len = my_strlen(src);
//	char *left = src;
//	char *right = src + len - 2;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//unsigned int reverse_bit(unsigned int x)
//{
//	unsigned int a = 0;
//	int b = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//
//		a = x & 1;//取出最后一位数
//		x = x >> 1;//把值右移一位
//		b = b + (a << (31 - i));//把每次末尾取出来的值都放在变量里，其实整体相当于把二进制数转置了一下
//	}
//	return b;//返回的是二进制转化为十进制的数字
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%u", reverse_bit(a));
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
//		ret = ret^arr[i];
//	}
//	printf("单独出现的数字是:%d", ret);
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
