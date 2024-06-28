#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i c;
	
	srand(time(0));
	rand();

	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &i);

	c = rand() % 3;
	switch (i)
	{
		case 1;
		printf("\nプレイヤーは、グーです。\n");
		break;

		case 2;
		printf("\nプレイヤーは、チョキです。\n");
		break;
			
		case 3;
		printf("\nプレイヤーは、パーです。\n");
		break;
	}
	switch (c)
	{
		case 1;
			printf("\nプレイヤーは、グーです。\n");
			break;

			case 2;
				printf("\nプレイヤーは、チョキです。\n");
				break;

				case 3;
					printf("\nプレイヤーは、パーです。\n");
					break;
	}
	switch (((i-1)-c+3)%3)
	{
		case 0;
		printf("\nあいこです。\n");
		break;
		case 1;
			printf("\nコンピューターの勝ちです。\n");
			break;
			case 2;
				printf("\nプレイヤーの勝ちです。\n");
				break;
	}
}