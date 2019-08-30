#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//������ʵ��
void InitContact(Contact* pcon)//��ʼ��ͨѶ¼
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));//���� ��ʼ����ʲô����С
}
void AddContact(Contact* pcon)
{
	if (pcon->sz == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
		return;
	}
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
	if (pos == -1)
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