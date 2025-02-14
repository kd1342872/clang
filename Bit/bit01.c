#include<stdio.h>
enum BitState
{
	Base = 0,            //00000000 通常状態
	Poison = 1 << 0,　　 //00000001 どく状態
	sleep = 1 << 1,      //00000010 ねむり状態
	paralysis = 1 << 2,  //00000100 まひ状態
	Burn = 1 << 3,       //00001000 やけど状態
	AtkUp = 1 << 4,      //00010000 攻撃力up
	AtkDown = 1 << 5     //00100000 攻撃力down
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void CleaFlag(UINT* s);

main()
{
	//状態を管理する変数MyStateを宣言してBase(0)で初期化
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	CleaFlag(&MyState);
	DisplayStatus(MyState);
}