#include<stdio.h>
main()
{
	int i, j, num;
	printf("����1?");
	scanf("%d", &i);
	printf("����2?");
	scanf("%d", &j);
	num = i - j;
	if (i > j)
	{
		printf("%d�̂ق���%d���%d�傫��\n", i, j, num);
	}
	else
	{
		if (i == j)
		{
			printf("%d��%d�͓�����\n", i, j);
		}
		else
		{
			printf("%d�̂ق���%d���%d������\n",i,j,num);
		}
	}
}