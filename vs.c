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
	//printf("�v���C���[1�̗̑́F%d\n\n", playerHP[0];
		printf("�v���C���[1�̃^�[���I(1�F�ʏ�U���@2�F���U���@3�F��)>");
		scanf("%d", &playerCom);

		switch (playerCom[0])
		{
			case 1;
			printf("�ʏ�U���I\n\n");
			playerHP[1] -= rand() % 30 + 1; //�G�ւ̃_���[�W
			break;

			case 2;
			printf("���U���I\n\n");
			playerHP[0] -= rand() % 21 - 40;�@//�G�ւ̃_���[�W
			printfHP[1] -= rand % 20;�@//�����_���[�W
			break;

			case 3;
			printf("�񕜁I\n\n);
			playerHP[0] -= rand() % 15 + 1;�@//��
		}
		if (playerHP[1] <= 0)
		{
			printf("�v���C���[2��|����");
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("�v���C���[1��|����");
			break;
		}
		
		if (playerHP[0] <= 0)
		{
			printf("���ł����h);
			break;
		}
		
	}
	
}