#include<stdio.h>
main()
{
	int i;
	int k[30];
	char s[30];

	printf("���������͂��Ă���������");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//�������L�[�̓���
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		//�������L�[���g���ĕ�����
		s[i] -= k[i];
	}
	printf("������������́A%s\n", s);
}