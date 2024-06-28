#include<stdio.h>
main()
{
	int h, m, s;
	printf("秒数の入力");
	scanf("%d", &s);

	if (s < 0) //マイナスか？
	{
		printf("プラスの値を入れてください");
	}
	else {
		if (s <= 5000)//5000以下？
		{
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d時間%d分%d秒\n", h, m, s);
		}
		else {
			printf("エラー\n");
		}
	}
}