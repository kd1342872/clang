#include<stdio.h>
main()
{
	double i,j;

	printf("2‚Â‚ÌÀ”’lH");
	scanf("%lf%lf", &i,&j);
	printf("*** %f‚Æ%f‚Ìl‘¥‰‰Z ***\n",i,j);
	printf("˜a%f", i + j);
	printf(" ·%f", i - j);
	printf( "Ï%f", i * j);
	printf(" ¤%f\n", i / j);
}