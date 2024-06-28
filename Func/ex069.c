#include<stdio.h>
main() 
{
	int data, sum, cut;

	//入力
	printf("整数：");
	ret = scanf("%d", &data);

	while (data!=EOF)
	{
		//計算
		sum += data;
		cut++;
		//入力
		printf("整数：");
		ret = scanf("%d", &data);
	}
	//合計と平均を求める
	printf("合計=%d 平均=%.2f\n", sum, (float)sum / cut);
}
 