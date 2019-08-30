#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//函数的声明和头文件的书写
//10000个人信息包括 名字 性别 年龄 地址 电话
//增加
//删除
//查找
//修改
//显示
//排序
#define MAX 1000
#define NAME_MAX 20
#define TELE_MAX 12
#define ADDR_MAX 25
#define SEX_MAX 5
enum Option
{
	EXIT,
	Add,
	Del,
	search,
	modif,
	show,
	bubble,//枚举法
};
//人的信息
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	short age;
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;
//通讯录结构体
typedef struct Contact
{
	PeoInfo data[1000];
	int sz;
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(Contact* pcon);
void DelContact(Contact* pcon);