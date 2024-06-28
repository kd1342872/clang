#include<stdio.h>
main()
{
	int i;
	int k[30];
	char s[30];

	printf("文字列を入力してください＞");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//復号化キーの入力
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k[i]);
		//復号化キーを使って復号化
		s[i] -= k[i];
	}
	printf("復号化文字列は、%s\n", s);
}