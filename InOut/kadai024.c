#include<stdio.h>
main()
{
	int ia, ib,sum;
	int p, m, k, w,am;
	printf("2つの数値?");
	scanf("%d%d", &ia, &ib);
	printf("***%dと%dの四則演算***\n",ia,ib);
	p = ia + ib;
	m = ia - ib;
	k = ia * ib;
	w = ia / ib;
	am = ia % ib;
	printf("%d+%d=%d \n",ia,ib,p);
	printf("%d-%d=%d \n",ia,ib,m);
	printf("%d*%d=%d \n",ia,ib,k);
	printf("%d/%d=%d あまり %d\n",ia,ib,w,am);
}