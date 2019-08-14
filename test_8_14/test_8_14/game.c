void menu()
{
	printf("****************************\n");
	printf("*********  1.play    *******\n");
	printf("*********  0.exit   ********\n");
	printf("****************************\n");
}
void game()
{
	int ret = rand()%100+1;//生成1-100之间的随机数字
	int input = 0;
	while (1)
	{
		printf("请输入你猜的数字\n");
		scanf("%d", &input);
		if (ret > input)
		{
			printf("猜小了\n");
		}
		else if (ret < input)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}