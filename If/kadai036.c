#include<stdio.h>
main()
{
	int i, j, num;
	printf("整数1?");
	scanf("%d", &i);
	printf("整数2?");
	scanf("%d", &j);
	num = i - j;
	if (i > j)
	{
		printf("%dのほうが%dより%d大きい\n", i, j, num);
	}
	else
	{
		if (i == j)
		{
			printf("%dと%dは等しい\n", i, j);
		}
		else
		{
			printf("%dのほうが%dより%d小さい\n",i,j,num);
		}
	}
}