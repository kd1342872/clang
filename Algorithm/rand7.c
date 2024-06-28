#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, n, c = 0;
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	printf("1Å`1000ÇÃíÜÇ≈ìñÇΩÇËÇÃêîÇó\ëzÇµÇƒÇ≠ÇæÇ≥Ç¢\n");

	do 
	{
		printf("ìñÇΩÇËÇÃêîÇÕÅHÅ®");
		scanf("%d", &n);
	if(a>n)
	{
		printf("ìñÇΩÇËÇÃÇ©Ç∏ÇÊÇËè¨Ç≥Ç¢Ç≈Ç∑\n");
	}
	if (a < n)
	{
		printf("ìñÇΩÇËÇÃÇ©Ç∏ÇÊÇËëÂÇ´Ç¢Ç≈Ç∑\n");
	}
	c++;
	} while (a != n);
	printf("ê≥â!%dâÒñ⁄Ç≈ìñÇΩÇËÇ‹ÇµÇΩ\n", c);

}