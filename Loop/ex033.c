#include<stdio.h>
main()
{
	int i, num, sum;
	/*intf("���́H");
	scanf("%d", &num);

	for (sum = 0, i = 0; num != -999; i++) 
	{
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v%d ����=%2f\n", sum,(float)sum/i);
	*/
	i = 0, sum = 0, num = 0;
	do {
		sum += num;
		i++;
		printf("���́H");
		scanf("%d", &num);
}
	while (num != -999);
printf("���v%d����=%.2f\n",sum,(float)sum/(i-1));
}
