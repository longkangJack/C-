#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

#include<assert.h>

//������������ͷ�ļ�����д

//10000������Ϣ���� ���� �Ա� ���� ��ַ �绰

//����

//ɾ��

//����

//�޸�

//��ʾ

//����

#define MAX 1000

#define NAME_MAX 20

#define TELE_MAX 12

#define ADDR_MAX 25

#define SEX_MAX 5

enum Option//ö�ٷ� �оٳ�ͨѶ¼�Ĺ���

{

	EXIT,//�˳�

	Add,//����

	Del,//ɾ��

	search,//����

	modif,

	show,//չʾͨѶ¼

	bubble,//����
	//ö�ٷ�

};

//�˵���Ϣ

typedef struct PeoInfo

{

	char name[NAME_MAX];

	char sex[SEX_MAX];

	short age;

	char addr[ADDR_MAX];

	char tele[TELE_MAX];

}PeoInfo;

//ͨѶ¼�ṹ��

typedef struct Contact

{

	PeoInfo data[1000];

	int sz;

}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(Contact* pcon);
void ModifContact(Contact* pcon);
void BubbleContact(Contact* pcon);
