#include<stdio.h>
main()
{
	int num, ;

	printf("数を入れて:");
	scanf("%d", &num);

	while (0 < num) {
		printf("*");
		num--;
	}
}