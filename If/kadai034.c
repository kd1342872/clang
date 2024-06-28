#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力?");
	scanf("%c", &moji);
	if (moji >= 'a'||moji>='A')
	{
		printf("アルファベットです\n");
	}
	else
	{
		printf("ERROR\n");
	}
}