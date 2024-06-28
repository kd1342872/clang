#include<stdio.h>
main()
{
	int no, ans;

	printf("整数?");
	scanf("%d", &no);
	ans = no % 2;
	if (ans == 0)
	{
		printf("その数は「偶数」です\n");
	}
	else
	{
		printf("その数は「奇数」です\n");
	}
}