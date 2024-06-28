#include<stdio.h>
main()
{
	int i, j, num;
	printf("®”1?");
	scanf("%d", &i);
	printf("®”2?");
	scanf("%d", &j);
	num = i - j;
	if (i > j)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n", i, j, num);
	}
	else
	{
		if (i == j)
		{
			printf("%d‚Æ%d‚Í“™‚µ‚¢\n", i, j);
		}
		else
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n",i,j,num);
		}
	}
}