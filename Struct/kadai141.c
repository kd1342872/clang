#include<stdio.h>
#include<string.h>
struct profile
{
	char cors;
	char kyouka;
	int tanni;
};
main()
{
	struct profile data;
	strcpy(data.cors,"�Q�[���\�t�g�P�R�[�X");
	strcpy(data.kyouka,"C����");
	data.tanni= 8;
	printf("�R�[�X���F%s\n", data.cors);
	printf("���Ȗ�:%s\n", data.kyouka);
	printf("�P��:%d\n", data.tanni);
}