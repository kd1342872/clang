#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int playerHP[2]= {100,100};
	int playerCom[2] = {};

	srand(time(0));
	rand();

	while (1)
	{
	//printf("プレイヤー1の体力：%d\n\n", playerHP[0];
		printf("プレイヤー1のターン！(1：通常攻撃　2：強攻撃　3：回復)>");
		scanf("%d", &playerCom);

		switch (playerCom[0])
		{
			case 1;
			printf("通常攻撃！\n\n");
			playerHP[1] -= rand() % 30 + 1; //敵へのダメージ
			break;

			case 2;
			printf("強攻撃！\n\n");
			playerHP[0] -= rand() % 21 - 40;　//敵へのダメージ
			printfHP[1] -= rand % 20;　//自傷ダメージ
			break;

			case 3;
			printf("回復！\n\n);
			playerHP[0] -= rand() % 15 + 1;　//回復
		}
		if (playerHP[1] <= 0)
		{
			printf("プレイヤー2を倒した");
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("プレイヤー1を倒した");
			break;
		}
		
		if (playerHP[0] <= 0)
		{
			printf("自滅した”);
			break;
		}
		
	}
	
}