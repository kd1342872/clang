#include<stdio.h>
main()
{
	int mouth;
	printf("�������");
	scanf("%d", &mouth);

	if (mouth ==2)
	{
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}
}