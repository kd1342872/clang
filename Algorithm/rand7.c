#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, n, c = 0;
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n");

	do 
	{
		printf("������̐��́H��");
		scanf("%d", &n);
	if(a>n)
	{
		printf("������̂�����菬�����ł�\n");
	}
	if (a < n)
	{
		printf("������̂������傫���ł�\n");
	}
	c++;
	} while (a != n);
	printf("����!%d��ڂœ�����܂���\n", c);

}