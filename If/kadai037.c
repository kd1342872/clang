#include<stdio.h>
main()
{
	int num;
	printf("1から100までの整数?");
	scanf("%d", &num);
	if (num >= 90)
	{
		printf("その数値の判定は「５」です\n");
	}
	else
	{
		if (num>=80&&num<90)
		{
			printf("その数値の判定は「４」です\n");
		}
		else
		{
			if (num>=50&&num<80)
			{
				printf("その数値の判定は「３」です\n");
			}
			else
			{
				if (num>=30&&num<50)
				{
					printf("その数値の判定は「２」です\n");
				}
				else
				{
					printf("その数値の判定は「１」です\n");
				}
			}
		}
	}
}