#include<stdio.h>
main()
{
	double i,j;

	printf("2‚Â‚ÌŽÀ”’l?");
	scanf("%lf%lf", &i,&j);
	if (i>j)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.6f\n",i);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.6f\n",j);
	}
}