#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//1.模拟实现strncpy
//2.模拟实现strncat
//3.模拟实现strncmp
//char* my_strncpy(char* dest, char* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	while (count--)
//	{
//		if (*src == NULL)
//		{
//			break;
//		}
//		*dest++ = *src++;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[40] = "abcdef";
//	char arr2[40] = { 0 };
//	my_strncpy(arr2,arr1,4);
//	printf("%s\n", arr2);
//	return 0;
//}
//char* my_strncat(char* dest, char* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = " world";
//	my_strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strncmp(const char* str1, const char* str2, size_t count)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (count--)
//	{
//		if ((*str1 == *str2) && str1&&str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//			return *str1 - *str2;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdaf";
//	char arr2[] = "abcdefg";
//	int ret =my_strncmp(arr1, arr2, 6);
//	if (ret > 0)
//	{
//		printf("arr1>arr2");
//	}
//	else if (ret < 0)
//	{
//		printf("arr1<arr2");
//	}
//	else
//	{
//		printf("arr1=arr2");
//	}
//	return 0;
//}
//int val = 20;//在栈空间上开辟了四个字节
//char arr[10] = { 0 };//在栈空间上开辟了十个字节的连续空间
//int main()
//{
//	int *ptr = NULL;
//	int i = 0;
//	ptr = (int*)malloc(10 * sizeof(int));//开辟十个整形空间
//	if (*ptr == NULL)
//	{
//		return;
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(ptr + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(ptr + i));
//		}
//	}
//	free(ptr);//释放ptr所开辟的动态空间
//	ptr = NULL;
//	return 0;
//}
//int main()
//{
//	int *p = NULL;
//	int i = 0;
//	p = (int*)calloc(10, sizeof(int));
//	if (*p == NULL)
//	{
//		return;
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
int main()
{
	int* ptr = NULL;
	int i = 0;
	ptr = (int*)malloc(10 * sizeof(int));
	if (*ptr == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			*(ptr + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(ptr + i));
		}
	}
	int* p = NULL;
	p = realloc(ptr, 10*sizeof(int));
	if (*p == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < 20; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}