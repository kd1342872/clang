#include<stdio.h>
main()
{
	double i,j;

	printf("2�̎����l?");
	scanf("%lf%lf", &i,&j);
	if (i>j)
	{
		printf("�傫���ق���=%.6f\n",i);
	}
	else
	{
		printf("�傫���ق���=%.6f\n",j);
	}
}