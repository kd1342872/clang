#include<stdio.h>
main()
{
	int mouth;
	printf("月を入力");
	scanf("%d", &mouth);

	if (mouth ==2)
	{
		printf("最終日は28日です\n");
	}
	else {
		if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}