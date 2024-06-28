#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット?");
	scanf("%c", &moji);
	if (moji>='A'&&moji<='A')
	{
		printf("その文字は「大文字」です\n");
	}
	else
	{
		printf("その文字は「小文字」です\n");
	}
}