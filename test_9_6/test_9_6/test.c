#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 100;
	FILE* pf = ("test.txt","wb") ;
	if (pf == NULL)
	{
		return;
	}
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
/ int main()

//{

//	//int arr[10];

//	int* p = (int*)malloc(10*sizeof(int));

//	//int* p = (int*)malloc(INT_MAX);

//	int i = 0;

//	if(p == NULL)

//	{

//		printf("%s\n", strerror(errno));

//		return 0;

//	}

//	//

//	for(i=0; i<10; i++)

//	{

//		*(p+i) = i;

//	}

//	for(i=0; i<10; i++)

//	{

//		printf("%d ", *(p+i));

//	}

//

//	free(p);

//	p = NULL;

//	return 0;

//}

//

//int main()

//{

//	/*int*p = (int*)calloc(10, sizeof(int));*/

//	int*p = (int*)malloc(10*sizeof(int));

//	int i = 0;

//	if(p == NULL)

//	{

//		printf("%s\n", strerror(errno));

//		return 0;

//	}

//	for(i=0; i<10; i++)

//	{

//		printf("%d ", *(p+i));

//	}

//

//	free(p);

//	p = NULL;

//

//	return 0;

//}

//



//

//int main()

//{

//	int*p = (int*)malloc(10*sizeof(int));

//	int i = 0;

//	int* ptr = NULL;

//	if(p == NULL)

//	{

//		printf("%s\n", strerror(errno));

//		return 0;

//	}

//	for(i=0; i<10; i++)

//	{

//		*(p+i) = i;

//	}

//	//�����ռ�

//	ptr = realloc(p, 2000*sizeof(int));

//	if(ptr != NULL)

//		p = ptr;

//

//	free(p);

//	p = NULL;

//	return 0;

//}

//



//

//int main()

//{

//	int *p = (int*)malloc(INT_MAX);

//	if(p == NULL)

//	{

//		return 0;

//	}

//	*p = 10;

//	free(p);

//	p = NULL;

//

//	return 0;

//}

//

//int main()

//{

//	int i = 0;

//	int *p = malloc(10*sizeof(int));

//	if(p == NULL)

//		return 0;

//	for(i=0; i<20; i++)

//	{

//		printf("%d ", *(p+i));

//	}

//	free(p);

//	p = NULL;

//	return 0;

//}

//

//int main()

//{

//	int a = 10;

//	int* p = &a;

//

//

//

//	free(p);

//	p = NULL;

//	return 0;

//}

//

//int main()

//{

//	//int i = 0;

//	//int *p = (int*)malloc(40);

//	//if(p == NULL)

//	//	return 0;

//	//for(i=0; i<5; i++)

//	//{

//	//	*p++ = i;

//	//}

//

//	//free(p);

//	//p = NULL;

//

//	int i = 0;

//	int *p = (int*)malloc(40);

//	if(p == NULL)

//		return 0;

//	//ʹ��

//	free(p);

//	p = NULL;

//	//�ٴ��ͷ�

//	free(p);

//	return 0;

//}



//int main()

//{

//	while(1)

//	{

//		malloc(1);

//	}

//	return 0;

//}



//

//void GetMemory(char **p)

//{

//	*p = (char *)malloc(100);

//}

//void Test(void)

//{

//	char *str = NULL;

//	GetMemory(&str);

//	strcpy(str, "hello world");

//	printf(str);

//	free(str);

//	str = NULL;

//}



//

//char* GetMemory(char *p)

//{

//	p = (char *)malloc(100);

//	return p;

//}

//

//void Test(void)

//{

//	char *str = NULL;

//	str = GetMemory(str);

//	strcpy(str, "hello world");

//	printf(str);

//	free(str);

//	str = NULL;

//}

//

//int main()

//{

//	Test();

//	//char *p = "hello bit\n";

//	//printf("hello bit\n");

//	//printf(p);

//	//printf("%s", p);

//

//	return 0;

//}

//

//

//char *GetMemory(void)

//{

//	//����ջ�ռ��ַ������

//	char p[] = "hello world";

//	return p;

//}

//void Test(void)

//{

//	char *str = NULL;

//	str = GetMemory();

//	printf(str);

//}

//

//int main()

//{

//	Test();

//	return 0;

//}

//

//

//

//char *GetMemory(void)

//{

//	char *p = "hello world";

//	return p;

//}

//void Test(void)

//{

//	char *str = NULL;

//	str = GetMemory();

//	printf(str);

//}

//

//int main()

//{

//	Test();

//	return 0;

//}



//

//

//int* test()

//{

//	int a = 10;

//	return &a;

//}

//

//int main()

//{

//	int*p = test();

//	printf("hehe\n");

//	printf("%d\n", *p);

//	return 0;

//}



//

//void GetMemory(char **p, int num)

//{

//	*p = (char *)malloc(num);

//}

//void Test(void)

//{

//	char *str = NULL;

//	GetMemory(&str, 100);

//	strcpy(str, "hello");

//	printf(str);

//	free(str);

//	str = NULL;

//}

//

//int main()

//{

//	Test();

//	return 0;

//}

//

//

//void Test(void)

//{

//	char *str = (char *) malloc(100);

//	strcpy(str, "hello");

//	free(str);

//	str = NULL;

//

//	if(str != NULL)

//	{

//		strcpy(str, "world");

//		printf(str);

//	}

//}

//

//int main()

//{

//	Test();

//	return 0;

//}

//



///��������





//

//struct S2

//{

//	int num;

//	int arr[0];//���������Ա

//};

//

//

//struct S

//{

//	int num;

//	int arr[];//���������Ա

//};

//

//int main()

//{

//	printf("%d\n", sizeof(struct S));//

//	return 0;

//}

//



//

//struct S

//{

//	int num;

//	int arr[];//���������Ա

//};

//

//int main()

//{

//	int i = 0;

//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 20*sizeof(int));

//	ps->num = 20;

//	for(i=0; i<20; i++)

//	{

//		ps->arr[i] = i;

//	}

//	//

//	free(ps);

//	ps = NULL;

//	return 0;

//}

//



struct S

{

	int num;

	int *arr;

};



int main()

{

	int i = 0;

	struct S* ps = (struct S*)malloc(sizeof(struct S));

	ps->num = 20;

	ps->arr = (int*)malloc(20 * sizeof(int));

	for (i = 0; i < 20; i++)

	{

		ps->arr[i] = i;

	}

	free(ps->arr);

	free(ps);

	ps = NULL;

	return 0;
}