#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, n, c = 0;
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	printf("1〜1000の中で当たりの数を予想してください\n");

	do 
	{
		printf("当たりの数は？→");
		scanf("%d", &n);
	if(a>n)
	{
		printf("当たりのかずより小さいです\n");
	}
	if (a < n)
	{
		printf("当たりのかずより大きいです\n");
	}
	c++;
	} while (a != n);
	printf("正解!%d回目で当たりました\n", c);

}