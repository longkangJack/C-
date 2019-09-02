#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//测试

void menu()

{

	printf("**************************************\n");
	printf("**       1.Add    2.Del             **\n");
	printf("**       3.Search 4.Modif           **\n");
	printf("**       5.Show   6.Bubble          **\n");
	printf("**            0.exit                **\n");
	printf("**************************************\n");

}

int main()

{

	int i = 0;

	char password[20] = { 0 };

	printf("请输入密码\n");

	for (i = 0; i < 3; i++)

	{

		scanf("%s", password);

		if (0 == strcmp(password, "123456"))

		{

			printf("密码正确,登陆成功");

			break;

		}

		else

		{

			printf("密码错误,请重新输入\n");

		}

	}

	if (i == 3)

	{

		printf("退出程序");
		return;

	}

	int input = 0;

	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do

	{
		menu();
		printf("请选择>");
		scanf("%d", &input);

		switch (input)
		{
		case EXIT:
			printf("退出通讯录");
			break;
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modif:
			ModifContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case bubble:
			BubbleContact(&con);
			break;
		default:
			printf("选择错误,请重新选择>");
			break;
		}
	} while (input);
	return 0;
}