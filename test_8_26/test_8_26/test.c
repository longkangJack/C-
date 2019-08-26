#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.实现strcpy  n
//2.实现strcat  n
//3.实现strstr 在一个字符串查找另一个字符串
//4.实现strchr 在一个字符串中查找另一个字符
//5.实现strcmp  n
//6.实现memcpy
//7.实现memmove
//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest&&src);
//	char* start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = { 0 };
//	char* ret = my_strcpy(arr2, arr1);
//	printf("%s\n", ret);
//}
//char* my_strcat(char* dest, char* src)
//{
//	assert(dest&&src);
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++= *src++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[10] = "efg";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[10] = "abca";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("字符串1大于字符串2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("字符串1小于字符串2\n");
//	}
//	else
//	{
//		printf("两个字符串相等\n");
//	}
//	return 0;
//}
//char* my_strchr(const char* str, int c)
//{
//	assert(str!=NULL);
//	while (*str != '\0')
//	{
//		if (*str == c)
//			return str;
//		else
//			str++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char* ret = my_strchr(arr1, 'c');
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	//abbbcdef
//	//bbc
//	assert(str1&&str2);
//	char* p1 = str1;
//	char* p2 = str2;
//	char* start = str1;
//	while (*start)
//	{
//		p1 = start;
//		p2 = str2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return start;
//		}
//		start++;
//	}
//}
//int main()
//{
//	char arr1[10] = "abbbcdef";
//	char arr2[10] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "helloworld";
//	char arr2[20] = { 0 };
//	int n = 0;
//	printf("请输入你要拷贝的个数\n");
//	scanf("%d", &n);
//	char* ret = strncpy(arr2, arr1,n);
//	printf("%s\n", arr2);
//	return 0;
//}