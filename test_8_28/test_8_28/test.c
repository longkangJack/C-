#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�жϴ�С������
//С�˴洢�����ֽ����д��ڵ͵�ַ��  ��˴洢�෴
//int Storage_method()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = Storage_method();
//	if (1 == ret)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
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
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//	return 0;
//}
//ö��
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
//	//�ر��ļ�
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
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//
//}

