#include<stdio.h>
main()
{
	double i, sum;
	printf("����(-999�ŏI��)?");
	scanf("%lf", &i);
	sum = 0;
	
	while (i!=-999)
	{
		sum += i;
		printf("����(-999�ŏI��)?");
		scanf("%lf", &i);
	}
	printf("���v=%f\n", sum);
	printf("����=%f\n", (i+sum)/sum);
}