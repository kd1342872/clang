#include<stdio.h>
main()
{
	double i,j;

	printf("2つの実数値?");
	scanf("%lf%lf", &i,&j);
	if (i>j)
	{
		printf("大きいほうは=%.6f\n",i);
	}
	else
	{
		printf("大きいほうは=%.6f\n",j);
	}
}