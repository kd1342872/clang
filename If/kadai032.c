#include<stdio.h>
main()
{
	int no, ans;

	printf("����?");
	scanf("%d", &no);
	ans = no % 2;
	if (ans == 0)
	{
		printf("���̐��́u�����v�ł�\n");
	}
	else
	{
		printf("���̐��́u��v�ł�\n");
	}
}