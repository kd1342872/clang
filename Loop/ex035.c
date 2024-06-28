#include<stdio.h>
main()
{
	int num, sum;
	

	sum = 0;

	//0以外なら真　0なら偽
	while (1)
	{
		printf("数を入れて");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}
		sum += num;
	}
	printf("合計=%d\n", sum);
	
}