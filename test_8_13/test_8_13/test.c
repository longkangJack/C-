#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = i*j;
//	}
//	printf("%d\n", j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int sum = 0;
//	int j = 1;
//	int n = 0;
//	scanf("%d", &x);
//	for (n = 1; n <= x; n++)
//	{
//		j = j*n;
//		sum = sum + j;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 120");
//
//	while (1)
//	{
//		printf("���Խ��������Ӻ�ػ��������������˧����ȡ���ػ�>");
//		scanf("%s", input);
//		if (strcmp(input, "����˧") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j <line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int j = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		a = i / 100;
//		b = (i % 100) / 10;
//		c = i % 10;
//		j = a*a*a + b*b*b + c*c*c;
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int p = 0;
//	int sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		p = p * 10 + a;
//		sum = sum +p;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid -1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int bin_search(int arr[], int k, int left, int right,int sz)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz - 1;
//	int ret = bin_search(arr,k,0,9,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d", ret);
//	}
//	return 0;
//}
//��������Ϸ
//void menu()
//{
//	printf("*************************\n");
//	printf("********1.  play   ******\n");
//	printf("********0.  exit   ******\n");
//	printf("*************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 - 1;
//	int input = 0;
//	while (1)
//	{
//		printf("������Ҫ�µ�����>");
//		scanf("%d", &input);
//		if (ret > input)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < input)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	menu();
//	do
//	{
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome back";
//	char arr2[] = "            ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
int main()
{
	char password[] = "123456";
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("����������ȷ\n");
			break;
		}
		else
		{
			printf("�������,����������\n");
		}
	}
	return 0;
}