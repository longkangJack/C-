void menu()
{
	printf("****************************\n");
	printf("*********  1.play    *******\n");
	printf("*********  0.exit   ********\n");
	printf("****************************\n");
}
void game()
{
	int ret = rand()%100+1;//����1-100֮����������
	int input = 0;
	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &input);
		if (ret > input)
		{
			printf("��С��\n");
		}
		else if (ret < input)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}