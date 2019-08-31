#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//判断大小端问题
//小端存储：低字节序列存在低地址处  大端存储相反
//int Storage_method()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = Storage_method();
//	if (1 == ret)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//	return 0;
//}
//int Storage_method()
//{
//	union
//	{
//		char a;
//		int c;
//	}u;
//	u.c = 1;
//	return u.a;
//}
//int main()
//{
//	int ret = Storage_method();
//	if (1 == ret)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//	return 0;
//}
//枚举
//enum
//{
//	MALE,
//	FMALE,
//	SERCET,
//};
//struct S
//{
//	char name[20];
//	short int age;
//	float score;
//}S;
//int main()
//{
//	struct S s = { "zhangsan",18,98 };
//	FILE* pf = fopen("80.txt","w");
//	if (pf == NULL)
//		return 0;
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %s %f\n", s.age, s.name, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//
//{
//
//	int a = 10000;
//
//	FILE* pf = fopen("80.txt", "wb");
//
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//
//}

