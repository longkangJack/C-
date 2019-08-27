#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1&&s2);
//	char* p1 = s1;
//	char* p2 = s2;
//	char* start = s1;
//	while (*start)
//	{
//		p2 = s2;
//		p1 = start;
//		while (*p2 && *p1 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 != '\0')
//		{
//			start++;
//		}
//		if (*p2 == '\0')
//		return start;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20] = "abbbcdef";
//	char arr2[20] = "bbc";
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
//char* my_strchr(const char* str, int c)
//{
//	assert(str != NULL);
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
//	char arr[20] = "abcdef";
//	char* ret = my_strchr(arr, 'c');
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//void* my_memcpy(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		(char*)dest = (char*)dest + 1;
//		(char*)src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 1, 2, 3, 4, 5, 6 };
//	char arr2[20] = { 0 };
//	int n = 0;
//	int i = 0;
//	printf("请输入你要拷贝的内存\n");
//	scanf("%d", &n);
//	char* ret = my_memcpy(arr2, arr1,n);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	if (src < dest)
//	{
//		
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//
//	}
//	else
//	{
//		
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 16);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//使用qsort函数
//int int_cmp(const void* p1,const void* p2)
//{
//	return ((*(char*)p2 > *(char*)p1)?1:-1);
//}
//int main()
//{
//    char arr[1000] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%s", &arr);
//	qsort(arr, sz, sizeof(char), int_cmp);
//	printf("%s\n", arr);
//	return 0;
//}
//struct node
//{
//	double date1;
//	int no;
//} s[100];
//int cmp(const void *a, const void *b)
//{
//	struct node *aa = (struct node*)a;
//	struct node *bb = (struct node*)b;
//	return(((aa->date1)>(bb->date1)) ? 1 : -1);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		s[i].no = i + 1;
//		scanf("%lf", &s[i].date1);
//	}
//	qsort(s, n, sizeof(s[0]), cmp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d   %lf\n", s[i].no, s[i].date1);
//	}
//	return 0;
//}