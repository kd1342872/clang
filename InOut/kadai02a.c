#include<stdio.h>
main()
{
	double i,j;

	printf("2�̎����l�H");
	scanf("%lf%lf", &i,&j);
	printf("*** %f��%f�̎l�����Z ***\n",i,j);
	printf("�a��%f", i + j);
	printf(" ����%f", i - j);
	printf( "�ρ�%f", i * j);
	printf(" ����%f\n", i / j);
}