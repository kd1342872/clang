#include<stdio.h>
main()
{
	//�����^�ϐ�i�̐錾�ƂP�ւ̏�����
	int i;
	//do�`while�̌J��Ԃ�����
	i = 1;
	do {
		//i=?�̕\��(�H�̕����͕ϐ�i�̒l�j
		printf("i=%d\n", i);
		//�ϐ�i�̃C���N�������g
		i++;
		//�㔻�菈��(
	} while ( i <= 10);
}