#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i c;
	
	srand(time(0));
	rand();

	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &i);

	c = rand() % 3;
	switch (i)
	{
		case 1;
		printf("\n�v���C���[�́A�O�[�ł��B\n");
		break;

		case 2;
		printf("\n�v���C���[�́A�`���L�ł��B\n");
		break;
			
		case 3;
		printf("\n�v���C���[�́A�p�[�ł��B\n");
		break;
	}
	switch (c)
	{
		case 1;
			printf("\n�v���C���[�́A�O�[�ł��B\n");
			break;

			case 2;
				printf("\n�v���C���[�́A�`���L�ł��B\n");
				break;

				case 3;
					printf("\n�v���C���[�́A�p�[�ł��B\n");
					break;
	}
	switch (((i-1)-c+3)%3)
	{
		case 0;
		printf("\n�������ł��B\n");
		break;
		case 1;
			printf("\n�R���s���[�^�[�̏����ł��B\n");
			break;
			case 2;
				printf("\n�v���C���[�̏����ł��B\n");
				break;
	}
}