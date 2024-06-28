#include<stdio.h>
main()
{
	char moji;

	printf("1•¶Žš“ü—Í");
	scanf("%c", &moji);
	if (moji >= 'A'&&moji<='Z')
	{
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji + 0x20);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z') 
		{
			printf("•ÏŠ·‚·‚é‚Æ%c\n", moji - 0x20);
		}
		else
		{
			printf("%c\n", moji);
		}
	}
}