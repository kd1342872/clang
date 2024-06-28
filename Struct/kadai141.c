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
	strcpy(data.cors,"ゲームソフト１コース");
	strcpy(data.kyouka,"C言語");
	data.tanni= 8;
	printf("コース名：%s\n", data.cors);
	printf("教科名:%s\n", data.kyouka);
	printf("単位:%d\n", data.tanni);
}