#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int n = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char c = 0;
//	scanf_s("=<", &a, &c);
//	printf("%d,%c", a, c);
//	return 0;
//}
//int main()
//{
//	int fahr = 100;
//	int celsius = 0;
//	celsius = 5 * (fahr - 32) / 9;
//	printf("fahr = 100, celsius = %d\n", celsius);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("请输入要比较的三个数字>");
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b>c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//typedef struct student
//{
//	char name[10];
//	int classA;
//	float ShuXue;
//	float YingYu;
//	float YuWen;
//}stu;
//int main()
//{
//	stu s;
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("请输入第一个同学的信息>\n");
//		scanf_s("%s %d %f %f %f",s.name,&s.classA,&s.ShuXue,&s.YingYu,&s.YuWen);
//		printf("%s %d %f %f %f\n", s.name, s.classA, s.ShuXue, s.YingYu, s.YuWen);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <= 'Z'&&ch >= 'A'&&ch != '|')
//		{
//			putchar(ch + 32);
//		}
//		
//	}
//	return 0;
//}
//typedef struct s
//{
//	int Number;
//	char Name[20];
//	float Salary;
//	float Bonus;
//	float Total;
//}stu;
//int main()
//{
//	stu M1 = {220001,"Zhao_gang",2613.8,569.5};
//	stu M2 = { 220002, "Sun_jingjing",2885.6,680.5 };
//	M1.Total = M1.Salary + M1.Bonus;
//	M2.Total = M2.Salary + M2.Bonus;
//	printf("Number Name Salary Bonus Total\n");
//	printf("%d %s %.1f %.1f %.1f\n", M1.Number, M1.Name, M1.Salary, M1.Bonus, M1.Total);
//	printf("%d %s %.1f %.1f %.1f\n", M2.Number, M2.Name, M2.Salary, M2.Bonus, M2.Total);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = -1;
//	int c = 2;
//	if (a<b)
//	if (b < 0)
//		c = 0;
//	else
//		c++;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int x = 9527;
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	n = x % 10;
//	a = x / 10 % 10;
//	b = x / 100 % 10;
//	c = x / 1000;
//	printf("x = %d\n", x);
//	printf("%d%4d%4d%4d\n", c,b,a,n);
//	return 0;
//}
//	
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//int main()
//{
//	char i = 0;
//	char j = 0;
//	printf("please input a character\n");
//	scanf("%c", &i);
//	j = i - 32;
//	printf("your input:      %c\n", i);
//	printf("output:          %c\n", j);
//	return 0;
//}
//int main()
//{
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	printf("%c %c %c %c %c\n", c1, c2, c3, c4, c5);
//	return 0;
//}
//int main()
//{
//	double exam = 90.5;
//	double grades = 82.0;
//	double final = 0;
//	final = exam*0.70 + grades*0.30;
//	printf("exam:   %lf\n", exam);
//	printf("grades: %lf\n", grades);
//	printf("final:  %lf\n", final);
//	return 0;
//}
//int main()
//{
//	unsigned int a = 0;
//	unsigned int b = 0;
//	int m = 0;
//	int n = 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//控制行
//	{
//		for (j = 1; j <= i; j++)//控制列
//		{
//			printf("%d*%d = %-2d ", i, j, i*j);//-2d 是增加间距对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	int m = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	scanf_s("%d", &n);	
	m = n / 100;
	n = n % 100;
	a = n / 50;
	n = n % 50;
	b = n / 20;
	c = n / 10;
	d = n / 5;
	n = n % 5;
	e = n / 1;
	printf("%d %d %d %d %d %d\n", m, a, b, c, d, e);
	return 0;
}