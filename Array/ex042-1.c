#include<dtdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	printf("1�������\��\n");
	
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("������ŕ\��\n");

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%s", data[i]);
	}
}