#include<stdio.h>
main()
{
	int num;

	printf("�����R�[�h(-1�œ��͏I��)?");
	scanf("%d", &num);

	while (num!=-1)
	{
		num += 0x20;
		printf("�ϊ������ % c\n", num + 0x20);
	}
}