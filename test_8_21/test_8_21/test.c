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
//		printf("С�˴洢");
//	}
//	else
//	{
//		printf("��˴洢");
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
//��ȷ����1:��������ʽ
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
//��ȷ����2:ָ����ʽ
//int is_little_endian()
//{
//	int a = 1;
//	char b = *((char *)&a);
//	return b;
//}
//int main()
//{
//	int i = is_little_endian();//����1��2����ȷ
//	if (i = 1)
//	{
//		printf("С��ģʽ\n");   //GCC������ΪС��ģʽ
//	}
//	else
//	{
//		printf("���ģʽ\n");   //keil51������Ϊ���ģʽ����keil uvision 4��
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
//		printf("��С�˴洢\n");
//	}
//	else
//	{
//		printf("�Ǵ�˴洢\n");
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
//		a = x & 1;//ȡ�����һλ��
//		x = x >> 1;//��ֵ����һλ
//		b = b + (a << (31 - i));//��ÿ��ĩβȡ������ֵ�����ڱ������ʵ�����൱�ڰѶ�������ת����һ��
//	}
//	return b;//���ص��Ƕ�����ת��Ϊʮ���Ƶ�����
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
//	printf("�������ֵ�������:%d", ret);
//	return 0;
//}
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
