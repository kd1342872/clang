#include<stdio.h>
enum BitState
{
	Base = 0,            //00000000 �ʏ���
	Poison = 1 << 0,�@�@ //00000001 �ǂ����
	sleep = 1 << 1,      //00000010 �˂ނ���
	paralysis = 1 << 2,  //00000100 �܂Џ��
	Burn = 1 << 3,       //00001000 �₯�Ǐ��
	AtkUp = 1 << 4,      //00010000 �U����up
	AtkDown = 1 << 5     //00100000 �U����down
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void CleaFlag(UINT* s);

main()
{
	//��Ԃ��Ǘ�����ϐ�MyState��錾����Base(0)�ŏ�����
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	CleaFlag(&MyState);
	DisplayStatus(MyState);
}