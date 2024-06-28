#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int hit;
	srand(time(0));
	rand();
	hit = rand() % 100 + 1;
	
	if(hit<=30)
	{
		printf("‰ïS‚ÌˆêŒ‚!\n");
	}
	else
	{
		printf("’ÊíUŒ‚\n");
	}
	
}