#include<stdio.h>
main()
{
	int mouth;
	printf("Œ‚ğ“ü—Í");
	scanf("%d", &mouth);

	if (mouth ==2)
	{
		printf("ÅI“ú‚Í28“ú‚Å‚·\n");
	}
	else {
		if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í31“ú‚Å‚·\n");
		}
	}
}