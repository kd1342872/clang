#include<stdio.h>
main()
{
	int sei;
	printf("��������");
	scanf("%d", &sei);
	if (sei%4==0&&sei%100!=0||sei%400==0)
	{
		printf("���邤�N�ł�\n");
	}
	else {
		printf("���N�ł�\n");
	}
	
	
}
