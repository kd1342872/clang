#include<stdio.h>
main()
{
	int num, sum;
	

	sum = 0;

	//0�ȊO�Ȃ�^�@0�Ȃ�U
	while (1)
	{
		printf("��������");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}
		sum += num;
	}
	printf("���v=%d\n", sum);
	
}