#include<stdio.h>
main()
{
	int num;
	printf("1����100�܂ł̐���?");
	scanf("%d", &num);
	if (num >= 90)
	{
		printf("���̐��l�̔���́u�T�v�ł�\n");
	}
	else
	{
		if (num>=80&&num<90)
		{
			printf("���̐��l�̔���́u�S�v�ł�\n");
		}
		else
		{
			if (num>=50&&num<80)
			{
				printf("���̐��l�̔���́u�R�v�ł�\n");
			}
			else
			{
				if (num>=30&&num<50)
				{
					printf("���̐��l�̔���́u�Q�v�ł�\n");
				}
				else
				{
					printf("���̐��l�̔���́u�P�v�ł�\n");
				}
			}
		}
	}
}