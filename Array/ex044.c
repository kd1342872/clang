#include<stdio.h>
main()
{
	char moji1[100], moji2[100], w[100];
	int i;

	//����
	printf("������P�����:");
	scanf("%c",&moji1);
	printf("������Q�����:");
	scanf("%c",&moji2);
	
	//���z���moji1�z����R�s�[
	for (i=0;moji1[i]!='\0'; i++)
	{
		printf("%c\n", moji1[i]);
	}

	//\0������
	w[i]='\0'

	for (i=0;moji2[i]!='\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';

	for (i = 0; w[i] != '\0'; i++)
	{
		moji2[i] = w[i];
	}
	moji2[i] = '\0';

	printf("����ւ����\n");
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
}