#include<stdio.h>
#define Sol_Num 3 //隊員の数
typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}weapon;
typedef struct
{
	char name[20];
	int hp;
	weapon wpn;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);
main()
{
	//Soldier sol;
	Soldier sols[Sol_Num]; //構造体配列の宣言
	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if(fp = fopen(filename, "r"))
	{
		for (i = 0; i < Sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else
	{
		printf("読み込みエラー\n");
		return;
	}
}
void Display(Soldier* s)
{
	int i;
	for (i = 0; i < Sol_Num; i++)
	{
		printf("%s 体力:%d\n", (s+i)->name, (s+i)->hp);
		printf("武器:%s 弾数:%d 攻撃力:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}