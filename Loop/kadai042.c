#include<stdio.h>
main()
{
	int i, sum;
	
	i = 1;
	sum = 0;

	while (sum <= 300)
	{
		sum = sum + i;
		printf("%d+", i);
		i++;
	}
	printf("=%d\n", sum);
}