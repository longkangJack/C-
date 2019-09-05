#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//������ʵ��

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");

		}
	}
}
void InitContact(Contact* pcon)//��ʼ��ͨѶ¼

{
	
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));//���� ��ʼ����ʲô����С
	pcon->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	//�����ļ�
	LoadContact(pcon);
}

void LoadContact(Contact* pcon)

{

	PeoInfo tmp = { 0 };

	FILE* pfRead = fopen("contact.txt", "rb");

	if (pfRead == NULL)

	{

		printf("������Ϣ�����ļ�ʧ��\n");

		return;

	}

	//������Ϣ

	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))

	{

		CheckCapacity(pcon);

		pcon->data[pcon->sz] = tmp;

		pcon->sz++;

	}



	fclose(pfRead);

	pfRead = NULL;

}



void AddContact(Contact* pcon)

{
	assert(pcon);
	/*if (pcon->sz == MAX)

	{

		printf("ͨѶ¼����,�޷����\n");

		return;

	}*/
	CheckCapacity(pcon);

	printf("����������:>");

	scanf("%s", pcon->data[pcon->sz].name);

	printf("����������:>");

	scanf("%d", &(pcon->data[pcon->sz].age));

	printf("�������Ա�:>");

	scanf("%s", pcon->data[pcon->sz].sex);

	printf("�������ַ:>");

	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;

	printf("���ӳɹ�\n");

}

void ShowContact(const Contact* pcon)

{

	int i = 0;

	assert(pcon);

	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for (i = 0; i < pcon->sz; i++)

	{

		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);

	}
}
static FindName(Contact* pcon, char name[])

{

	int i = 0;

	assert(pcon);

	for (i = 0; i < pcon->sz; i++)

	{

		if (0 == strcmp(pcon->data[i].name, name))

		{

			return i;

		}

	}

	return -1;

}

void DelContact(Contact* pcon)

{

	int i = 0;

	char name[NAME_MAX] = { 0 };

	int pos = 0;

	assert(pcon);



	if (pcon->sz == 0)

	{

		printf("ͨѶ¼Ϊ��,�޷�ɾ��\n");

		return;

	}

	printf("������Ҫɾ���˵�����\n");

	scanf("%s", name);

	//����

	pos = FindName(pcon, name);

	if (-1 == pos)

	{

		printf("Ҫɾ�����˲�����\n");

		return;

	}
	for (i = 0; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}
void SearchContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("������Ҫ���ҵ�����>");
	scanf("%s", name);
	pos = FindName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����:>");
	}
	else
	{
		printf("%15s\t%5d\t%5s\t%15s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%15s\t%5d\t%5s\t%15s\t%20s\n", pcon->data[pos].name, pcon->data[pos].age, pcon->data[pos].sex, pcon->data[pos].tele, pcon->data[pos].addr);
	}
}
void ModifContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�޸��˵�����");
	scanf("%s", &name);
	pos = FindName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����>:");
	}
	else
	{
		printf("����������");
		scanf("%s", pcon->data[pos].name);
		printf("����������");
		scanf("%d", &pcon->data[pos].age);
		printf("�������Ա�");
		scanf("%s", pcon->data[pos].sex);
		printf("������绰");
		scanf("%s", pcon->data[pos].tele);
		printf("������סַ");
		scanf("%s", pcon->data[pos].addr);
	}
	printf("�޸ĳɹ�\n");
}
//int com_by_age(void* e1, void* e2)
//{
//	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
//}
int com_by_name(void* e1, void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);//����Qsort ��������
}
void BubbleContact(Contact* pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), com_by_name);
	printf("����ɹ�\n");

}
void DestoryContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
void saveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfwrite = fopen("contact.txt", "wb");
	if (pfwrite == NULL)
	{
		printf("������Ϣ,���ļ�ʧ��\n"); \
			return;
	}
	//������Ϣ
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;

}
