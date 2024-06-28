#include<stdio.h>
enum BitState
{
	Base = 0,            //00000000 ’Êíó‘Ô
	Poison = 1 << 0,@@ //00000001 ‚Ç‚­ó‘Ô
	sleep = 1 << 1,      //00000010 ‚Ë‚Ş‚èó‘Ô
	paralysis = 1 << 2,  //00000100 ‚Ü‚Ğó‘Ô
	Burn = 1 << 3,       //00001000 ‚â‚¯‚Çó‘Ô
	AtkUp = 1 << 4,      //00010000 UŒ‚—Íup
	AtkDown = 1 << 5     //00100000 UŒ‚—Ídown
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void CleaFlag(UINT* s);

main()
{
	//ó‘Ô‚ğŠÇ—‚·‚é•Ï”MyState‚ğéŒ¾‚µ‚ÄBase(0)‚Å‰Šú‰»
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	CleaFlag(&MyState);
	DisplayStatus(MyState);
}