#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	printf("1�������\��\n");
	
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}

	printf("\n������ŕ\��\n");
	printf("%s\n",&data[0]); //%s�̎��̓A�h���X���w�� &�K�{
	//printf("%s\n", data+2);�@//�z�񖼂��������Ɛ擪�A�h���X��\��
}