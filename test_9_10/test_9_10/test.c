#define _CRT_SECURE_NO_WARNINGS 1

//

//int my_strlen(const char* str)

//{

//	return 0;

//}

//

//int main()

//{

//	//ָ������

//	char* arr[10];

//	//����ָ�����

//	char* (*p)[10] = &arr;

//

//	//����ָ��

//	int (*pf)(const char*) = my_strlen;

//	//����ָ�������

//	int (*pfArr[4])(const char*);

//	//ָ����ָ�������ָ��

//	int (*(*ptr)[4])(const char*) = &pfArr;

//

//	return 0;

//}

//

//#include <stdio.h>

////

//int main()

//{

//	//һά����

//	//int a[] = {1,2,3,4};

//// 	int (*pa)[4] = &a;

//// 	*pa;  *&a;

//	//������

//	//1. sizeof(������)-��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�

//	//2. &����������������ʾ�������飬&������ȡ��������������ĵ�ַ

//	//����֮�������������е�������������Ԫ�صĵ�ַ

//	//printf("%d\n",sizeof(a));//16

//	//printf("%d\n",sizeof(a+0));//4

//	//printf("%d\n",sizeof(*a));//4

//	//printf("%d\n",sizeof(a+1));//4

//	//printf("%d\n",sizeof(a[1]));//4

//	//printf("%d\n",sizeof(&a));//4

//	//printf("%d\n",sizeof(*&a));//16

//	//printf("%d\n",sizeof(&a+1));//4

//	//printf("%d\n",sizeof(&a[0]));//4

//	//printf("%d\n",sizeof(&a[0]+1));//4

//

//	//�ַ�����

//	//char arr[] = {'a','b','c','d','e','f'};

//

//	//printf("%d\n", strlen(arr));//x

//	//printf("%d\n", strlen(arr+0));//x

//	////printf("%d\n", strlen(*arr));//err

//	////printf("%d\n", strlen(arr[1]));//err

//	//printf("%d\n", strlen(&arr));//x

//	//printf("%d\n", strlen(&arr+1));//y

//	//printf("%d\n", strlen(&arr[0]+1));//z

//

//	//printf("%d\n", sizeof(arr));//6

//	//printf("%d\n", sizeof(arr+0));//4

//	//printf("%d\n", sizeof(*arr));//1

//	//printf("%d\n", sizeof(arr[1]));//1

//	//printf("%d\n", sizeof(&arr));//4

//	//printf("%d\n", sizeof(&arr+1));//4

//	//printf("%d\n", sizeof(&arr[0]+1));//4

//

//	

//	//char arr[] = "abcdef";

//

//	//printf("%d\n", strlen(arr));//6

//	//printf("%d\n", strlen(arr+0));//6

//	////printf("%d\n", strlen(*arr));//err

//	////printf("%d\n", strlen(arr[1]));//err

//	//printf("%d\n", strlen(&arr));//6

//	//printf("%d\n", strlen(&arr+1));//x

//	//printf("%d\n", strlen(&arr[0]+1));//5

//

//// 	printf("%d\n", sizeof(arr));//7

//// 	printf("%d\n", sizeof(arr+0));//4

//// 	printf("%d\n", sizeof(*arr));//1

//// 	printf("%d\n", sizeof(arr[1]));//1

//// 	printf("%d\n", sizeof(&arr));//4

//// 	printf("%d\n", sizeof(&arr+1));//4

//// 	printf("%d\n", sizeof(&arr[0]+1));//4

//

//	//char *p = "abcdef";

//

//	//printf("%d\n", strlen(p));//6

//	//printf("%d\n", strlen(p+1));//5

//	////printf("%d\n", strlen(*p));//err

//	////printf("%d\n", strlen(p[0]));//err

//	//printf("%d\n", strlen(&p));//x

//	//printf("%d\n", strlen(&p+1));//y

//	//printf("%d\n", strlen(&p[0]+1));//5

//

//// 	printf("%d\n", sizeof(p));//4

//// 	printf("%d\n", sizeof(p+1));//4

//// 	printf("%d\n", sizeof(*p));//1

//// 	printf("%d\n", sizeof(p[0]));//1 p[0]  == *(p+0)

//// 	printf("%d\n", sizeof(&p));//4

//// 	printf("%d\n", sizeof(&p+1));//4

//// 	printf("%d\n", sizeof(&p[0]+1));//4

//

//	//��ά����

//	int a[3][4] = {0};

//	//int *p = NULL;

//	//printf("%p\n", &a[0][0]);

//	//printf("%p\n", a+1);

//	//p = a+1;

//	printf("%d\n",sizeof(a));//48

//	printf("%d\n",sizeof(a[0][0]));//4

//	printf("%d\n",sizeof(a[0]));//16

//	printf("%d\n",sizeof(a[0]+1));//4

//	printf("%d\n",sizeof(*(a[0]+1)));//4

//	printf("%d\n",sizeof(a+1));//4

//	printf("%d\n",sizeof(*(a+1)));//16

//

//	printf("%d\n",sizeof(&a[0]+1));//4

//	printf("%d\n",sizeof(*(&a[0]+1)));//16

//	printf("%d\n",sizeof(*a));//*a == *(a+0) == a[0]//16

//	printf("%d\n",sizeof(a[3]));//16

//

//	return 0;

//}





#include <stdio.h>

//

//int main()

//{

//	int a[5] = { 1, 2, 3, 4, 5 };

//	int *ptr = (int *)(&a + 1);

//	printf("%d,%d", *(a + 1), *(ptr - 1));

//	//2 5-4

//	//2 1

//	//

//	return 0;

//}

//

//

//struct Test

//{

//	int Num;

//	char *pcName;

//	short sDate;

//	char cha[2];

//	short sBa[4];

//}* p;

////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�

//int main()

//{

//	p = (struct Test*)0x100000;

//

//	printf("%p\n", p + 0x1);//100014

//	printf("%p\n", (unsigned long)p + 0x1);//100001

//	printf("%p\n", (unsigned int*)p + 0x1);//100004

//

//

//	return 0;

//}



//

//int main()

//{

//	int a[4] = { 1, 2, 3, 4 };

//	int *ptr1 = (int *)(&a + 1);

//	int *ptr2 = (int *)((int)a + 1);

//	printf( "%x,%x", ptr1[-1], *ptr2);

//

//	//4 2-3

//	//4 5

//	//4 0

//	//

//	return 0;

//}

//

//

//

//#include <stdio.h>

//int main()

//{

//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };

//	int *p;

//	p = a[0];

//	printf( "%d", p[0]);

//	return 0;

//}

//

//0-5

//1-3

//

//int main()

//{

//	int a[5][5];

//	int(*p)[4];

//	p = a;

//	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

//	//

//	return 0;

//}

//

//int main()

//{

//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

//	int *ptr1 = (int *)(&aa + 1);

//	int *ptr2 = (int *)(*(aa + 1));

//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));

//	return 0;

//}



#include <stdio.h>

//

//int main()

//{

//	char *a[] = {"work","at","alibaba"};

//	char**pa = a;

//	pa++;

//	printf("%s\n", *pa);

//	return 0;

//}







//work

//at-3



int main()

{

	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };

	char**cp[] = { c + 3, c + 2, c + 1, c };

	char***cpp = cp;

	printf("%s\n", **++cpp);

	printf("%s\n", *--*++cpp + 3);

	printf("%s\n", *cpp[-2] + 3);

	printf("%s\n", cpp[-1][-1] + 1);

	return 0;

}
