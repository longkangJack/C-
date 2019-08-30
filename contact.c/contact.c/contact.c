#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//函数的实现
void InitContact(Contact* pcon)//初始化通讯录
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));//名称 初始化成什么，大小
}
void AddContact(Contact* pcon)
{
	if (pcon->sz == MAX)
	{
		printf("通讯录已满,无法添加\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入地址:>");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("增加成功\n");
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
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
		printf("通讯录为空,无法删除\n");
		return;
	}
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//查找
	pos = FindName(pcon, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	for (i = 0; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");

}