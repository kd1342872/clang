#include<stdio.h>
void str_cat(char *s1, char *s2);
main()
{
	char a[256], b[256];
	printf("”z—ñ a:");
	gets(a);
	//scanf("%c", &a);
	
	printf("”z—ñ b:");
	gets(b);
	//scanf("%c", &b);
	str_cat(a, b);
	printf("”z—ñ a:%s\n", a);
}

void str_cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}