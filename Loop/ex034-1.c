#include<stdio.h>
main()
{
	int num;
	printf("���́H");
	scanf("%d", &num);
	do {
		printf("*****\n");
		num--;//num-=1;ornum=num-1;
	} while (num > 0);
}