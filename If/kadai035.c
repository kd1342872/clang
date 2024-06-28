#include<stdio.h>
main()
{
	int num;
	printf("整数?");
	scanf("%d", &num);
	if (num >0 )
	{
		printf("入力値は「プラス」です\n");
	}
	else
	{
		if (num == 0)
		{
			printf("入力値は「0」です");
		}
		else
		{
		printf("入力値は「マイナス」です\n");
		}
	}
}