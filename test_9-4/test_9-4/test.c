#define _CRT_SECURE_NO_WARNINGS 1





#include <stdio.h>

//int main()

//{

//	int a = 10000;

//	FILE* pf = fopen("test.txt", "wb");

//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}

//



//

//int main()

//{

//	int ch = getchar();

//	printf("%c\n", ch);

//	ch = getchar();

//	printf("%c\n", ch);

//

//	return 0;

//}

//#include <windows.h>

//

//int main()

//{

//	while(1)

//	{

//		printf("hehe");

//		Sleep(1000);

//	}

//	return 0;

//}



#include <stdio.h>

#include <string.h>

#include <errno.h>

//

//int main()

//{

//	//stdin

//	//stdout

//	//stderr

//

//	//FILE* pf = fopen("test.txt", "w");

//	//if(pf == NULL)

//	//{

//	//	printf("%s\n", strerror(errno));

//	//	return 0;

//	//}

//	////д�ļ�

//	//fputc('b', pf);

//	//fputc('i', pf);

//	//fputc('t', pf);

//

//	////�ر��ļ�

//	//fclose(pf);

//	//pf = NULL;

//

//	//fputc('w', stdout);

//	return 0;

//}

//

//int main()

//{

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "r");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//���ļ�

//	fgets(buf, 20, pf);

//	printf("%s", buf);

//	//ch = fgetc(pf);

//	//putchar(ch);

//	//ch = fgetc(pf);

//	//putchar(ch);

//	//ch = fgetc(pf);

//	//putchar(ch);

//

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}



//

//int main()

//{

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "w");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//д�ļ�

//	fputs("hello bit", pf);

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}





//struct Stu

//{

//	char name[20];

//	int age;

//	float score;

//};



//int main()

//{

//	struct Stu s = {"����", 20, 55.5f};

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "w");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//д�ļ�

//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}

//

//int main()

//{

//	struct Stu s = {0};

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "r");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//���ļ�

//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));

//	printf("%s %d %f\n", s.name, s.age, s.score);

//

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}



//struct Stu

//{

//	char name[20];

//	int age;

//	float score;

//};



//

//int main()

//{

//	struct Stu s = {0};

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "rb");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//���ļ�

//	fread(&s, sizeof(struct Stu), 1, pf);

//	printf("%s %d %f\n", s.name, s.age, s.score);

//

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}

//

//int main()

//{

//	struct Stu s = {"����", 20, 55.5f};

//	int ch = 0;

//	char buf[20] = {0};

//	FILE* pf = fopen("test.txt", "wb");

//	if(pf == NULL)

//	{

//		return 0;

//	}

//	//д�ļ�

//	fwrite(&s, sizeof(s), 1, pf);

//

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}

//

//struct Stu

//{

//	char name[20];

//	int age;

//	float score;

//};

//

////���л��ͷ����л�

//

//int main()

//{

//	char buf[50] = {0};

//	struct Stu tmp = {0};

//	struct Stu s = {"����", 20, 55.5f};

//	//�ѽṹ��ת��Ϊ�ַ���

//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);

//	printf("%s\n", buf);

//	//���ַ���ת��Ϊ�ṹ��

//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));

//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);

//	return 0;

//}



//

//int main()

//{

//	FILE* pf = fopen("test.txt", "r");

//	int ch = 0;

//	if(pf == NULL)

//		return 0;

//

//	//���ļ�

//	ch = fgetc(pf);

//	printf("%c\n", ch);

//	//��λ�ļ�ָ��

//	fseek(pf, 3, SEEK_SET);

//	ch = fgetc(pf);

//	printf("%c\n", ch);

//

//	printf("%d\n", ftell(pf));

//

//	fclose(pf);

//	pf = NULL;

//	return 0;

//}



int main()

{

	int ch = 0;

	FILE* pfWrite = NULL;

	FILE* pfRead = fopen("test.txt", "r");

	if (pfRead == NULL)

	{

		return 0;

	}

	pfWrite = fopen("test2.txt", "w");

	if (pfWrite == NULL)

	{

		fclose(pfRead);

		return 0;

	}

	//����

	while ((ch = fgetc(pfRead)) != EOF)

	{

		fputc(ch, pfWrite);

	}

	printf("%d\n", feof(pfRead));



	fclose(pfRead);

	fclose(pfWrite);

	pfRead = NULL;

	pfWrite = NULL;

	return 0;

}