#include<stdio.h>
main()

{
	int g, i;
	g = 0;

	for (g = 0, i = 1; i <= 10; i++) {
		g += 1;
		printf("1から%dまでの和　=　%d\n", i, g);
	}
}
