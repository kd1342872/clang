#include<stdio.h>
main()
{
	char data[10];
	int i;

	printf("�񐔂ƕ�����̓���");
	scanf("%d%c",&i,&data[0]);

	for (i=0; data[i]!='\0'; i++){}
	printf("%s ", &data[0]);
}