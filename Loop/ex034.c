#include<stdio.h>
main()
{
	//整数型変数iの宣言と１への初期化
	int i;
	//do～whileの繰り返し処理
	i = 1;
	do {
		//i=?の表示(？の部分は変数iの値）
		printf("i=%d\n", i);
		//変数iのインクリメント
		i++;
		//後判定処理(
	} while ( i <= 10);
}