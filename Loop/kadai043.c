#include<stdio.h>
main()
{
	int num;

	printf("文字コード(-1で入力終了)?");
	scanf("%d", &num);

	while (num!=-1)
	{
		num += 0x20;
		printf("変換すると % c\n", num + 0x20);
	}
}