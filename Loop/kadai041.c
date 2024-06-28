#include<stdio.h>
main()
{
	double i, sum;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%lf", &i);
	sum = 0;
	
	while (i!=-999)
	{
		sum += i;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%lf", &i);
	}
	printf("‡Œv=%f\n", sum);
	printf("•½‹Ï=%f\n", (i+sum)/sum);
}