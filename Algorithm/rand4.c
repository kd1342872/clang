#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,j;
	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for(j=0;j<un;j++)
	{
		printf("�� ");
	}
	printf("�ł��B\n");
}