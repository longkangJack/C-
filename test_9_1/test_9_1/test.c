#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//����

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

	printf("����������\n");

	for (i = 0; i < 3; i++)

	{

		scanf("%s", password);

		if (0 == strcmp(password, "123456"))

		{

			printf("������ȷ,��½�ɹ�");

			break;

		}

		else

		{

			printf("�������,����������\n");

		}

	}

	if (i == 3)

	{

		printf("�˳�����");
		return;

	}

	int input = 0;

	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do

	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);

		switch (input)
		{
		case EXIT:
			printf("�˳�ͨѶ¼");
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
			printf("ѡ�����,������ѡ��>");
			break;
		}
	} while (input);
	return 0;
}