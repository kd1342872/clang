#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i, j,k;

	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é\n");
	printf("a=");
	for (i = 0; i <= 9; i++) 
	{
		printf("%d ",a[i]);
	}
	printf("\nb=");
	for (j = 0; j <= 9; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\nc=");

	for (k = 0; k <= 9; k++)
	{
		printf("%d ", c[k]);
	}
}