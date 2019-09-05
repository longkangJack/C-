#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//函数的实现

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//增容
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("增容成功\n");

		}
	}
}
void InitContact(Contact* pcon)//初始化通讯录

{
	
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));//名称 初始化成什么，大小
	pcon->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	//加载文件
	LoadContact(pcon);
}

void LoadContact(Contact* pcon)

{

	PeoInfo tmp = { 0 };

	FILE* pfRead = fopen("contact.txt", "rb");

	if (pfRead == NULL)

	{

		printf("加载信息：打开文件失败\n");

		return;

	}

	//加载信息

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

		printf("通讯录已满,无法添加\n");

		return;

	}*/
	CheckCapacity(pcon);

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

	if (-1 == pos)

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
void SearchContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("请输入要查找的姓名>");
	scanf("%s", name);
	pos = FindName(pcon, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在:>");
	}
	else
	{
		printf("%15s\t%5d\t%5s\t%15s\t%20s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%15s\t%5d\t%5s\t%15s\t%20s\n", pcon->data[pos].name, pcon->data[pos].age, pcon->data[pos].sex, pcon->data[pos].tele, pcon->data[pos].addr);
	}
}
void ModifContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("请输入要修改人的名字");
	scanf("%s", &name);
	pos = FindName(pcon, name);
	if (-1 == pos)
	{
		printf("要删除的人不存在>:");
	}
	else
	{
		printf("请输入名字");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄");
		scanf("%d", &pcon->data[pos].age);
		printf("请输入性别");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入电话");
		scanf("%s", pcon->data[pos].tele);
		printf("请输入住址");
		scanf("%s", pcon->data[pos].addr);
	}
	printf("修改成功\n");
}
//int com_by_age(void* e1, void* e2)
//{
//	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
//}
int com_by_name(void* e1, void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);//按照Qsort 进行排序
}
void BubbleContact(Contact* pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), com_by_name);
	printf("排序成功\n");

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
		printf("保存信息,打开文件失败\n"); \
			return;
	}
	//保存信息
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;

}
