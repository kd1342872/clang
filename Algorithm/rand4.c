#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,j;
	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for(j=0;j<un;j++)
	{
		printf("☆ ");
	}
	printf("です。\n");
}